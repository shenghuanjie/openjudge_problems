/*
A: The Castle
http://cxsjsx.openjudge.cn/contest1788/A/


描述
     1   2   3   4   5   6   7     ############################# 1 #   |   #   |   #   |   |   #   #####---#####---#---#####---# 2 #   #   |   #   #   #   #   #   #---#####---#####---#####---# 3 #   |   |   #   #   #   #   #   #---#########---#####---#---# 4 #   #   |   |   |   |   #   #   #############################(Figure 1)#  = Wall   |  = No wall-  = No wallFigure 1 shows the map of a castle.Write a program that calculates1. how many rooms the castle has2. how big the largest room isThe castle is divided into m * n (m<=50, n<=50) square modules. Each such module can have between zero and four walls. 
输入
Your program is to read from standard input. The first line contains the number of modules in the north-south direction and the number of modules in the east-west direction. In the following lines each module is described by a number (0 <= p <= 15). This number is the sum of: 1 (= wall to the west), 2 (= wall to the north), 4 (= wall to the east), 8 (= wall to the south). Inner walls are defined twice; a wall to the south in module 1,1 is also indicated as a wall to the north in module 2,1. The castle always has at least two rooms.
输出
Your program is to write to standard output: First the number of rooms, then the area of the largest room (counted in modules).
样例输入
4
7
11 6 11 6 3 10 6
7 9 6 13 5 15 5
1 10 12 7 13 7 5
13 11 10 8 10 12 13
样例输出
5
9
来源
IOI 1994

*/

#include<iostream>
using namespace std;
int a,b;//迷宫的长和宽
int num=0;//房间数
int maxe=0;//最大房间
int sum=0;//临时存储每个房间的格数
int castle[55][55];//存储迷宫的数据
int pass[55][55];//存储该点是否走过
int go(int hang,int lie)//递归函数
{
	int temp[4];//存储4面墙的数据
	if(hang<1||lie<1||hang>a||lie>b)return 0;//越界返回0
	if(pass[hang][lie]==1)return 0;//已经走过返回0
	if(castle[hang][lie]/8>0&&castle[hang][lie]%8/4>0&&castle[hang][lie]%4/2>0&&castle[hang][lie]%2>0)//房间只有一格返回1
	{
		return 1;
	}
	pass[hang][lie]=1;//将格子标记为走过
	temp[0]=castle[hang][lie]/8;
	temp[1]=castle[hang][lie]%8/4;
	temp[2]=castle[hang][lie]%4/2;
	temp[3]=castle[hang][lie]%2;
	return (1+(temp[0]==1 ? 0 :go(hang+1,lie))+(temp[1]==1 ? 0:go(hang,lie+1))+(temp[2]==1 ? 0 :go(hang-1,lie))+(temp[3]==1 ? 0 :go(hang,lie-1)));//没有墙的可以通过，观察周围的格子
}
int main()
{
	memset(pass,0,sizeof(pass));//初始化
	memset(castle,0,sizeof(castle));
	int i,j;
	cin>>a>>b;//输入长和宽
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			cin>>castle[i][j];
		}
	}

	for(i=1;i<=a;i++)//以所有没有做过的格子为初始，找到整个房间的全部格子
	{
		for(j=1;j<=b;j++)
		{
			if(pass[i][j]==0)
			{
				sum=go(i,j);//得到该房间的格子数
				if(sum>maxe)maxe=sum;//存储最大的格子
				num++;//房间数+1
			}
		}
	}
	//输出
	cout<<num<<endl;
    cout<<maxe<<endl;

	return 0;
}
