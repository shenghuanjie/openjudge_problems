/*
1321: 棋盘问题
http://bailian.openjudge.cn/practice/1321/


描述
在一个给定形状的棋盘（形状可能是不规则的）上面摆放棋子，棋子没有区别。要求摆放时任意的两个棋子不能放在棋盘中的同一行或者同一列，请编程求解对于给定形状和大小的棋盘，摆放k个棋子的所有可行的摆放方案C。
输入
输入含有多组测试数据。每组数据的第一行是两个正整数，n k，用一个空格隔开，表示了将在一个n*n的矩阵内描述棋盘，以及摆放棋子的数目。 n <= 8 ,  k <= n当为-1 -1时表示输入结束。随后的n行描述了棋盘的形状：每行有n个字符，其中 # 表示棋盘区域， . 表示空白区域（数据保证不出现多余的空白行或者空白列）。
输出
对于每一组数据，给出一行输出，输出摆放的方案数目C （数据保证C<2^31）。
样例输入
2 1
#.
.#
4 4
...#
..#.
.#..
#...
-1 -1

样例输出
2
1

来源
蔡错@pku

*/

#include<iostream>
using namespace std;
int zonshu;
bool shu[20],heg[20];
int result;
int x[200],y[200];
void find(int num,int n,int sum)
{
	int i;
	if(shu[x[num]]&&heg[y[num]])//是否可放
	{

		if(n+1==sum)//fangwan
	{
		result+=1;
		return;
	}


	if(num+1==zonshu)//end
	{
		return;
	}


	       // shu[x[num]]=false;
		   // heg[y[num]]=false;
			i=num+1;
		while(i<zonshu)
		{
			shu[x[num]]=false;
		    heg[y[num]]=false;
			find(i,n+1,sum);
			i++;

			shu[x[num]]=true;
			heg[y[num]]=true;
		}
		    //shu[x[num]]=true;
			//heg[y[num]]=true;



	}
	return;
}




int main()
{
	int n,k;
	char str;
	int hang,lie;
	int i;
	int head;
	while(cin>>n>>k)
	{
		result=0;
		for(i=0;i<20;i++)
		{
			shu[i]=true;heg[i]=true;
		}
		memset(x,1,sizeof(x));

		memset(y,1,sizeof(y));

		if(n==-1&&k==-1)
			break;

		i=0;

		for(hang=0;hang<n;hang++)
		{
			for(lie=0;lie<n;lie++)
			{
				cin>>str;
				if(str=='#')
				{
					x[i]=hang;y[i]=lie;i++;
				}
			} 
		}


		zonshu=i;


		for(head=0;head<zonshu;head++)
		{
			find(head,0,k);
		}


		cout<<result<<endl;

	}
	return 0;
}

