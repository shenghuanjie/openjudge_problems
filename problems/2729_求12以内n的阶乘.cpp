/*
2729: 求12以内n的阶乘
http://bailian.openjudge.cn/practice/2729/


描述
求12以内n的阶乘。
输入
只有一行输入，整数n（n<=12）。
输出
只有一行输出，数值n!。
样例输入
3
样例输出
6
来源
JP06

*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	unsigned result=1;
	cin>>n;
	for(;n>1;n--)
	{
		result*=n;
	}
	cout<<result<<endl;
    return 0;
}
