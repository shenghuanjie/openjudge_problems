/*
0401: K-th Number
http://dsb.openjudge.cn/4/0401/


描述
You are working for Macrohard company in data structures department. After failing your previous task about key insertion you were asked to write a new data structure that would be able to return quickly k-th order statistics in the array segment. That is, given an array a[1...n] of different integer numbers, your program must answer a series of questions Q(i, j, k) in the form: "What would be the k-th number in a[i...j] segment, if this segment was sorted?" For example, consider the array a = (1, 5, 2, 6, 3, 7, 4). Let the question be Q(2, 5, 3). The segment a[2...5] is (5, 2, 6, 3). If we sort this segment, we get (2, 3, 5, 6), the third number is 5, and therefore the answer to the question is 5. 
输入
The first line of the input file contains n --- the size of the array, and m --- the number of questions to answer (1 <= n <= 100 000, 1 <= m <= 5 000). The second line contains n different integer numbers not exceeding 109 by their absolute values --- the array for which the answers should be given. The following m lines contain question descriptions, each description consists of three numbers: i, j, and k (1 <= i <= j <= n, 1 <= k <= j - i + 1) and represents the question Q(i, j, k). 
输出
For each question output the answer to it --- the k-th number in sorted a[i...j] segment. 
样例输入
7 3
1 5 2 6 3 7 4
2 5 3
4 4 1
1 7 3
样例输出
5
6
3
提示
This problem has huge input,so please use c-style input(scanf,printf),or you may got time limit exceed.
来源
Northeastern Europe 2004, Northern Subregion

*/

#include<iostream>
#include"stdio.h"
using namespace std;
#define degree 20
#define len 100010
int MergeTree[degree][len]={0};//归并树，记录的是归并排序中结果的部分
int record[len]={0};
/*简单解释：二分+归并排序+线段树+二分

首先建树：按照归并排序的过程，先走到底，然后将该层（deep）[l...r]归并后得到的数据存到seq[deep][l...r]中去，则这一小段始终是有序的。。。。可以想象，最上层是排好序的数组，所有叶子节点组合起来就是原数组。。。

查询分三个步骤：1是在最上层二分选取一个元素key，查询key在[l, r]中大于几个数num，取得一个最小的num>=k的那个，则为所求，通过线段树去查询key在[l, r]中大于几个数num，到了符合的区间后就可以通过二分来求得其在本区间大于几个数。。。貌似说不清楚了。。*/
struct//线段树，记录的是归并排序中划分的过程
{
	int left; int right; int middle;
}LinearTree[len*4];

void Merge(int *data,int left,int right,int middle,int deep)
{
	//cout<<"Deep: "<<deep<<endl;
	int i,j,p1,p2;
	for(i=left;i<=right;i++)
		MergeTree[deep][i]=data[i];
	p1=left;p2=middle+1;
	i=left;
	while(p1<=middle&&p2<=right)
	{
		if(MergeTree[deep][p1]>MergeTree[deep][p2])
			data[i++]=MergeTree[deep][p2++];
		else
			data[i++]=MergeTree[deep][p1++];
	}
	while(p1<=middle)
	{
		data[i++]=MergeTree[deep][p1++];
	}
	while(p2<=right)
	{
		data[i++]=MergeTree[deep][p2++];
	}
	//cout<<"Degree:　"<<deep<<"  Left: "<<left<<"  Right:  "<<right<<"  Data:  ";
	for(i=left;i<=right;i++)
	{
		MergeTree[deep][i]=data[i];
		//cout<<MergeTree[deep][i]<<" ";
	}
	//cout<<endl;
}
void MergeSort(int *data,int left,int right,int deep,int point)
{
	int middle=(left+right)/2;
	LinearTree[point].left=left;
	LinearTree[point].right=right;
	LinearTree[point].middle=middle;
	if(left<right)
	{
		MergeSort(data,left,middle,deep+1,point*2);
		MergeSort(data,middle+1,right,deep+1,point*2+1);
		Merge(data,left,right,middle,deep);
	}
	else if(left==right)
	{
	//	cout<<"Degree:　"<<deep<<"  Left: "<<left<<"  Right:  "<<right<<"  Data:  ";
		MergeTree[deep][left]=data[left];
		//cout<<MergeTree[deep][left]<<endl;
	}
}
int result (int left,int right,int key, int deep)
{
	int l,r,middle;
	l=left;r=right;
	while(l<=r)
	{
		middle=(l+r)/2;
		if(MergeTree[deep][middle]>key)
		{
			r=middle-1;
		}
		else if(MergeTree[deep][middle]<key)
		{
			l=middle+1;
		}
		else
			return middle-left+1;
	}
	//if(r!=l){cout<<l<<"|"<<r<<"|"<<left<<"|"<<right<<"|"<<key<<"|"<<deep<<endl;system("pause");}
	return r-left+1;
}
int count(int left,int right,int point,int key,int deep)
{
	//cout<<"deep :"<<deep<<" point: "<<point<<endl;
	if(LinearTree[point].left==left&&LinearTree[point].right==right)
		return result(left,right,key,deep);
	if(right<=LinearTree[point].middle)
		return count(left,right,point*2,key,deep+1);
	if(left>LinearTree[point].middle)
		return count(left,right,point*2+1,key,deep+1);
	return count(left,LinearTree[point].middle,point*2,key,deep+1)+count(LinearTree[point].middle+1,right,point*2+1,key,deep+1);
}
int binaryfind(int n,int left,int right,int location)
{
	int i,j,temp,middle;
	i=1;j=n;
	while(i<=j)
	{
		middle=(i+j)/2;
		temp=count(left,right,1,MergeTree[1][middle],1);
		if(temp>=location)
			j=middle-1;
		else if(temp<location)
			i=middle+1;	
	}
	return MergeTree[1][i];
}
int main()
{
	int input[len];
	int n,m,i,start,end,find;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		scanf("%d",input+i);
		record[i]=input[i];
	}
	MergeSort(input,1,n,1,1);
	//for(i=1;LinearTree[i].left>0;i++)
		//cout<<"Left:"<<LinearTree[i].left<<"Right:"<<LinearTree[i].right<<"Middle: "<<LinearTree[i].middle<<endl;
	while(m--)
	{
		scanf("%d%d%d",&start,&end,&find);
		cout<<binaryfind(n,start,end, find)<<endl;
	}
	//system("pause");
	return 0;
}
