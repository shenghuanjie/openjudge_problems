/*
3752: 走迷宫
http://bailian.openjudge.cn/practice/3752/


描述
一个迷宫由R行C列格子组成，有的格子里有障碍物，不能走；有的格子是空地，可以走。给定一个迷宫，求从左上角走到右下角最少需要走多少步(数据保证一定能走到)。只能在水平方向或垂直方向走，不能斜着走。
输入
第一行是两个整数，Ｒ和Ｃ，代表迷宫的长和宽。（ 1<= R，C <= 40)接下来是Ｒ行，每行Ｃ个字符，代表整个迷宫。空地格子用'.'表示，有障碍物的格子用'#'表示。迷宫左上角和右下角都是'.'。
输出
输出从左上角走到右下角至少要经过多少步（即至少要经过多少个空地格子）。计算步数要包括起点和终点。
样例输入
5 5
..###
#....
#.#.#
#.#.#
#.#..

样例输出
9

*/

#include<iostream>
using namespace std;
int square[110][110];
int n,m;
int minium(int a,int b,int c,int d)
{
	int m;
	if(a<b)
		m=a;
	else
		m=b;
	if(c<m)
		m=c;
	if(d<m)
		m=d;
	return m;
}
int find(int hang,int lie)
{
	if(hang<0||lie<0||hang>n-1||lie>m-1)
		return 10000;

	if(square[hang][lie]==0)
		return 10000;

	if(hang==n-1&&lie==m-1)
		return 1;

	square[hang][lie]=0;

	int a,b,c,d;
	a=find(hang+1,lie)+1;
	b=find(hang,lie+1)+1;
	c=find(hang-1,lie)+1;
	d=find(hang,lie-1)+1;

	return (minium(a,b,c,d));

}
int main()
{
	char str[110];
	int i,j;	
	memset(square,0,sizeof(square));
	cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>str;
			for(j=0;j<m;j++)
			{
				if(str[j]=='.')
					square[i][j]=1;
			}
		}
		cout<<find(0,0)<<endl;
	return 0;
}
