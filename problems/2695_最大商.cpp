/*
2695: 最大商
http://bailian.openjudge.cn/practice/2695/


描述
给一组数，前后相邻的两个数相除，输出商最大的两个数及商的值。
输入
第一行为数组中浮点数的个数n，n大于2，其余n行为每一行一个浮点数。
输出
以下面的形式输出结果，前两个数是相除的两个数，最后一个数为最大的商值。printf("%f / %f = %f\n", a[maxi-1], a[maxi], maxq);
样例输入
10
41.0
18467.0
6334.0
26500.0
19169.0
15724.0
11478.0
29358.0
26962.0
24464.0
样例输出
18467.000000 / 6334.000000 = 2.915535
提示
应使用动态数组保存输入的浮点数。运算过程中应只使用float类型的浮点数。
来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j,x=0;
	cin>>n;
	float a[10000],q;
	memset(a,0,sizeof(a));
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
		for(j=0;j<=n-2;j++)
	{
			if((a[x]/a[x+1])<(a[j]/a[j+1]))
			{x=j;} 
	}
		q=a[x]/a[x+1];
		printf("%f / %f = %f\n", a[x], a[x+1], q);
 return 0;
}
