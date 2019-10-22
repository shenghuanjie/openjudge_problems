/*
1088: 滑雪
http://bailian.openjudge.cn/practice/1088/


描述
Michael喜欢滑雪百这并不奇怪， 因为滑雪的确很刺激。可是为了获得速度，滑的区域必须向下倾斜，而且当你滑到坡底，你不得不再次走上坡或者等待升降机来载你。Michael想知道载一个区域中最长的滑坡。区域由一个二维数组给出。数组的每个数字代表点的高度。下面是一个例子 1  2  3  4 516 17 18 19 615 24 25 20 714 23 22 21 813 12 11 10 9一个人可以从某个点滑向上下左右相邻四个点之一，当且仅当高度减小。在上面的例子中，一条可滑行的滑坡为24-17-16-1。当然25-24-23-...-3-2-1更长。事实上，这是最长的一条。
输入
输入的第一行表示区域的行数R和列数C(1 <= R,C <= 100)。下面是R行，每行有C个整数，代表高度h，0<=h<=10000。
输出
输出最长区域的长度。
样例输入
5 5
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

样例输出
25
来源
Don't know

*/

#include<iostream>
#include<stdlib.h>
using namespace std;
struct temp//存储每一点的坐标及其高度，用于排序
	{
		int x;
		int y;
		int height;
	}mountain[11000];
int cmp(const void *a,const void *b)//qsort的比较函数
{
	temp *x,*y;
	x=(temp *)a;
	y=(temp *)b;
	if(x->height>y->height)return 1;
	if(x->height<y->height)return -1;
	return 0;
}
int main()
{
	bool judge=true;
	int snow[110][110];//储存输入数据
	int len[110][110];//储存结果
	int r,c;
	cin>>r>>c;//输入长和宽
	int i,j;
	memset(snow,0,sizeof(snow));//置零
	memset(len,0,sizeof(len));
	int k=0;
	for(i=1;i<=r;i++)//输入数据
	{
		for(j=1;j<=c;j++)
		{
			cin>>snow[i][j];
			mountain[k].height=snow[i][j];
			mountain[k].x=i;
			mountain[k].y=j;
			k++;
		}
	}
	qsort(mountain,k,sizeof(temp),cmp);//排序
	for(i=0;i<k;i++)//从最低处开始找起，存储周围最长的长度+1，假如周围都很高，那么此点为1
	{
		judge=true;
		if(snow[mountain[i].x+1][mountain[i].y]<snow[mountain[i].x][mountain[i].y])
		{
			len[mountain[i].x][mountain[i].y]=len[mountain[i].x+1][mountain[i].y]+1;
			judge=false;
		}
		if(snow[mountain[i].x][mountain[i].y+1]<snow[mountain[i].x][mountain[i].y]&&len[mountain[i].x][mountain[i].y+1]+1>len[mountain[i].x][mountain[i].y])
		{
			len[mountain[i].x][mountain[i].y]=len[mountain[i].x][mountain[i].y+1]+1;
			judge=false;
		}
		if(snow[mountain[i].x-1][mountain[i].y]<snow[mountain[i].x][mountain[i].y]&&len[mountain[i].x-1][mountain[i].y]+1>len[mountain[i].x][mountain[i].y])
		{
			len[mountain[i].x][mountain[i].y]=len[mountain[i].x-1][mountain[i].y]+1;
			judge=false;
		}
		if(snow[mountain[i].x][mountain[i].y-1]<snow[mountain[i].x][mountain[i].y]&&len[mountain[i].x][mountain[i].y-1]+1>len[mountain[i].x][mountain[i].y])
		{
			len[mountain[i].x][mountain[i].y]=len[mountain[i].x][mountain[i].y-1]+1;
			judge=false;
		}
		if(judge)
			len[mountain[i].x][mountain[i].y]=1;
	}
	int max=0;
	for(i=1;i<=r;i++)//输出
	{
		for(j=1;j<=c;j++)
		{
			if(len[i][j]>max)
			{
				max=len[i][j];
			}
		}
	}
	cout<<max<<endl;
	return 0;
}

