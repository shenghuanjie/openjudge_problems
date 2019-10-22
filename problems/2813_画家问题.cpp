/*
2813: 画家问题
http://bailian.openjudge.cn/practice/2813/


描述
有一个正方形的墙，由N*N个正方形的砖组成，其中一些砖是白色的，另外一些砖是黄色的。Bob是个画家，想把全部的砖都涂成黄色。但他的画笔不好使。当他用画笔涂画第(i, j)个位置的砖时， 位置(i-1, j)、 (i+1, j)、 (i, j-1)、 (i, j+1)上的砖都会改变颜色。请你帮助Bob计算出最少需要涂画多少块砖，才能使所有砖的颜色都变成黄色。
输入
第一行是一个整数n (1≤n ≤15)，表示墙的大小。接下来的n行表示墙的初始状态。每一行包含n个字符。第i行的第j个字符表示位于位置(i,j)上的砖的颜色。“w”表示白砖，“y”表示黄砖。
输出
一行，如果Bob能够将所有的砖都涂成黄色，则输出最少需要涂画的砖数，否则输出“inf”。
样例输入
5
wwwww
wwwww
wwwww
wwwww
wwwww
样例输出
15 
来源
1681

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

