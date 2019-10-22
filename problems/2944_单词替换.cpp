/*
2944: 单词替换
http://bailian.openjudge.cn/practice/2944/


描述
输入一个字符串，以回车结束（字符串长度<=100）。该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。
输入
输入包括3行，第1行是包含多个单词的字符串 s;第2行是待替换的单词a(长度 <= 100);第3行是a将被替换的单词b(长度 <= 100).s, a, b 最前面和最后面都没有空格.
输出
输出只有 1 行，将s中所有单词a替换成b之后的字符串。
样例输入
You want someone to help you
You
I

样例输出
I want someone to help you

来源
医学部计算概论2006期末考试题

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,a,b,temp;
	int i,ls;
	getline(cin,s);
	getline(cin,a);
	getline(cin,b);
	ls=s.size();
	for(i=0;i<ls;i++)
	{
		temp+=s[i];
		while(s[i+1]==' ')
		{
			if(a==temp)
				cout<<b<<" ";
			else
				cout<<temp<<" ";
			temp="";
			i++;
		}
			while((i+1)==ls)
		{
			if(temp==a)
				cout<<b<<endl;
			else
				cout<<temp<<endl;
			i++;
		}
	}
    return 0;
}
