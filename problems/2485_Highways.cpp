/*
2485: Highways
http://bailian.openjudge.cn/practice/2485/


描述
The island nation of Flatopia is perfectly flat. Unfortunately, Flatopia has no public highways. So the traffic is difficult in Flatopia. The Flatopian government is aware of this problem. They're planning to build some highways so that it will be possible to drive between any pair of towns without leaving the highway system. Flatopian towns are numbered from 1 to N. Each highway connects exactly two towns. All highways follow straight lines. All highways can be used in both directions. Highways can freely cross each other, but a driver can only switch between highways at a town that is located at the end of both highways. The Flatopian government wants to minimize the length of the longest highway to be built. However, they want to guarantee that every town is highway-reachable from every other town.
输入
The first line of input is an integer T, which tells how many test cases followed.The first line of each case is an integer N (3 <= N <= 500), which is the number of villages. Then come N lines, the i-th of which contains N integers, and the j-th of these N integers is the distance (the distance should be an integer within [1, 65536]) between village i and village j. There is an empty line after each test case.
输出
For each test case, you should output a line contains an integer, which is the length of the longest road to be built such that all the villages are connected, and this value is minimum.
样例输入
1

3
0 990 692
990 0 179
692 179 0
样例输出
692

提示
Huge input,scanf is recommended.
来源
POJ Contest,Author:Mathematica@ZSU

*/

#include<iostream>
using namespace std;
#define MAX 510
#define INFINITY 70000 
int Distance[MAX][MAX];
int n;
bool visited[MAX]={false};
int DistanceFromTree[MAX]={INFINITY};
int result()
{
	int i,j,MinDistance=INFINITY,Next,longest=0;
	visited[1]=true;
	Next=1;
	for(i=1;i<=n;i++)
	{
		DistanceFromTree[i]=Distance[1][i];
		if(!visited[i]&&DistanceFromTree[i]<MinDistance)
		{
			MinDistance=DistanceFromTree[i];
			Next=i;
		}
	}
	for(i=1;i<n;i++)
	{
		visited[Next]=true;
		if(DistanceFromTree[Next]>longest)
			longest=DistanceFromTree[Next];
		for(j=1;j<=n;j++)
		{
			if(!visited[j]&&Distance[Next][j]<DistanceFromTree[j])
			{
				DistanceFromTree[j]=Distance[Next][j];
			}
		}
		MinDistance=INFINITY;
		for(j=1;j<=n;j++)
		{
			if(!visited[j]&&DistanceFromTree[j]<MinDistance)
			{
				MinDistance=DistanceFromTree[j];
				Next=j;
			}
		}
	}
	return longest;
}
void clear()
{
	int i;
	for(i=1;i<=n;i++)
	{
		DistanceFromTree[i]=INFINITY;
		visited[i]=false;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int i,j;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				cin>>Distance[i][j];
		cout<<result()<<endl;
		clear();
	}
	//system("pause");
	return 0;
}
