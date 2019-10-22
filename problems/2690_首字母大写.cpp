/*
2690: 首字母大写
http://bailian.openjudge.cn/practice/2690/


描述
对一个字符串中的所有单词，如果单词的首字母不是大写字母，则把单词的首字母变成大写字母。在字符串中，单词之间通过空白符分隔，空白符包括：空格(' ')、制表符('\t')、回车符('\r')、换行符('\n')。
输入
输入一行：待处理的字符串（长度小于80）。
输出
输出一行：转换后的字符串。
样例输入
if so, you already have a google account. you can sign in on the right.
样例输出
If So, You Already Have A Google Account. You Can Sign In On The Right.
来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	char str[100];
	cin.getline(str,100);
	int l=strlen(str);
	if(str[0]>='a'&&str[0]<='z')
		{
				str[0]-='a';
				str[0]+='A';
			}
	for(int i=1;i<l;i++)
	{
		if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')))
		{
			if(str[i+1]>='a'&&str[i+1]<='z')
			{
				str[i+1]-='a';
				str[i+1]+='A';
			}
		}
	}
	cout<<str;
	return 0;
}
