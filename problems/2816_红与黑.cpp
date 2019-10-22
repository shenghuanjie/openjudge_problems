/*
2816: 红与黑
http://bailian.openjudge.cn/practice/2816/


描述
有一间长方形的房子，地上铺了红色、黑色两种颜色的正方形瓷砖。你站在其中一块黑色的瓷砖上，只能向相邻的黑色瓷砖移动。请写一个程序，计算你总共能够到达多少块黑色的瓷砖。
输入
包括多个数据集合。每个数据集合的第一行是两个整数W和H，分别表示x方向和y方向瓷砖的数量。W和H都不超过20。在接下来的H行中，每行包括W个字符。每个字符表示一块瓷砖的颜色，规则如下  1）‘.’：黑色的瓷砖；  2）‘#’：白色的瓷砖；  3）‘@’：黑色的瓷砖，并且你站在这块瓷砖上。该字符在每个数据集合中唯一出现一次。当在一行中读入的是两个零时，表示输入结束。
输出
对每个数据集合，分别输出一行，显示你从初始位置出发能到达的瓷砖数(记数时包括初始位置的瓷砖)。
样例输入
6 9 
....#. 
.....# 
...... 
...... 
...... 
...... 
...... 
#@...# 
.#..#. 
0 0

样例输出
45

来源
1979

*/

#include<iostream>
using namespace std;
char floor[25][25];
int hang,lie;
int f(int x,int y)
{
	if(x<0||x==hang||y<0||y==lie)return 0;
	else if(floor[x][y]=='#')return 0;
	else 
	{
		floor[x][y]='#';
		return (1+f(x-1,y)+f(x+1,y)+f(x,y+1)+f(x,y-1));
	}
}
int main()
{
	int x,y;
	while(cin>>lie>>hang)
	{
	if(hang==0&&lie==0)return 0;
	for(int i=0;i<hang;i++)
	{
			cin>>floor[i];
			for(int j=0;j<lie;j++)
			{
				if(floor[i][j]=='@')
				{
					x=i;y=j;
				}
			}
	}
	cout<<f(x,y)<<endl;
	}
}
