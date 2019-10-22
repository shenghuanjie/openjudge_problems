/*
2689: 大小写字母互换
http://bailian.openjudge.cn/practice/2689/


描述
把一个字符串中所有出现的大写字母都替换成小写字母，同时把小写字母替换成大写字母。
输入
输入一行：待互换的字符串。
输出
输出一行：完成互换的字符串（字符串长度小于80）。
样例输入
If so, you already have a Google Account. You can sign in on the right. 
样例输出
iF SO, YOU ALREADY HAVE A gOOGLE aCCOUNT. yOU CAN SIGN IN ON THE RIGHT. 
来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	char str[110];
	cin.getline(str,100);
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(islower(str[i]))
		str[i]=str[i]-'a'+'A';
		else if(isupper(str[i]))
			str[i]=str[i]-'A'+'a';
	}
	cout<<str<<endl;
	return 0;
}
