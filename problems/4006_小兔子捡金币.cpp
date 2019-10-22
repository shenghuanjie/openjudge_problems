/*
4006: 小兔子捡金币
http://bailian.openjudge.cn/practice/4006/


描述
在一个游戏中，小兔子可以捡金币。它会一边走一边捡掉经过的金币。当小兔子发现前方没有金币的时候，会自动右转。直到所有金币都被捡走。现在把一个NХN的方型区域内，每一格都摆方好了金币。假设小兔子从左上方第一格开始，往右边走。图示如下： 1     2     3     412    13    14     511    16    15     610     9     8     7捡到的第k个金币会被标记成k，记为该金币的序号。则问第i行，第j列的金币是的序号是什么？ （1≤i≤N, 1≤j≤N）
输入
第一行有一个整数K和N, N表示方型区域的大小（1≤N≤10000），而K表示输入坐标的组数。（1≤K≤25）接下来会有K行，每一行有两上个用空格分隔的整数i和j，表示待求金币的行数和列数。
输出
一共输出K行。每一行输出一个对应坐标下金币的序号。
样例输入
3 4
1 3
2 2
3 3

样例输出
3
13
15


*/

#include<iostream>
using namespace std;
int k,n;
int f(int i,int j)
{
	int a;
	a=i;
	if(n+1-i<a)a=n+1-i;
	if(j<a)a=j;
	if(n+1-j<a)a=n+1-j;
	return a;
}
int main()
{
	int i,start,range,end;
	int cen,result;
	int a,b;
	cin>>k>>n;
	for(;k>0;k--)
	{
		result=0;
		cin>>a>>b;
		cen=f(a,b);
		start=1;range=n;
		for(i=1;i<cen;i++)
		{
			start=start+4*range-4;
			range-=2;
		}
		//cout<<result<<endl;
		if((a-cen)<=(b-cen))
		{
		result=start;
		//end= start + range  +range -2;
		result+=  (a-cen)+(b-cen);
		}
		else
		{
			result=start + range  +range -2;
			end = cen+ range-1;
			result+=  (end-a)+(end-b);
		}
		cout<<result<<endl;

	}
	return 0;
}
