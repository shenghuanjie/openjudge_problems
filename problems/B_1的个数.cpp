/*
B: 1的个数
http://jsgl.openjudge.cn/contest1772/B/


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
	int n,x,i,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		count =0;
		cin>>x;
		while(x!=0)
		{
			if(x%2==1)count++;
			x/=2;
		}
		cout<<count<<endl;
	}
	return 0;
}
