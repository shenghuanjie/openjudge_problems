/*
1681: Painter's Problem
http://bailian.openjudge.cn/practice/1681/


描述
There is a square wall which is made of n*n small square bricks. Some bricks are white while some bricks are yellow. Bob is a painter and he wants to paint all the bricks yellow. But there is something wrong with Bob's brush. Once he uses this brush to paint brick (i, j), the bricks at (i, j), (i-1, j), (i+1, j), (i, j-1) and (i, j+1) all change their color. Your task is to find the minimum number of bricks Bob should paint in order to make all the bricks yellow.
输入
The first line contains a single integer t (1 <= t <= 20) that indicates the number of test cases. Then follow the t cases. Each test case begins with a line contains an integer n (1 <= n <= 15), representing the size of wall. The next n lines represent the original wall. Each line contains n characters. The j-th character of the i-th line figures out the color of brick at position (i, j). We use a 'w' to express a white brick while a 'y' to express a yellow brick.
输出
For each case, output a line contains the minimum number of bricks Bob should paint. If Bob can't paint all the bricks yellow, print 'inf'.
样例输入
2
3
yyy
yyy
yyy
5
wwwww
wwwww
wwwww
wwwww
wwwww

样例输出
0
15

来源
POJ Monthly--2004.06.27 张嘉龄

*/

/*
主要解题思路
第一行枚举2^n种情况，然后之后的每一行都根据上一行不是黄灯的位置，将上一行全部变为黄灯，结束后，看最后一行是否全为黄灯
*/
#include<iostream>
using namespace std;
int n;//用于保存宽度
int num;//用于临时存放步骤数
int result=500;//用于存放最少的步骤数
int paint[20][20];//用于记录改变的位置，方便回溯
void f(int range[][20],int x)
{
	int i,j;
	int k=0;//代表两种情况，0代表这个开关不被按下，1代表被按下
	//先要枚举第一行的情况
	for(;k<2;k++)
	{
		if(k)//按下时改变状态
		{
		range[1][x]=1-range[1][x];
		range[1][x-1]=1-range[1][x-1];
		range[1][x+1]=1-range[1][x+1];
		range[2][x]=1-range[2][x];
		num++;
		}
		if(x==n)goto jump;//当枚举到边界时停止递归
		f(range,x+1);
		//下边判断余下的行按照规则按下后是否构成可行方案
jump:	memset(paint,0,sizeof(paint));
		for(i=1;i<n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(range[i][j]==0)
				{
					paint[i][j]=1;
					range[i+1][j]=1-range[i+1][j];
					range[i][j]=1-range[i][j];
					range[i+2][j]=1-range[i+2][j];
					range[i+1][j-1]=1-range[i+1][j-1];
					range[i+1][j+1]=1-range[i+1][j+1];
					num++;
				}
			}
		}


			for(j=1;j<=n;j++)
			{
				if(range[n][j]!=1)//方案不可行，回溯
				{
					for(i=1;i<n;i++)
					{
						for(j=1;j<=n;j++)
						{
							if(paint[i][j]==1)
							{
								range[i+1][j]=1-range[i+1][j];
								range[i][j]=1-range[i][j];
								range[i+2][j]=1-range[i+2][j];
								range[i+1][j-1]=1-range[i+1][j-1];
								range[i+1][j+1]=1-range[i+1][j+1];
								num--;
							}
						}
					}
					
					goto next;
				}
			}
			if(num<result)//方案可行，看步骤是否更少
			{
				result=num;
				return;
			}

		
		next:;
		if(k)//回溯
		{
		range[1][x]=1-range[1][x];
		range[1][x-1]=1-range[1][x-1];
		range[1][x+1]=1-range[1][x+1];
		range[2][x]=1-range[2][x];
		num--;
		}
	}
	return;
}
int main()
{
	char str[20];//读入一行字符串
	int t;//问题组数
	int range[20][20];//用于存放输入数据
	int i=0,j=0;//用于循环
	cin>>t;
	for(;t>0;t--)
	{
		result=500;//将步骤存成很大的数
		memset(range,-1,sizeof(range));//将range清空
		cin>>n;//输入数据
		for(i=1;i<=n;i++)
		{
			cin>>str;
			for(j=0;j<n;j++)
			{
				if(str[j]=='y')
				range[i][j+1]=1;
				else if(str[j]=='w')
				range[i][j+1]=0;
			}		
		}
		num=0;
		memset(paint,0,sizeof(paint));
		//递归调用枚举函数
		f(range,1);
		//输出结果
		if(result==500)
			cout<<"inf"<<endl;
		else
			cout<<result<<endl;

		
	}
	return 0;
}


