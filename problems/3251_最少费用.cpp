/*
3251: 最少费用
http://bailian.openjudge.cn/practice/3251/


描述
一个商人穿过一个正方形的网格，每经过网格上的一个点需要缴纳一定的费用。每行和每列上的点费用都是按照从小到大顺序排列的，并且对于每个网格上的点，其前后左右的各个点的收费都是不一样的。编写程序设计一个商人总左上角走到右下角花费的最小费用。
输入
第一行是一个整数，表示正方行的宽度N (N <100),后面n行n列为网格上每个点的费用
输出
一行，表示最小费用
样例输入
5
1  4  6  8  10 
2  5  7  15 17 
6  8  9  18 20 
10 11 12 19 21 
20 23 25 29 33 
样例输出
109
提示
可以用递归方法，或者动态规划方法
来源
cs10107 C++ Final Exam

*/

#include<iostream>
using namespace std;
int main()
{
	int x[150][150];
	memset(x,1000000,sizeof(x));
	int n,j,i;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>x[i][j];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1&&j==1)continue;
			if(x[i-1][j]>x[i][j-1])
				x[i][j]+=x[i][j-1];
			else
				x[i][j]+=x[i-1][j];
		}
	}
	cout<<x[n][n]<<endl;
	return 0;
}     
