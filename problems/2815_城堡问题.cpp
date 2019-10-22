/*
2815: 城堡问题
http://bailian.openjudge.cn/practice/2815/


描述
     1   2   3   4   5   6   7     ############################# 1 #   |   #   |   #   |   |   #   #####---#####---#---#####---# 2 #   #   |   #   #   #   #   #   #---#####---#####---#####---# 3 #   |   |   #   #   #   #   #   #---#########---#####---#---# 4 #   #   |   |   |   |   #   #   #############################           (图 1)   #  = Wall      |  = No wall   -  = No wall图1是一个城堡的地形图。请你编写一个程序，计算城堡一共有多少房间，最大的房间有多大。城堡被分割成mn(m≤50，n≤50)个方块，每个方块可以有0~4面墙。
输入
程序从标准输入设备读入数据。第一行是两个整数，分别是南北向、东西向的方块数。在接下来的输入行里，每个方块用一个数字(0≤p≤50)描述。用一个数字表示方块周围的墙，1表示西墙，2表示北墙，4表示东墙，8表示南墙。每个方块用代表其周围墙的数字之和表示。城堡的内墙被计算两次，方块(1,1)的南墙同时也是方块(2,1)的北墙。输入的数据保证城堡至少有两个房间。
输出
城堡的房间数、城堡中最大房间所包括的方块数。结果显示在标准输出设备上。
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
1164

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
