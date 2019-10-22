/*
C: 比赛排名
http://cxsjsx.openjudge.cn/contest1759/C/


描述
5名运动员参加100米赛跑，各自对比赛结果进行了预测：A说：E是第1名。B说：我是第2名。C说：A肯定垫底。D说：C肯定拿不了第1名。E说：D应该是第1名。比赛结束后发现，只有获第1名和第2名的选手猜对了，E不是第2名和第3名，没有出现名次并列的情况。请编程判断5位选手各是第几名。
输入
无
输出
输出要求：按ABCDE的顺序输出5行，其中第1行是A的名次，第2行是B的名次，第3行是C的名次，第4行是D的名次，第5行是E的名次。
样例输入

样例输出


*/

#include<iostream>
using namespace std;
int main()
{
	int man[6];
	int word[6],temp[6],i,yes,a,b,c,d,e;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(a==b){continue;}
			for(c=1;c<=5;c++)
			{
				if((c==a)||(c==b)){continue;}
				for(d=1;d<=5;d++)
				{
					if((d==a)||(d==b)||(d==c)){continue;}
					e=15-a-b-c-d;
					if((e==2)||(e==3)){continue;}
					yes=0;
					memset(temp,0,sizeof(temp));
					word[1]=(e==1);
					word[2]=(b==2);
					word[3]=(a==5);
					word[4]=(c!=1);
					word[5]=(d==1);
					man[1]=a;
					man[2]=b;
					man[3]=c;
					man[4]=d;
					man[5]=e;
					for(i=1;i<=5;i++)
					{
						if((man[i]==1)||(man[i]==2))
						{
							temp[i]=1;
						}
							if(word[i]==temp[i])
							{	yes++;}
					}
					if(yes==5)
					{
						for(i=1;i<=5;i++)
						{
							cout<<man[i]<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}
