/*
3246: 展览会
http://bailian.openjudge.cn/practice/3246/


描述
某展览会参展总人数为n，每人在会场的停留时间为[xi, yi)，倘若第i个人时刻t在场内，则有xi <=t < y i。求展览会会场中最多有多少人同时在场。
输入
第一行为参展总人数n，1<=n<=1000。第二行的n个数是这n个人的到达时间xi；第三行的n个数是这n个人对应的离开时间yi。其中xi,yi是不超过2000的正整数。
输出
会场中最多有多少人同时在场。
样例输入
4
3 2 6 2
9 5 8 6

样例输出
3

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	unsigned n,min=(unsigned)-1,max=0;
	unsigned i,temp,people=0,count=0;
	cin>>n;
	int *x=new int[n+1];
	int *y=new int[n+1];
	for(i=1;i<=n;i++)	
	{
		cin>>x[i];
		if(x[i]>max)max=x[i];
		if(x[i]<min)min=x[i];
	}
	for(i=1;i<=n;i++)
	{
		cin>>y[i];
		if(y[i]>max)max=y[i];
		if(y[i]<min)min=y[i];
	}
	for(temp=min;temp<=max;temp++)
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			if(x[i]<=temp&&y[i]>temp)count++;
		}
		if(count>people){people=count;}
	}
	cout<<people<<endl;
	delete x;delete y;
	return 0;
}
