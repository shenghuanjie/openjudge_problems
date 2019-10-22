/*
2684: 求阶乘的和
http://bailian.openjudge.cn/practice/2684/


描述
给定正整数n，求不大于n的正整数的阶乘的和（即求1!+2!+3!+...+n!）
输入
输入有一行，包含一个正整数n（1 < n < 12）。
输出
输出有一行：阶乘的和。
样例输入
5
样例输出
153
来源
计算概论05

*/

#include<iostream>
using namespace std;
int f(int n)
{
	int result=1;
	for(int i=1;i<=n;i++)
		result*=i;
	return (result);
}
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		sum+=f(i);
	cout<<sum<<endl;
	return 0;
}
