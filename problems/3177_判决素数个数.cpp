/*
3177: 判决素数个数
http://bailian.openjudge.cn/practice/3177/


描述
输入两个整数X和Y，输出两者之间的素数个数（包括X和Y）。
输入
两个整数X和Y（1 <= X,Y <= 105）。
输出
输出一个整数，表示X，Y之间的素数个数（包括X和Y）。
样例输入
1 100
样例输出
25

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if(x>y)
	{
		x=x^y;
		y=y^x;
		x=x^y;
	}
	int temp=sqrt((double)y);
	int p[100000];
	p[0]=1;p[1]=1;
	for(int i=2;i<=temp;i++)
    {
		int sum=i;
		if(*(p+sum)!=1)
		{
		while(sum<=y)
		{ 
			sum+=i;
			*(p+sum)=1;
		}
		}
	}
	int count=0;
	for(int i=x;i<=y;i++)
		if(*(p+i)!=1)count++;
	cout<<count<<endl;
	return 0;
}
