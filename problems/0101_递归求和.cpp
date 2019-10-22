/*
0101: 递归求和
http://dsb.openjudge.cn/homework1/0101/


描述
递归是一种非常有效的程序设计方法，应用相当广泛,递归求和就是其中的一种。现在定义数列通项An = n * n,给定一个整数n（1 <= n <= 1000），要你求前n项和Sn，即Sn = 1 * 1 + 2 * 2 + ... + n * n。要求使用递归的方法进行计算。
输入
输入只有一行，包括一个整数n，表示要求的项数。
输出
输出只有一行，为一个整数Sn，表示对应的前n项和。
样例输入
7
样例输出
140
提示
无

*/

#include<iostream>
using namespace std;
int f(int n)
{
	if(n==1)
		return 1;
	return n*n+f(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
}
