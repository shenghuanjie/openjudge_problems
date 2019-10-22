/*
2928: 素数回文数的个数
http://bailian.openjudge.cn/practice/2928/


描述
求11到n之间（包括n），既是素数又是回文数的整数有多少个。
输入
一个大于11小于1000的整数n。
输出
11到n之间的素数回文数个数。
样例输入
23
样例输出
1
提示
回文数指左右对称的数，如：292，333。
来源
06计算概论课

*/

#include<iostream>
using namespace std;
int main()
{
	int i,x,su[200],huiwen[200],result[200],s=0,w=0,j,u=0,count=0;
	memset(su,0,sizeof(su));
	memset(huiwen,0,sizeof(huiwen));
    for(i=2;i<1000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)su[s++]=i;
	}
	//for(i=0;i<s;i++)cout<<su[i]<<endl;
	for(i=10;i<1000;i++)
	{
		if((i/100)==0)
		{
			if((i/10)==(i%10))
				huiwen[w++]=i;
		}
		if(((i/100)!=0)&&((i/1000)==0))
		{
			if((i/100)==(i%10))
				huiwen[w++]=i;
		}
	}
	for(i=0;i<s;i++)
	{
		for(j=0;j<w;j++)
		{
			if(huiwen[j]==su[i])
			{result[u++]=su[i];break;}
		}
	}
	//for(i=0;i<u;i++)cout<<result[i]<<endl;
	while(cin>>x)
	{
		count=0;
		for(i=0;i<u;i++)
		{
			if(result[i]<=x)
				count++;
			else 
				break;
		}
		cout<<count<<endl;
	}
	return 0;
}
