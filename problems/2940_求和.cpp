/*
2940: 求和
http://bailian.openjudge.cn/practice/2940/


描述
求Sn = a + aa + aaa + … + aa…a 的值（最后一个数中 a 的个数为 n ），其中 a 是一个1~9的数字，例如：        2 + 22 + 222 + 2222 + 22222          （此时 a=2 n=5 ）
输入
一行，包括两个整数，第一个为a，第2个为n（1 ≤ a, n ≤ 9），以空格分隔。
输出
一行，Sn的值。
样例输入
2  5
样例输出
24690

来源
医学部计算概论2006期末考试题

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,n;
	unsigned result=0,temp;
	cin>>a>>n;
	temp=1;
	for(int i=1;i<=n;i++)
	{
		result+=temp*a;
		temp+=pow(10.0,double(i));
	}
	//cout<<temp<<endl;
	cout<<result<<endl;
	return 0;
}
