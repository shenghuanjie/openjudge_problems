/*
2885: 计算反序数
http://bailian.openjudge.cn/practice/2885/


描述
编写函数，参数为一个整数，返回这个整数的反序数，例如参数是1576，返回一个整数6751，如果输入时1230，则返回321。在main函数中调用此函数，并将结果输出。
输入
一个整数
输出
它的反序数
样例输入
0
123
100
-23
-0
-100
样例输出
0
321
1
-32
0
-1
提示
需要保留数字的符号.负数的反序数仍然是负数,正数的反序数不用添加符号.要求以子函数的形式计算此反序数,子函数的形式为:   int reverse(int num);输入不会超出int的大小.因为有多组测试数据,读取输入的时候建议采用如下形式:   int i = 0;   while(cin>>i)  {    //你的代码  }

*/

#include<iostream>
using namespace std;
int reverse(int num)
{
	int a[50];
	memset(a,0,sizeof(a));
	int i=0,n=0;
	while(num!=0)
	{
		a[n]=num%10;
		num/=10;
		n++;
	}
	int temp=1;
	int result=0;
	for(i=n-1;i>=0;i--)
	{
		result+=a[i]*temp;
		temp*=10;
	}
	return result;
}
int main()
{
	int n;
	while(cin>>n)
	{
		if(n<0)
		{
			n=0-n;
			cout<<"-";
			cout<<reverse(n)<<endl;
		}
		else
			cout<<reverse(n)<<endl;

	}
		return 0;
}
