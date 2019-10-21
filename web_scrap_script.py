import requests
from requests.exceptions import RequestException
import contextlib
from bs4 import BeautifulSoup
import IPython


class web_scrap(object):

    def __init__(self):
        self.sess = requests.session()

    def simple_get(self, url):
        """
        Attempts to get the content at `url` by making an HTTP GET request.
        If the content-type of response is some kind of HTML/XML, return the
        text content, otherwise return None.
        """
        try:
            with contextlib.closing(requests.get(url, stream=True)) as resp:
                if self.is_good_response(resp):
                    return resp.content
                else:
                    return None

        except RequestException as e:
            self.log_error('Error during requests to {0} : {1}'.format(url, str(e)))
            return None

    def is_good_response(self, resp):
        """
        Returns True if the response seems to be HTML, False otherwise.
        """
        content_type = resp.headers['Content-Type'].lower()
        return (resp.status_code == 200
                and content_type is not None
                and content_type.find('html') > -1)

    def log_error(self, e):
        """
        It is always a good idea to log errors.
        This function just prints them, but you can
        make it do anything.
        """
        print(e)

    def login(self, url, login_data):
        """
        log in using the current session
        :param login_data:
        :return:
        """
        if self.sess is None:
            self.sess = requests.session()
        self.sess.post(url, login_data)


myscrap = web_scrap()
myscrap.login()
raw_html = myscrap.simple_get('http://openjudge.cn/user/17014/')

IPython.embed()