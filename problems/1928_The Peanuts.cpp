/*
1928: The Peanuts
http://bailian.openjudge.cn/practice/1928/


描述
Mr. Robinson and his pet monkey Dodo love peanuts very much.  One day while they were having a walk on a country road, Dodo found a sign by the road, pasted with a small piece of paper, saying "Free Peanuts Here! " You can imagine how happy Mr. Robinson and Dodo were.There was a peanut field on one side of the road.  The peanuts were planted on the intersecting points of a grid as shown in Figure-1.  At each point, there are either zero or more peanuts. For example, in Figure-2, only four points have more than zero peanuts, and the numbers are 15, 13, 9 and 7 respectively.  One could only walk from an intersection point to one of the four adjacent points, taking one unit of time. It also takes one unit of time to do one of the following:  to walk from the road to the field, to walk from the field to the road, or pick peanuts on a point.According to Mr. Robinson's requirement, Dodo should go to the plant with the most peanuts  first. After picking them, he should then go to the next plant with the most peanuts, and so on.  Mr. Robinson was not so patient as to wait for Dodo to pick all the peanuts and he asked Dodo to return to the road in a certain period of time. For example, Dodo could pick 37 peanuts within 21 units of time in the situation given in Figure-2.Your task is, given the distribution of the peanuts and a certain period of time, tell how many peanuts Dodo could pick.  You can assume that each point contains a different amount of peanuts, except 0, which may appear more than once.
输入
The first line of input contains the test case number T (1 <= T <= 20). For each test case, the first line contains three integers, M, N and K (1 <= M, N <= 50, 0 <= K <= 20000).  Each of the following M lines contain N integers. None of the integers will exceed 3000.  (M * N) describes the peanut field. The j-th integer X in the i-th line means there are X peanuts on the point (i, j). K means Dodo must return to the road in K units of time.
输出
For each test case, print one line containing the amount of peanuts Dodo can pick.
样例输入
2
6 7 21
0 0 0 0 0 0 0
0 0 0 0 13 0 0
0 0 0 0 0 0 7
0 15 0 0 0 0 0
0 0 0 9 0 0 0
0 0 0 0 0 0 0
6 7 20
0 0 0 0 0 0 0
0 0 0 0 13 0 0
0 0 0 0 0 0 7
0 15 0 0 0 0 0
0 0 0 9 0 0 0
0 0 0 0 0 0 0

样例输出
37
28

来源
Beijing 2004 Preliminary@POJ

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
