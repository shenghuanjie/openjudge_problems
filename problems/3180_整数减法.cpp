/*
3180: 整数减法
http://bailian.openjudge.cn/practice/3180/


描述
两个十进制非负整数M和N，计算二者的差，既M-N。M、N最多可以是长度为200位的整数。
输入
多组数据，每组数据先是一行表示M，然后一行表示N。M和N开头均无冗余的0。
输出
每行一个数，表示M-N，开头不能有冗余的0，既不能输出05这样的数，而应该直接输出5。
样例输入
9999
4567
0
1
样例输出
5432
-1

*/

#include<iostream>
using namespace std;
bool judge(char a[],char b[])
{
	if(strlen(a)>strlen(b))
		return false;
	else if(strlen(a)<strlen(b))
	{
		char temp[301];
		strcpy(temp,a);
		strcpy(a,b);
		strcpy(b,temp);
		return true;
	}
	else 
	{
		int i=0,la=strlen(a);
		while(i<la&&a[i]==b[i])i++;
		if(!(i<la))return false;
		else
		{
			if(a[i]>b[i])return false;
			else if(a[i]<b[i])
			{
				char temp[301];
		strcpy(temp,a);
		strcpy(a,b);
		strcpy(b,temp);
		return true;
			}
		}
	}
}
int main()
{
	char a[301],b[301];
	bool fu;
	int i,a1[301],b1[301],j=0;
	while(cin>>a>>b)
	{
		j=0;
		fu=judge(a,b);
	memset(a1,0,sizeof(a1));
	memset(b1,0,sizeof(b1));
	for(i=strlen(a)-1;i>=0;i--)
		a1[j++]=(int)a[i]-48;
	j=0;
	for(i=strlen(b)-1;i>=0;i--)
		b1[j++]=(int)b[i]-48;
	j=0;
	for(i=0;i<201;i++)
	{
		a1[i]=a1[i]-b1[i];
		if(a1[i]<0)
		{a1[i+1]--;a1[i]+=10;}
	}
	i=202;
	while(a1[i]==0)i--;
	if(i>=0&&fu)cout<<"-";
	if(i<0)cout<<"0";
	for(;i>=0;i--)
		cout<<a1[i];
	cout<<endl;
	}
	return 0;
}
