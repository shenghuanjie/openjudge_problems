/*
B: 整数的个数
http://cxsjsx.openjudge.cn/contest1759/B/


描述
给定k（1  < k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
输入
输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
输出
输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
样例输入
5
1 5 8 10 5 

样例输出
1
2
1

来源
计算概论05－模拟考试1

*/

#include<iostream>
using namespace std;
int main()
{
	int a,x[101],i=0,k,num1=0,num5=0,num10=0;
	cin>>k;
	memset(x,0,sizeof(x));
	for(i=1;i<=k;i++)
	{
		cin>>x[i];
		if(x[i]==1)
			num1++;
		if(x[i]==5)
			num5++;
		if(x[i]==10)
			num10++;
	}
	cout<<num1<<endl;
	cout<<num5<<endl;
	cout<<num10<<endl;
	return 0;
}
