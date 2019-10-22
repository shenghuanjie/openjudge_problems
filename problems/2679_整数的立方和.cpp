/*
2679: 整数的立方和
http://bailian.openjudge.cn/practice/2679/


描述
给定一个正整数k（1<k<10），求1到k的立方和m。即m=1+2*2*2+…+k*k*k。
输入
输入只有一行，该行包含一个正整数k。
输出
输出只有一行，该行包含1到k的立方和。
样例输入
5 
样例输出
225
来源
计算概论05－模拟考试1

*/

#include<iostream>
using namespace std;
int main()
{
	int a,i,sum=0;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		sum=sum+i*i*i;
	}
	cout<<sum<<endl;
	return 0;
}
