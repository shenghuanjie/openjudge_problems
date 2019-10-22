/*
1979: Red and Black
http://bailian.openjudge.cn/practice/1979/


描述
There is a rectangular room, covered with square tiles. Each tile is colored either red or black. A man is standing on a black tile. From a tile, he can move to one of four adjacent tiles. But he can't move on red tiles, he can move only on black tiles. Write a program to count the number of black tiles which he can reach by repeating the moves described above. 
输入
The input consists of multiple data sets. A data set starts with a line containing two positive integers W and H; W and H are the numbers of tiles in the x- and y- directions, respectively. W and H are not more than 20. There are H more lines in the data set, each of which includes W characters. Each character represents the color of a tile as follows. '.' - a black tile '#' - a red tile '@' - a man on a black tile(appears exactly once in a data set) The end of the input is indicated by a line consisting of two zeros. 
输出
For each data set, your program should output a line which contains the number of tiles he can reach from the initial tile (including itself). 
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
11 9
.#.........
.#.#######.
.#.#.....#.
.#.#.###.#.
.#.#..@#.#.
.#.#####.#.
.#.......#.
.#########.
...........
11 6
..#..#..#..
..#..#..#..
..#..#..###
..#..#..#@.
..#..#..#..
..#..#..#..
7 7
..#.#..
..#.#..
###.###
...@...
###.###
..#.#..
..#.#..
0 0
样例输出
45
59
6
13

来源
Japan 2004 Domestic

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
