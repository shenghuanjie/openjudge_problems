/*
0501: 丛林中的路
http://dsb.openjudge.cn/5/0501/


描述
 热带岛屿Lagrishan的首领现在面临一个问题：几年前，一批外援资金被用于维护村落之间的道路，但日益繁茂的丛林无情的侵蚀着村民的道路，导致道路维修开销巨大，长老会不得不放弃部分道路的维护。上图左侧图显示的是正在使用道路的简图以及每条路每个月的维修费用（单位为aacms）。现在长老会需要提出一种方案，即需要保证村落之间都可以互相到达，又要将每个月的道路维修费用控制在最小。村子编号为从A到I。上图右侧显示的方案最小维修开销为216 aacms每月。
输入
输入包含1~100个数据集，最后一行为0.每个数据集第一行为村落数目n, 1 < n < 27,依次用字母表的前n个字母标记。接下来有n-1行，每行的第一个数据便是按字母顺序排列的村子编号（不包括最后一个村庄）。每个村庄后面的数据k代表该村庄通往编号在其之后的村庄的道路数目，如A 2 B 12 I 25，代表A村庄有2个编号在A之后的村庄和其相连。若k大于0，k后面会依次给出这k个村庄的编号以及各自到起始村庄的道路维修费用，如A 2 B 12 I 25，代表A和B之间道路维修费用为12， A和I之间道路维修费用为25（维修费用为不超过100的正整数）.路的总数目不超过75条，每个村庄到其他村庄不会有超过15条路（包括编号在其之前和之后的）。
输出
每个数据集有一个输出：针对解决方案每个月维修道路的小费用。提示：蛮力算法虽能找出解决方案，但将会超出时间限制。
样例输入
9
A 2 B 12 I 25
B 3 C 10 H 40 I 8
C 2 D 18 G 55
D 1 E 44
E 2 F 60 G 38
F 0
G 1 H 35
H 1 I 35
3
A 2 B 10 C 40
B 1 C 20
0
样例输出
216
30

*/

#include<iostream>
#include<string>
#include"stdlib.h"
using namespace std;
int n;
struct
{
	bool involved;
	int num;//第几个等价类
}count[27];
struct Sides
{
	int weight;
	string vertex;
}side[10000];
struct LinkNode
{
	string name;
	int destination;
}Link[27];
void clear()
{
	int i;
	for(i=0;i<10000;i++)
	{
		side[i].weight=0;
		side[i].vertex='a';
	}
}
void clear_count()
{
	int i;
	for(i=0;i<27;i++)
	{
		count[i].involved=false;
		count[i].num=-1;
	}
}
int cmp(const void *a,const void *b)
{
	if(((Sides *)a)->weight>((Sides *)b)->weight)
	{
		return 1;
	}
	return -1;
}
int main()
{
	int i,j,temp;
	int judge1,judge2;
	int attribution;
	int total=0;
	string input_char;
	cin>>n;
	int dot_num,side_num;
	while(n)
	{
		clear_count();
		total=0;
		dot_num=1;
		side_num=1;
		clear();
		for(;dot_num<n;dot_num++)
		{
			cin>>Link[dot_num].name>>Link[dot_num].destination;
			temp=Link[dot_num].destination;
			for(i=0;i<temp;i++)
			{
				cin>>input_char>>side[side_num].weight;
				side[side_num].vertex=Link[dot_num].name+input_char;
				side[side_num].vertex=side[side_num].vertex+Link[dot_num].name;
				side_num++;
			}	
		}
		qsort(side+1,--side_num,sizeof(Sides),cmp);
		/*cout<<"The number of sides is "<<side_num<<endl;
		for(i=1;i<=side_num;i++)
		{
			cout<<i<<" : "<<side[i].vertex<<"||"<<side[i].weight<<endl;
		}
		cout<<"-------------------------"<<endl;*/
		for(i=1,j=1;i<side_num;i++)
		{
			if(side[i].vertex.substr(0,2)!=side[i+1].vertex.substr(1,2))
			{
				side[j+1].vertex=side[i+1].vertex;
				side[j+1].weight=side[i+1].weight;
				j++;
			}
		}
		side_num=j;
		/*cout<<"The number of sides is "<<side_num<<endl;
		for(i=1;i<=side_num;i++)
		{
			cout<<i<<" : "<<side[i].vertex<<"||"<<side[i].weight<<endl;
		}
		system("pause");*/
		j=1;
		attribution=1;
		for(i=1;i<n&&j<=side_num;)
		{
			if((count[side[j].vertex.at(0)-'A'].involved&&count[side[j].vertex.at(0)-'A'].involved)&&(count[side[j].vertex.at(0)-'A'].num==count[side[j].vertex.at(1)-'A'].num))
				j++;
			else
			{
				if(count[side[j].vertex.at(0)-'A'].involved&&!count[side[j].vertex.at(1)-'A'].involved)
				{
					count[side[j].vertex.at(1)-'A'].involved=true;
					count[side[j].vertex.at(1)-'A'].num=count[side[j].vertex.at(0)-'A'].num;
				}
				else if(count[side[j].vertex.at(1)-'A'].involved&&!count[side[j].vertex.at(0)-'A'].involved)
				{
					count[side[j].vertex.at(0)-'A'].involved=true;
					count[side[j].vertex.at(0)-'A'].num=count[side[j].vertex.at(1)-'A'].num;
				}
				else if((!count[side[j].vertex.at(0)-'A'].involved)&&(!count[side[j].vertex.at(1)-'A'].involved))
				{
					count[side[j].vertex.at(0)-'A'].involved=true;
					count[side[j].vertex.at(1)-'A'].involved=true;
					count[side[j].vertex.at(1)-'A'].num=attribution;
					count[side[j].vertex.at(0)-'A'].num=attribution;
					attribution++;
				}
				else if(count[side[j].vertex.at(1)-'A'].involved&&count[side[j].vertex.at(0)-'A'].involved)
				{
					judge1=count[side[j].vertex.at(0)-'A'].num;
					judge2=count[side[j].vertex.at(1)-'A'].num;
					for(temp=0;temp<26;temp++)
					{
						if(count[temp].involved&&count[temp].num==judge1)
						{
							count[temp].num=judge2;
						}
					}
				}
				total+=side[j].weight;
				i++;j++;
			}
		}
		cout<<total<<endl;
		cin>>n;
	}
	return 0;
}
