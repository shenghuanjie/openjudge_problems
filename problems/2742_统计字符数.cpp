/*
2742: 统计字符数
http://bailian.openjudge.cn/practice/2742/


描述
判断一个由a-z这26个字符组成的字符串中哪个字符出现的次数最多
输入
第1行是测试数据的组数n，每组测试数据占1行，是一个由a-z这26个字符组成的字符串每组测试数据之间有一个空行，每行数据不超过1000个字符且非空
输出
n行，每行输出对应一个输入。一行输出包括出现次数最多的字符和该字符出现的次数，中间是一个空格。如果有多个字符出现的次数相同且最多，那么输出ascii码最小的那一个字符
样例输入
2
abbccc

adfadffasdf

样例输出
c 3
f 4

*/

#include<iostream>
using namespace std;
int main()
{
	char input[1000],word[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int num[1000],n,k,i,j;
	cin>>n;
	for(k=0;k<n;k++)
	{
		memset(num,0,sizeof(num));
	cin>>input;
	for(i=0;i<strlen(input);i++)
	{
		for(j=0;j<26;j++)
		{
		    if(input[i]==word[j])
			{num[j]++;break;}
		}
	}
	i=0;
	for(j=0;j<26;j++)
	{
		if(num[j]>num[i])
			i=j;
	}
	cout<<word[i]<<" "<<num[i]<<endl;
	}
	return 0;
}
