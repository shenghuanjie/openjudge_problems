/*
2911: 受限完全平方数
http://bailian.openjudge.cn/practice/2911/


描述
A，B都是四位数，且是完全平方数。C是一个4位数，且每一位的数字都相同。已知C=A-B,求所有满足条件，且小于限制的A。
输入
输入一个MAX，四位数。
输出
从小到大输出所有的满足条件的A，且A应该小于MAX。注意，每输出一个数后换行。Data is modified at 17:40, any "wrong" code submitted befor this time may be accepted if submitted again.
样例输入
无
样例输出
无

*/

#include<iostream>
using namespace std;
int main()
{
	int x,a[300],w=0,n;
	cin>>n;
	for(int i=32;i<=99;i++)
	{
		for(int j=i+1;j<=99;j++)
		{
			x=j*j-i*i;
			if(x>=1000&&x/1000==x%10&&((x/100)%10)==x%10&&((x%100)/10==x%10))
			{
					a[w++]=j*j;
			}
		}
	}
	for(int i=w-1;i>=0;i--)
	{
		if(a[i]<n)
			cout<<a[i]<<endl;
	}
	return 0;
}
