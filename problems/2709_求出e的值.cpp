/*
2709: 求出e的值
http://bailian.openjudge.cn/practice/2709/


描述
利用公式e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! 求e 。
输入
输入只有一行，该行包含一个整数n（2<=n<=15），表示计算e时累加到1/n！。
输出
输出只有一行，该行包含计算出来的e的值，要求打印小数点后10位。
样例输入
10
样例输出
2.7182818011
提示
1、e以及n!用double表示2、要输出浮点数、双精度数小数点后10位数字，可以用下面这种形式：printf("%.10f", num);
来源
2005~2006医学部计算概论期末考试

*/

#include<iostream>
#include<iomanip>
using namespace std;
double f(int n)
{
	double s=1.0;
	while(n>1)
	{
		s*=n;
		n--;
	}
	return (1/s);
}
int main()
{
	double num=0.0;
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		num+=f(i);
	}
	cout<<setiosflags(ios::fixed)<<setprecision(10)<<num<<endl;
	return 0;
}
