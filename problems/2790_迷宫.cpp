/*
2790: 迷宫
http://bailian.openjudge.cn/practice/2790/


描述
一天Extense在森林里探险的时候不小心走入了一个迷宫，迷宫可以看成是由n * n的格点组成，每个格点只有2种状态，.和#，前者表示可以通行后者表示不能通行。同时当Extense处在某个格点时，他只能移动到东南西北(或者说上下左右)四个方向之一的相邻格点上，Extense想要从点A走到点B，问在不走出迷宫的情况下能不能办到。如果起点或者终点有一个不能通行(为#)，则看成无法办到。
输入
第1行是测试数据的组数k，后面跟着k组输入。每组测试数据的第1行是一个正整数n (1 <= n <= 100)，表示迷宫的规模是n * n的。接下来是一个n * n的矩阵，矩阵中的元素为.或者#。再接下来一行是4个整数ha, la, hb, lb，描述A处在第ha行, 第la列，B处在第hb行, 第lb列。注意到ha, la, hb, lb全部是从0开始计数的。
输出
k行，每行输出对应一个输入。能办到则输出“YES”，否则输出“NO”。
样例输入
2
3
.##
..#
#..
0 0 2 2
5
.....
###.#
..#..
###..
...#.
0 0 4 0

样例输出
YES
NO


*/

/*
写一个递归函数，返回值为布尔值，以此判断从此点能否到达终点。一个点能到达终点的充要条件是它周围的四个点有一个可以到达终点
*/
#include<iostream>
using namespace std;
int square[110][110];//储存迷宫的数据
int ha,la,hb,lb;//(ha,la)为起点，(hb,lb)为终点
int n;//迷宫的宽度
bool find(int hang,int lie)//递归函数
{
	if(hang<0||lie<0||hang>n-1||lie>n-1)//越界返回false
		return false;

	if(square[hang][lie]==0)//不能通行返回false
		return false;

		if(hang==hb&&lie==lb)//到达终点返回true
		return true;
	square[hang][lie]=0;//这个点已经通过，不能再通过
	return (find(hang+1,lie)||find(hang,lie-1)||find(hang-1,lie)||find(hang,lie+1));//观察周围的点
}
int main()
{
	char str[110];//用于存储输入的字符串
	int k,i,j;
	cin>>k;//输入数据组数
	for(;k>0;k--)
	{
		memset(square,0,sizeof(square));//初始化
		cin>>n;//输入迷宫宽度
		for(i=0;i<n;i++)//输入迷宫
		{
			cin>>str;
			for(j=0;j<n;j++)
			{
				if(str[j]=='.')//可以通行
					square[i][j]=1;
			}
		}
		cin>>ha>>la>>hb>>lb;//输入起点终点
		if(find(ha,la))//递归判断是否能达到终点
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
