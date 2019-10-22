/*
2915: 字符串排序
http://bailian.openjudge.cn/practice/2915/


描述
先输入你要输入的字符串的个数。然后换行输入该组字符串。每个字符串以回车结束，每个字符串少于一百个字符。如果在输入过程中输入的一个字符串为“stop”，也结束输入。然后将这输入的该组字符串按每个字符串的长度，由小到大排序，按排序结果输出字符串。
输入
字符串的个数，以及该组字符串。每个字符串以‘\n’结束。如果输入字符串为“stop”，也结束输入.
输出
将输入的所有字符串按长度由小到大排序输出(如果有“stop”，不输出“stop”)。
样例输入
5
sky is grey
cold
very cold
stop
3
it is good enough to be proud of
good
it is quite good
样例输出
cold
very cold
sky is grey
good
it is quite good
it is good enough to be proud of

提示
根据输入的字符串个数来动态分配存储空间（采用new()函数）。每个字符串会少于100个字符。测试数据有多组，注意使用while()循环输入。
来源
06级计算概论课

*/

#include<iostream>
using namespace std;
int main()
{
	int n,i,j=0,max=0,count[110],rank[110],temp=0,w=1;
	cin>>n;
	memset(count,0,sizeof(count));
	memset(rank,0,sizeof(rank));
	char a[110][110],str[110];
	for(i=0;i<=n;i++)
	{
		cin.getline(a[i],100);
	    strcpy(str,a[i]);
		if(strcmp(str,"stop")==0)
			break;
		count[j++]=strlen(str);
		strcpy(str,"");
	}
	for(i=1;i<=n;i++)
	{
		max=0;temp=0;
		for(j=1;j<=n;j++)
		{
		if(count[j]>max)
		{
			max=count[j];
			temp=j;
		}
		}
		rank[w++]=temp;
		count[temp]=0;
	}
	for(i=n;i>=1;i--)
	{
		if(rank[i]!=0)
		cout<<a[rank[i]]<<endl;
	}
	return 0;
}
