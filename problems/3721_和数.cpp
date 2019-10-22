/*
3721: 和数
http://bailian.openjudge.cn/practice/3721/


描述
给定一个正整数序列，判断其中有多少个数，等于数列中其他两个数的和。 比如，对于数列1 2 3 4, 这个问题的答案就是2, 因为3 = 2 + 1, 4 = 1 + 3。
输入
共两行，第一行是数列中数的个数n ( 1 <= n <= 100)，第二行是由n个不大于10000的正整数组成的数列，相邻两个整数之间用单个空格隔开。
输出
一个整数，即数列中等于其他两个数之和的数的个数。
样例输入
4
1 2 3 4
样例输出
2


*/

#include<iostream>
#include<stdlib.h>
using namespace std;
int cmp(const void *a,const void *b)
{
	int x=*(int *)a;
	int y=*(int *)b;
	if(x>y)return -1;
	if(x<y)return 1;
	return 0;
}
int main()
{
	int t;
	int n;
	int i,j,k;int temp;
	cin>>t;
	for(;t>0;t--)
	{
		int num=0;
		cin>>n;
		int *a=new int[n+1];
		bool judge[1000];
		memset(judge,0,sizeof(judge));
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		qsort(a,n,sizeof(a),cmp);
	//	for(i=0;i<n;i++)
	//		cout<<a[i]<<" ";
	//	cout<<endl;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				temp=a[i]+a[j];
				for(k=0;k<n;k++)
				{
					if(k==i||k==j||judge[k])continue;
					else if(temp==a[k])
					{
						num++;
						//cout<<k<<" "<<num<<endl;
						judge[k]=1;
					}
				}
			}
		}
		cout<<num<<endl;
	}
	return 0;
}
