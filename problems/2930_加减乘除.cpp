/*
2930: 加减乘除
http://bailian.openjudge.cn/practice/2930/


描述
根据输入的运算符对输入的整数进行简单的整数运算。运算符只会是加+、减-、乘*、除/、求余%、阶乘！六个运算符之一。输出运算的结果，如果出现除数为零，则输出“error”,如果求余运算的第二个运算数为0，也输出“error”。
输入
输入为一行。先输入第一个整数，空格输入运算符，然后再空格输入第二个整数，回车结束本次输入。如果运算符为阶乘！符号，则不输入第二个整数，直接回车结束本次输入。
输出
输出为一行。输出对输入的两个（或一个）数，根据输入的运算符计算的结果，或者“error”。
样例输入
12 + 34
54 – 25
3 * 6
45 / 0
5 !
34 % 0

样例输出
46
29
18
error
120
error

提示
运算不会超出整型数据的范围。0!=1; 测试数据有多组。
来源
06计算概论课期末考试题

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char sign;
	int a,b;
	while(cin>>a>>sign)
	{
	if(sign=='!')
	{
		int result=1;
		int i=2;
		for(;i<=a;i++)
		{
			result*=i;
		}
		cout<<result<<endl;
	}
	else
	{
		cin>>b;
		if(sign=='+')
		{
			cout<<a+b<<endl;
		}
		else if(sign=='-')
		{
			cout<<a-b<<endl;
		}
		else if(sign=='*')
		{
			cout<<a*b<<endl;
		}
		else if(sign=='/')
		{
			if(b==0)
			{
				cout<<"error"<<endl;
			}
			else
				cout<<a/b<<endl;
		}
		else if(sign=='%')
		{
			if(b==0)
			{
				cout<<"error"<<endl;
			}
			else
				cout<<a%b<<endl;
		}
	}
	}
	return 0;
}
