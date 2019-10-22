/*
2749: 分解因数
http://bailian.openjudge.cn/practice/2749/


描述
给出一个正整数a，要求分解成若干个正整数的乘积，即a = a1 * a2 * a3 * ... * an，并且1 < a1 <= a2 <= a3 <= ... <= an，问这样的分解的种数有多少。注意到a = a也是一种分解。
输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数a (1 < a < 32768)
输出
n行，每行输出对应一个输入。输出应是一个正整数，指明满足要求的分解的种数
样例输入
2
2
20

样例输出
1
4


*/

#include<iostream>
#include<cmath>
using namespace std;
int factoring(int x,int a)
{
	int i,j,sum=0;
	if(x==2)
		return 1;
	for(j=2;j<x;j++)
	{
		if(x%j==0)
			goto he;
	}
	return 1;
he:for(i=j;i<=(int)sqrt((double)x);i++)
	{
		if((x%i==0)&&(i>=a)&&(a<=(x/i)))
		{
			sum+=factoring(x/i,i);
		}
	}
   return (sum+1);
}
int main()
{
	int n,x,i,sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		sum=factoring(x,2);
		cout<<sum<<endl;
	}
	return 0;
}
