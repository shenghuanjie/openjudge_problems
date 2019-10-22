/*
3708: 1的个数
http://bailian.openjudge.cn/practice/3708/


描述
给定一个十进制整数N，求其对应2进制数中1的个数
输入
第一个整数表示有N组测试数据，其后N行是对应的测试数据，每行为一个整数。
输出
N行，每行输出对应一个输入。
样例输入
4
2
100
1000
66
样例输出
1
3
6
2

*/

#include<iostream>
using namespace std;
int main()
{
	int i,x;
	unsigned a;
	unsigned int n=0x80000000;
	cin>>x;
	int count=0;
	for(int j=0;j<x;j++)
	{
		n=0x80000000;
	cin>>a;
	count=0;
	for(i=0;i<32;i++)
	{
		if(((a&n)?1:0)==1)count++;;
		n>>=1;
	}
	cout<<count<<endl;
	}
}
