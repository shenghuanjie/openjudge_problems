/*
2780: Eva's Problem
http://bailian.openjudge.cn/practice/2780/


描述
Eva的家庭作业里有很多数列填空练习。填空练习的要求是：已知数列的前四项，填出第五项。因为已经知道这些数列只可能是等差或等比数列，她决定写一个程序来完成这些练习。
输入
第一行是数列的数目t（0 <= t <= 20）。以下每行均包含四个整数，表示数列的前四项。约定数列的前五项均为不大于10^5的自然数，等比数列的比值也是自然数。
输出
对输入的每个数列，输出它的前五项。
样例输入
2
1 2 3 4
1 2 4 8

样例输出
1 2 3 4 5
1 2 4 8 16

来源
POJ Monthly--2004.05.15 Null

*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,a[6];
	cin>>n;
	for(;n>0;n--)
	{
	for(i=1;i<=4;i++)
		cin>>a[i];
	cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" ";
	if(a[2]-a[1]==a[3]-a[2]&&a[3]-a[2]==a[4]-a[3]&&a[4]-a[3]==a[2]-a[1])
	{
		cout<<a[4]+a[4]-a[3]<<endl;
	}
	else
	{
		cout<<a[4]*a[4]/a[3]<<endl;
	}
	}
	return 0;
}     
