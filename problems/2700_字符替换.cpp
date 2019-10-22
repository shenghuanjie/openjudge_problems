/*
2700: 字符替换
http://bailian.openjudge.cn/practice/2700/


描述
把一个字符串中特定的字符全部用给定的字符替换，得到一个新的字符串。
输入
只有一行，由一个字符串和两个字符组成，中间用单个空格隔开。字符串是待替换的字符串，字符串长度小于等于30个字符，且不含空格等空白符；接下来一个字符为需要被替换的特定字符；接下来一个字符为用于替换的给定字符。
输出
一行，即替换后的字符串。
样例输入
hello-how-are-you o O
样例输出
hellO-hOw-are-yOu
来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	char str[1000],x,y;
	int n;
	cin>>n;
	while(n>0)
	{
		cin>>str>>x>>y;
		int l=strlen(str);
		for(int i=0;i<l;i++)
		{
			if(str[i]==x)
				str[i]=y;
		}
		cout<<str<<endl;
		n--;
	}
	return 0;
}
