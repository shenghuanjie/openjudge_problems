/*
2981: 大整数加法
http://bailian.openjudge.cn/practice/2981/


描述
求两个不超过200位的非负整数的和。
输入
有两行，每行是一个不超过200位的非负整数，可能有多余的前导0。
输出
一行，即相加后的结果。结果里不能有多余的前导0，即如果结果是342，那么就不能输出为0342。
样例输入
22222222222222222222
33333333333333333333
样例输出
55555555555555555555
来源
程序设计实习2007

*/

#include<iostream>
using namespace std;
int main()
{
	char a[201],b[201];
	int i,a1[201],b1[201],j=0;
	cin>>a>>b;
	memset(a1,0,sizeof(a1));
	memset(b1,0,sizeof(b1));
	for(i=strlen(a)-1;i>=0;i--)
		a1[j++]=(int)a[i]-48;
	j=0;
	for(i=strlen(b)-1;i>=0;i--)
		b1[j++]=(int)b[i]-48;
	j=0;
	for(i=0;i<101;i++)
	{
		a1[i]=a1[i]+b1[i];
		if(a1[i]>=10)
		{a1[i+1]++;a1[i]-=10;}
	}
	i=100;
	while(a1[i]==0)i--;
	if(i<0)cout<<"0";
	for(;i>=0;i--)
		cout<<a1[i];
	cout<<endl;
	return 0;
}
