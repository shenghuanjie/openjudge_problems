/*
3250: 字母重排
http://bailian.openjudge.cn/practice/3250/


描述
输入为一行字符串，里面包含数字、字母(小写)等各种字符，要求把字符串里面的字母挑出来，按照ASCII码从小到大排序输出.
输入
输入为一行字符串(小于1024个字符),所有字母都是小写
输出
按ASCII码排序的字母串
样例输入
fasllafsk.afk()(das890124^&(*%^&*((hh8jjjdasj
样例输出
aaaaaddfffhhjjjjkkllssss
提示
可以利用数组解题
来源
cs10107 C++ Final Exam

*/

#include<iostream>
using namespace std;
int main()
{
	int word[26];
	memset(word,0,sizeof(word));
	char str[1100];
	cin.getline(str,1100);
	int i;
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			word[str[i]-'a']++;
		}
	}
	for(i=0;i<26;i++)
	{
		for(;word[i]>0;word[i]--)
		{
			cout<<(char)(i+'a');
		}
	}
	cout<<endl;
	return 0;
}
