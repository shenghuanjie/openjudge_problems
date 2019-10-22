/*
2976: All in All
http://bailian.openjudge.cn/practice/2976/


描述
给定两个字符串s和t，请判断s是否是t的子序列。即从t中删除一些字符，将剩余的字符连接起来，即可获得s。
输入
包括若干个测试数据。每个测试数据由两个ASCII码的数字和字母串s和t组成，s和t的长度不超过100000。
输出
对每个测试数据，如果s是t的子序列则输出“Yes”，否则输出“No”。
样例输入
sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter
样例输出
Yes
No
Yes
No
来源
Ulm Local 2002, POJ 1936, 程序设计实习2007

*/

#include<iostream>
using namespace std;
int main()
{
	char s[100000]={'\0'},t[100000]={'\0'};
	unsigned i,j,ls,lt;
	while(cin>>s>>t)
	{
			i=0;j=0;
			ls=strlen(s);
			lt=strlen(t);
			for(i=0;i<lt;i++)
			{
				if((j<ls)&&(t[i]==s[j]))
				j++;
			}
			if(j==ls)
				cout<<"Yes"<<endl;
			if(j<ls)
				cout<<"No"<<endl;
	}
	return 0;
}
