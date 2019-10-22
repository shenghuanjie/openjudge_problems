/*
0301: 滑动窗口
http://dsb.openjudge.cn/practice3/0301/


描述
给定一个长度为n（n<=10^6）的数组。有一个大小为k的滑动窗口从数组的最左端移动到最右端。你可以看到窗口中的k个数字。窗口每次向右滑动一个数字的距离。下面是一个例子：数组是 [1 3 -1 -3 5 3 6 7]， k = 3。窗口位置最小值最大值[1  3  -1] -3  5  3  6  7 -13 1 [3  -1  -3] 5  3  6  7 -33 1  3 [-1  -3  5] 3  6  7 -35 1  3  -1 [-3  5  3] 6  7 -35 1  3  -1  -3 [5  3  6] 7 36 1  3  -1  -3  5 [3  6  7]37你的任务是得到滑动窗口在每个位置时的最大值和最小值。
输入
输入包括两行。第一行包括n和k，分别表示数组的长度和窗口的大小。第二行包括n个数字。
输出
输出包括两行。第一行包括窗口从左至右移动的每个位置的最小值。第二行包括窗口从左至右移动的每个位置的最大值。
样例输入
8 3
1 3 -1 -3 5 3 6 7
样例输出
-1 -3 -3 -3 3 3
3 3 5 5 6 7

*/

#include<iostream>
using namespace std;
struct Node
{
	int data;
	int location;
};
void equal(Node *a,Node *b)
{
	a->data=b->data;
	a->location=b->location;
}
int main()
{
	int n,k,*MAX,*MIN;
	int i,j,head=1,tail=0;
	Node *d,*q;
	cin>>n>>k;
	d=new Node[n+2];
	q=new Node[n+2];
	MAX=new int[n-k+3];
	MIN=new int[n-k+3];
	for(i=0;i<n;i++)
	{
		cin>>d[i].data;
		d[i].location=i;
	}
	for(i=0;i<k-1;i++)
	{
		while(head<=tail&&q[tail].data>d[i].data)
			tail--;
		tail++;
		equal(q+tail,d+i);
	}
	for(i=k-1;i<n;i++)
	{
		while(head<=tail&&q[tail].data>d[i].data)
			tail--;
		tail++;
		equal(q+tail,d+i);
		while(head<=tail&&q[head].location<=i-k)
			head++;
		MIN[i-k+1]=q[head].data;
	}
	//MAX
	head=1;tail=0;
	for(i=0;i<k-1;i++)
	{
		while(head<=tail&&q[tail].data<d[i].data)
			tail--;
		tail++;
		equal(q+tail,d+i);
	}
	for(i=k-1;i<n;i++)
	{
		while(head<=tail&&q[tail].data<d[i].data)
			tail--;
		tail++;
		equal(q+tail,d+i);
		while(head<=tail&&q[head].location<=i-k)
			head++;
		MAX[i-k+1]=q[head].data;
	}


	for(i=0;i<n-k+1;i++)
		cout<<MIN[i]<<" ";
	cout<<endl;

	for(i=0;i<n-k+1;i++)
		cout<<MAX[i]<<" ";
	cout<<endl;
	
//	system("pause");
	return 0;
}
