/*
2736: 大整数减法
http://bailian.openjudge.cn/practice/2736/


描述
求两个大的正整数相减的差。
输入
共2行，第1行是被减数a，第2行是减数b(a > b)。每个大整数不超过200位，不会有多余的前导零。
输出
一行，即所求的差。
样例输入
9999999999999999999999999999999999999
9999999999999
样例输出
9999999999999999999999990000000000000

*/

#include<iostream>
using namespace std;
int main()
{
	char a[101],b[101];
	int i,a1[101],b1[101],j=0,n,k;
	cin>>n;
	for(k=0;k<n;k++)
	{
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
		a1[i]=a1[i]-b1[i];
		if(a1[i]<0)
		{a1[i+1]--;a1[i]+=10;}
	}
	i=100;
	while(a1[i]==0)i--;
	for(;i>=0;i--)
		cout<<a1[i];
	cout<<endl;
	}
	return 0;
}
