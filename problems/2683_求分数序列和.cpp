/*
2683: 求分数序列和
http://bailian.openjudge.cn/practice/2683/


描述
有一个分数序列 2/1,3/2,5/3,8/5,13/8,21/13,.... 求这个分数序列的前n项之和。
输入
输入有一行：正整数n。
输出
输出有一行：分数序列的和（浮点数，精确到小数点后4位）。可以printf("%.4lf\n", a)输出浮点数并精确到小数点后4位。
样例输入
99
样例输出
160.4849
提示
最好在程序中使用双精度浮点数（double）记录求得的和。
来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	unsigned int i,n;
	double sum=0,a=1,b=2,temp;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+b/a;
		temp=a;
		a=b;
		b=temp+b;
	}
	printf("%.4lf\n",sum);
 return 0;
}
