/*
2950: 摘花生
http://bailian.openjudge.cn/practice/2950/


描述
鲁宾逊先生有一只宠物猴，名叫多多。这天，他们两个正沿着乡间小路散步，突然发现路边的告示牌上贴着一张小小的纸条：“欢迎免费品尝我种的花生！——熊字”。鲁宾逊先生和多多都很开心，因为花生正是他们的最爱。在告示牌背后，路边真的有一块花生田，花生植株整齐地排列成矩形网格（如图1）。有经验的多多一眼就能看出，每棵花生植株下的花生有多少。为了训练多多的算术，鲁宾逊先生说：“你先找出花生最多的植株，去采摘它的花生；然后再找出剩下的植株里花生最多的，去采摘它的花生；依此类推，不过你一定要在我限定的时间内回到路边。” 我们假定多多在每个单位时间内，可以做下列四件事情中的一件：1)	从路边跳到最靠近路边（即第一行）的某棵花生植株；2)	从一棵植株跳到前后左右与之相邻的另一棵植株；3)	采摘一棵植株下的花生；4)	从最靠近路边（即第一行）的某棵花生植株跳回路边。现在给定一块花生田的大小和花生的分布，请问在限定时间内，多多最多可以采到多少个花生？注意可能只有部分植株下面长有花生，假设这些植株下的花生个数各不相同。例如在图2所示的花生田里，只有位于(2, 5), (3, 7), (4, 2), (5, 4)的植株下长有花生，个数分别为13, 7, 15, 9。沿着图示的路线，多多在21个单位时间内，最多可以采到37个花生。
输入
输入的第一行包括一个整数T，表示数据组数每组输入的第一行包括三个整数，M, N和K，用空格隔开；表示花生田的大小为M * N（1 <= M, N <= 50），多多采花生的限定时间为K（0 <= K <= 1000）个单位时间。接下来的M行，每行包括N个非负整数，也用空格隔开；第i + 1行的第j个整数Pij（0 <= Pij <= 500）表示花生田里植株(i, j)下花生的数目，0表示该植株下没有花生。
输出
输出包括T行，每一行只包含一个整数，即在限定时间内，多多最多可以采到花生的个数。
样例输入
6 7 21
0 0 0 0 0 0 0
0 0 0 0 13 0 0
0 0 0 0 0 0 7
0 15 0 0 0 0 0
0 0 0 9 0 0 0
0 0 0 0 0 0 0

样例输出
37
来源
noip2004

*/

#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
struct w
{
	int x;
	int y;
	int peanut;
}field[3000];
int cmp(const void *a,const void *b)
{
	w *x,*y;
	x=(w*)a;
	y=(w*)b;
	if(x->peanut>y->peanut)
		return -1;
	if(x->peanut<y->peanut)
		return 1;
	return 0;
}
int main()
{
	int t;
	cin>>t;
	int m,n,k;
	int i,j;
	int temp;
	for(;t>0;t--)
	{
		cin>>m>>n>>k;
		temp=0;
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>field[temp].peanut;
				field[temp].x=i;
				field[temp].y=j;
				temp++;
			}
		}
		int result=0;
		qsort(field,temp,sizeof(w),cmp);
		int tempx=0,tempy=field[0].y;
		int use;
		for(i=0;i<temp;i++)
		{
			if(field[i].peanut==0)break;
			use=fabs((double)tempx-field[i].x)+fabs((double)tempy-field[i].y)+1+field[i].x;
			if(use<=k)
			{
				result+=field[i].peanut;
				k-=use;
				k+=field[i].x;
				tempx=field[i].x;
				tempy=field[i].y;
			}
			else
			{
				break;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}
