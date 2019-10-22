/*
A: 数字方格
http://cxsjsx.openjudge.cn/contest1783/A/


描述
如上图，有3个方格，每个方格里面都有一个整数a1，a2，a3。已知0 <= a1, a2, a3 <= n，而且a1 + a2是2的倍数，a2 + a3是3的倍数， a1 + a2 + a3是5的倍数。你的任务是找到一组a1，a2，a3，使得a1 + a2 + a3最大。
输入
一行，包含一个整数n (0 <= n <= 100)。
输出
一个整数，即a1 + a2 + a3的最大值。
样例输入
3

样例输出
5


*/

#include<iostream>
using namespace std;
int main()
{
	int t,n,a,b,c;
	cin>>t;
	int result;
	for(;t>0;t--)
	{
		cin>>n;
		result=0;
		for(a=0;a<=n;a++)
		{
			for(b=0;b<=n;b++)
			{
				for(c=0;c<=n;c++)
				{
					if(((a+b)%2==0)&&((b+c)%3==0)&&((a+b+c)%5==0))
					{
						if(result<a+b+c)
						{
							result=a+b+c;
						}
					}
				}
			}
		}
		cout<<result<<endl;
	
	
	}
	return 0;
}
