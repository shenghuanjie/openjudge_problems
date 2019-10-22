/*
3726: 仙岛求药
http://bailian.openjudge.cn/practice/3726/


描述
少年李逍遥的婶婶病了，王小虎介绍他去一趟仙灵岛，向仙女姐姐要仙丹救婶婶。叛逆但孝顺的李逍遥闯进了仙灵岛，克服了千险万难来到岛的中心，发现仙药摆在了迷阵的深处。迷阵由M×N个方格组成，有的方格内有可以瞬秒李逍遥的怪物，而有的方格内则是安全。现在李逍遥想尽快找到仙药，显然他应避开有怪物的方格，并经过最少的方格，而且那里会有神秘人物等待着他。现在要求你来帮助他实现这个目标。下图 显示了一个迷阵的样例及李逍遥找到仙药的路线.
输入
输入有多组测试数据. 每组测试数据以两个非零整数 M 和 N 开始，两者均不大于20。M 表示迷阵行数, N 表示迷阵列数。接下来有 M 行, 每行包含N个字符,不同字符分别代表不同含义: 1)	‘@’：少年李逍遥所在的位置；2)	‘.’：可以安全通行的方格；3)	‘#’：有怪物的方格；4)	‘*’：仙药所在位置。当在一行中读入的是两个零时，表示输入结束。
输出
对于每组测试数据，分别输出一行，该行包含李逍遥找到仙药需要穿过的最少的方格数目(计数包括初始位置的方块)。如果他不可能找到仙药, 则输出 -1。
样例输入
8 8
.@##...#
#....#.#
#.#.##..
..#.###.
#.#...#.
..###.#.
...#.*..
.#...###
6 5
.*.#.
.#...
..##.
.....
.#...
....@
9 6
.#..#. 
.#.*.# 
.####. 
..#... 
..#... 
..#... 
..#... 
#.@.## 
.#..#. 
0 0

样例输出
10
8
-1


*/

#include<iostream>
using namespace std;
int m,n;
int startx,starty,endx,endy;
char str[52][52];
struct d
{
	int x;
	int y;
	int father;
}position[4010];
int find()
{
	int num=0;
	int head,tail=1;
	head=0;
	bool yes=false;
	position[head].x=startx;
	position[head].y=starty;
	position[head].father=-1;
	while(head!=tail)
	{
		if(position[head].x==endx&&position[head].y==endy)
		{
			yes=true;
			break;
		}
		if(str[position[head].x+1][position[head].y]=='.')
		{
			position[tail].x=position[head].x+1;
			position[tail].y=position[head].y;
			position[tail].father=head;
			str[position[head].x+1][position[head].y]='#';
			tail++;
		}
		if(str[position[head].x][position[head].y+1]=='.')
		{
			position[tail].x=position[head].x;
			position[tail].y=position[head].y+1;
			position[tail].father=head;
			str[position[head].x][position[head].y+1]='#';
			tail++;
		}
		if(str[position[head].x-1][position[head].y]=='.')
		{
			position[tail].x=position[head].x-1;
			position[tail].y=position[head].y;
			position[tail].father=head;
			str[position[head].x-1][position[head].y]='#';
			tail++;
		}
		if(str[position[head].x][position[head].y-1]=='.')
		{
			position[tail].x=position[head].x;
			position[tail].y=position[head].y-1;
			position[tail].father=head;
			str[position[head].x][position[head].y-1]='#';
			tail++;
		}
		head++;
	}
	if(yes)
	{
		while(head!=-1)
		{
			num++;
			head=position[head].father;
		}
		return num-1;
	}
	else
		return -1;
}
int main()
{
	while(cin>>m>>n)
	{
		if(m==0&&n==0)break;
		int i,j;
		memset(str,'#',sizeof(str));
		for(i=1;i<=m;i++)
			for(j=1;j<=n;j++)
			{
				cin>>str[i][j];
				if(str[i][j]=='@')
				{
					startx=i;
					starty=j;
					str[i][j]='.';
				}
				else if(str[i][j]=='*')
				{
					endx=i;
					endy=j;
					str[i][j]='.';
				}
			}
			cout<<find()<<endl;
	}
	return 0;
}     
