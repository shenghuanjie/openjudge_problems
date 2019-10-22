/*
2760: 数字三角形
http://bailian.openjudge.cn/practice/2760/


描述
73   88   1   02   7   4   44   5   2   6   5(图1) 图1给出了一个数字三角形。从三角形的顶部到底部有很多条不同的路径。对于每条路径，把路径上面的数加起来可以得到一个和，你的任务就是找到最大的和。注意：路径上的每一步只能从一个数走到下一层上和它最近的左边的那个数或者右边的那个数。
输入
输入的是一行是一个整数N (1 < N <= 100)，给出三角形的行数。下面的N行给出数字三角形。数字三角形上的数的范围都在0和100之间。
输出
输出最大的和。
样例输入
5
7
3 8
8 1 0 
2 7 4 4
4 5 2 6 5
样例输出
30
来源
翻译自 IOI 1994 的试题

*/

#include<iostream>
using namespace std;
int main()
{
	int num[110][110];
	int i,j;
	int n;
	cin>>n;
	memset(num,0,sizeof(num));
		for(i=1;i<=n;i++)
			for(j=1;j<=i;j++)
				cin>>num[i][j];
		for(i=n-1;i>=1;i--)
		{	
			for(j=1;j<=i;j++)
			{
				num[i][j]+= num[i+1][j] > num[i+1][j+1] ? num[i+1][j] : num[i+1][j+1];
			}
		}
		cout<<num[1][1]<<endl;
	return 0;
}

