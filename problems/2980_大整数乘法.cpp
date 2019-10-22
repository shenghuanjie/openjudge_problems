/*
2980: 大整数乘法
http://bailian.openjudge.cn/practice/2980/


描述
求两个不超过200位的非负整数的积。
输入
有两行，每行是一个不超过200位的非负整数，没有多余的前导0。
输出
一行，即相乘后的结果。结果里不能有多余的前导0，即如果结果是342，那么就不能输出为0342。
样例输入
12345678900
98765432100
样例输出
1219326311126352690000
来源
程序设计实习2007

*/

#include<iostream>
using namespace std;
int main()
{
	char a[210],b[210];
	int w,la,lb,a1[210]={},b1[210]={},c1[210]={};
	cin>>a>>b;
	la=strlen(a);
	w=0;
	for(int i=la-1;i>=0;i--)
	{
		a1[w++]=a[i]-'0';
	}
	lb=strlen(b);
	w=0;
	for(int i=lb-1;i>=0;i--)
	{
		b1[w++]=b[i]-'0';
	}
	for(int i=0;i<la;i++)
	{
		for(int j=0;j<lb;j++)
		{
			c1[j+i]+=a1[i]*b1[j];
			if(c1[j+i]>=10)
			{
				c1[j+i+1]+=c1[j+i]/10;
				c1[j+i]%=10;
			}
		}
	}
	int i=201;
	while(c1[i]==0)i--;
	for(;i>=0;i--)
		cout<<c1[i];
	cout<<endl;
	return 0;
}
