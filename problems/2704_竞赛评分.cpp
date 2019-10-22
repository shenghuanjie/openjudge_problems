/*
2704: 竞赛评分
http://bailian.openjudge.cn/practice/2704/


描述
现举行一次小竞赛,参赛的3支队伍,编号为1,2,3.每支队列轮流回答问题,如果回答正确,加10分;回答错误,扣10分;放弃回答不得分.经过多轮答题后,我们要统计各队的名次和得分.
输入
第一行为回答问题的轮次数n.其余各行分别为1,2,3号队伍答题的结果,回答正确为right,错误为wrong,放弃为give-up.
输出
按名次输出各队的编号和得分.名次相同的在同一行输出,且编号小者靠前.
样例输入
4
right wrong give-up
right right right
wrong right right
right right right
样例输出
(3,30)
(1,20)(2,20)
来源
计算概论05

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	struct
	{
		int score;
		int num;
	}team[3],temp;
	int n;
	string str;
	cin>>n;
	int i,j;
	for(i=0;i<3;i++)
	{
		team[i].num=i;
		team[i].score=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>str;
			if(str=="right")team[j].score+=10;
			else if(str=="wrong")team[j].score-=10;
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(team[j].score<team[j+1].score)
			{
				temp=team[j];
				team[j]=team[j+1];
				team[j+1]=temp;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		if(i<2&&team[i+1].score==team[i].score)
	cout<<"("<<team[i].num+1<<","<<team[i].score<<")";
		else
			cout<<"("<<team[i].num+1<<","<<team[i].score<<")"<<endl;
	}
	return 0;
}
