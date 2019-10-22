/*
2787: 算24
http://bailian.openjudge.cn/practice/2787/


描述
给出4个小于10个正整数，你可以使用加减乘除4种运算以及括号把这4个数连接起来得到一个表达式。现在的问题是，是否存在一种方式使得得到的表达式的结果等于24。这里加减乘除以及括号的运算结果和运算的优先级跟我们平常的定义一致（这里的除法定义是实数除法）。比如，对于5，5，5，1，我们知道5 * (5 – 1 / 5) = 24，因此可以得到24。又比如，对于1，1，4，2，我们怎么都不能得到24。
输入
输入数据包括多行，每行给出一组测试数据，包括4个小于10个正整数。最后一组测试数据中包括4个0，表示输入的结束，这组数据不用处理。
输出
对于每一组测试数据，输出一行，如果可以得到24，输出“YES”；否则，输出“NO”。
样例输入
5 5 5 1
1 1 4 2
0 0 0 0

样例输出
YES
NO


*/

#include<iostream>
#include<cmath>
using namespace std;
double x[4];//存储输入数据
bool calculate(int n)//递归函数，n为剩余的计算步骤
{
	if(n==0)//算完了，判断是否得到结果
	{
		if(fabs(x[0]-24.0)<0.00001)return true;
		else
			return false;
	}
	int i,j;
	double a,b;
	for(i=0;i<n;i++)//每次从数据中取出两个数进行计算，算完的结果放到头一个里
		for(j=i+1;j<=n;j++)
		{
			a=x[i];b=x[j];
			x[j]=x[n];
			x[i]=a+b;if(calculate(n-1))return true;
			x[i]=a-b;if(calculate(n-1))return true;
			x[i]=b-a;if(calculate(n-1))return true;
			x[i]=a*b;if(calculate(n-1))return true;
			if(fabs(b)>0.00001)
			x[i]=a/b;if(calculate(n-1))return true;
			if(fabs(a)>0.00001)
			x[i]=b/a;if(calculate(n-1))return true;
			x[j]=b;
			x[i]=a;
		}
		return false;
}
int main()
{
	int i;
	while(1)
	{
		for(i=0;i<4;i++)
			cin>>x[i];
		if(x[0]==0&&x[1]==0&&x[2]==0&&x[3]==0)break;//结束测试
		if(calculate(3))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

