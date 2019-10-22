import requests
from bs4 import BeautifulSoup
import json
import os


code_folder = 'problems'
os.makedirs(code_folder, exist_ok=True)
with open('login_data.json') as fp:
    login_data = json.load(fp)

sess = requests.Session()
login_url = 'http://bailian.openjudge.cn/api/auth/login/'
sess.get("http://openjudge.cn/auth/login/")
sess.post(login_url, data=login_data) # , headers=dict(referer=login_url), verify=True
user_url = 'http://openjudge.cn/user/17014/'
# print(soup.prettify())
problem_set = set()


def retrieve_codes(url):
    reps = sess.get(url)
    soup = BeautifulSoup(reps.text, 'html.parser')
    titles = soup.find_all(class_="title")[1:]
    statuses = soup.find_all(class_="result")[1:]
    for title, status in zip(titles, statuses):
        if title.text in problem_set:
            continue
        save_file = os.path.join(code_folder, title.text.replace(': ', "_") + ".cpp")
        if os.path.isfile(save_file):
            problem_set.add(title.text)
            continue
        accepted = status.find_all(class_="result-right")
        if len(accepted) > 0:
            # get code
            accepted = accepted[0]
            code_url = accepted['href']
            code_page = sess.get(code_url)
            code_soup = BeautifulSoup(code_page.text, 'html.parser')
            code_block = code_soup.find("pre").text

            # get question
            question_url = title.find("a")['href']
            question_page = sess.get(question_url)
            question_soup = BeautifulSoup(question_page.text, 'html.parser')
            question_block = question_soup.find(class_="problem-content").text

            # save solution
            code_block = "/*\n" + title.text + "\n" + \
                         title.find("a")["href"] + "\n\n" + \
                         question_block + "\n*/\n\n" + \
                         code_block
            with open(save_file, "w") as f:
                print(code_block, file=f)
            problem_set.add(title.text)


retrieve_codes(user_url)
print("page 1 is done")
for ipage in range(2, 13):
    newurl = user_url + '/?page=' + str(ipage)
    retrieve_codes(newurl)
    print("page " + str(ipage) + " is done")


