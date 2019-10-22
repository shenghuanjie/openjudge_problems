/*
3702: 距离排序
http://bailian.openjudge.cn/practice/3702/


描述
给出三维空间中的n个点（不超过10个）,求出n个点两两之间的距离,并按距离由大到小依次输出两个点的坐标及它们之间的距离。
输入
输入包括两行，第一行包含一个整数n表示点的个数，第二行包含每个点的坐标(坐标都是整数)。点的坐标的范围是0到100，输入数据中不存在坐标相同的点。
输出
对于大小为n的输入数据，输出n*(n-1)/2行格式如下的距离信息：(x1,y1,z1)-(x2,y2,z2)=距离其中距离保留到数点后面2位。(用cout输出时保留到小数点后2位的方法:cout<<fixed<<setprecision(2)<<x)
样例输入
4
0 0 0 1 0 0 1 1 0 1 1 1
样例输出
(0,0,0)-(1,1,1)=1.73
(0,0,0)-(1,1,0)=1.41
(1,0,0)-(1,1,1)=1.41
(0,0,0)-(1,0,0)=1.00
(1,0,0)-(1,1,0)=1.00
(1,1,0)-(1,1,1)=1.00
提示
用cout输出时保留到小数点后2位的方法:cout<<fixed<<setprecision(2)<<x注意：冒泡排序满足下面的性质,选择排序和快速排序(qsort或sort)需要对下面的情况进行额外处理使用冒泡排序时要注意边界情况的处理,保证比较的两个数都在数组范围内1. 对于一行输出中的两个点(x1,y1,z1)和(x2,y2,z2)，点(x1,y1,z1)在输入数据中应出现在点(x2,y2,z2)的前面。比如输入：20 0 0 1 1 1输出是：(0,0,0)-(1,1,1)=1.73但是如果输入：21 1 1 0 0 0输出应该是：(1,1,1)-(0,0,0)=1.732. 如果有两对点p1,p2和p3,p4的距离相同，则先输出在输入数据中靠前的点对。比如输入：30 0 0 0 0 1 0 0 2输出是：(0,0,0)-(0,0,2)=2.00(0,0,0)-(0,0,1)=1.00(0,0,1)-(0,0,2)=1.00如果输入变成：30 0 2 0 0 1 0 0 0则输出应该是：(0,0,2)-(0,0,0)=2.00(0,0,2)-(0,0,1)=1.00(0,0,1)-(0,0,0)=1.00

*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct is
{
	int x;
	int y;
	int z;
}dot[12];
struct hello
{
	int forward;
	int backward;
	double distance;
}way[55],temp;
double distances(struct is a,struct is b)
{
	double tell=(double)sqrt((double)((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z)));
	return (tell);
}
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>dot[i].x>>dot[i].y>>dot[i].z;
	}
	int w=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			way[w].forward=i;
			way[w].backward=j;
			way[w].distance=distances(dot[i],dot[j]);
			w++;
		}
	}
	for(i=0;i<w-1;i++)
	{
		for(j=0;j<w-i;j++)
		{
			if(way[j].distance<way[j+1].distance)
			{
				temp=way[j];
				way[j]=way[j+1];
				way[j+1]=temp;
			}
		}
	}
	for(i=0;i<w;i++)
	{
		cout<<"("<<dot[way[i].forward].x<<","<<dot[way[i].forward].y<<","<<dot[way[i].forward].z<<")-("<<dot[way[i].backward].x<<","<<dot[way[i].backward].y<<","<<dot[way[i].backward].z<<")="<<fixed<<setprecision(2)<<way[i].distance<<endl;
	}
	return 0;
}
