/*
2766: 最大子矩阵
http://bailian.openjudge.cn/practice/2766/


描述
已知矩阵的大小定义为矩阵中所有元素的和。给定一个矩阵，你的任务是找到最大的非空(大小至少是1 * 1)子矩阵。比如，如下4 * 4的矩阵 0 -2 -7  0 9  2 -6  2-4  1 -4  1-1  8  0 -2的最大子矩阵是 9  2-4  1-1  8这个子矩阵的大小是15。
输入
输入是一个N * N的矩阵。输入的第一行给出N (0 < N <= 100)。再后面的若干行中，依次（首先从左到右给出第一行的N个整数，再从左到右给出第二行的N个整数……）给出矩阵中的N2个整数，整数之间由空白字符分隔（空格或者空行）。已知矩阵中整数的范围都在[-127, 127]。
输出
输出最大子矩阵的大小。
样例输入
4
0 -2 -7 0 9 2 -6 2
-4 1 -4  1 -1

8  0 -2
样例输出
15
来源
翻译自 Greater New York 2001 的试题

*/

#include<iostream>
using namespace std;
int num[110][110];
int n;
int f(int a[])
{
	int result=-1000;
	int i;
	int temp=0;
	for(i=1;i<=n;i++)
	{
		if(temp<0)
			temp=0;
		temp+=a[i];
		if(temp>result)result=temp;
	}
	return result;
}
int main()
{
	int MAX=-10000;
	int temp[110];
	cin>>n;
	int i,j,k;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>num[i][j];
	for(i=1;i<=n;i++)
	{
		memset(temp,0,sizeof(temp));
		for(j=i;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				temp[k]+=num[j][k];
			}
			int use=f(temp);
			if(use>MAX)
				MAX=use;
		}
	}
	cout<<MAX<<endl;
	return 0;
}

