/*
2925: 大整数的因子
http://bailian.openjudge.cn/practice/2925/


描述
已知正整数k满足2<=k<=9，现给出长度最大为30位的十进制非负整数c，求所有能整除c的k。
输入
一个非负整数c，c的位数<=30。
输出
若存在满足 c%k == 0 的k，从小到大输出所有这样的k，相邻两个数之间用单个空格隔开；若没有这样的k，则输出"none"。
样例输入
30

样例输出
2 3 5 6 


*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned k;
	char x[100];
	unsigned a[100];
	while(cin>>x)
	{
		if(x[0]=='-')return 0;
	bool yes=true;
	int l=strlen(x);
	for(k=2;k<10;k++)
	{
		memset(a,0,sizeof(a));
		for(int i=0;i<l;i++)
		a[i]=x[i]-'0';
		for(int i=0;i<l-1;i++)
		{
			a[i+1]+=(a[i]%k)*10;
		}
		if(a[l-1]%k==0){cout<<k<<" ";yes=false;}
	}
	if(yes)cout<<"none";
	cout<<endl;
	}
	return 0;
}
