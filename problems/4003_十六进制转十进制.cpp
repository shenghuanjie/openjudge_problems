/*
4003: 十六进制转十进制
http://bailian.openjudge.cn/practice/4003/


描述
将十六进制数转换成十进制数
输入
第一行有一个整数T，表示共有T组数据接下来T行，每一行为一个16进制无符号正整数，位数不超过8位，数中的a-f均为大写字母，数前没有多余的0
输出
输出共T行，每一行是一组数据的十进制表示，数字前不得有多余的0。十进制数小于2^31
样例输入
4
A
F
FFFE
10001
样例输出
10
15
65534
65537

*/

#include<iostream>
#include<cmath>
using namespace std;
int change(char x)
{
	if(x<='9'&&x>='0')return (x-'0');
	else if(x>='A'&&x<='F')return (x-'A'+10);
}
int main()
{
	int t,result,i,len;
	char str[10];
	cin>>t;
	for(;t>0;t--)
	{
		cin>>str;
		result=0;
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			result+=  change(str[len-1-i])*(int)pow(16.0,(double)i);
		}
		cout<<result<<endl;
	}
	return 0;
}
