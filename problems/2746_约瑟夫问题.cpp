/*
2746: 约瑟夫问题
http://bailian.openjudge.cn/practice/2746/


描述
约瑟夫问题：有ｎ只猴子，按顺时针方向围成一圈选大王（编号从１到ｎ），从第１号开始报数，一直数到ｍ，数到ｍ的猴子退出圈外，剩下的猴子再接着从1开始报数。就这样，直到圈内只剩下一只猴子时，这个猴子就是猴王，编程求输入ｎ，ｍ后，输出最后猴王的编号。
输入
每行是用空格分开的两个整数，第一个是 n, 第二个是 m  ( 0 < m,n <=300)。最后一行是：0 0
输出
对于每行输入数据（最后一行除外)，输出数据也是一行，即最后猴王的编号
样例输入
6 2
12 4
8 3
0 0
样例输出
5
1
7

*/

#include <iostream>
using namespace std;
int num=1;
struct linker
{
	int turn;
	linker *next;
};
linker *create(int len)//创建一个循环链表
{
	linker *head,*temp,*follow;
	int n=0;
	head=new linker;
	temp=head;
	while(n<len)
	{
	temp->turn=n+1;//赋值
	follow=temp;//跟随
	temp->next=new linker;//指向下一个节点
	n++;
	temp = temp->next;//移动temp
	}
	if(n==0)head=NULL;else follow->next = head;
	delete temp;
	return (head);
}
int out(linker *head,int dead)
{
	linker *temp=head,*follow=NULL;
	while(temp->next!=follow)
	{
		num++;//报数
		follow=temp;
		temp=temp->next;
		if(num==dead)//踢走一只猴子
		{
		num=1;
		follow->next =temp->next;
		temp=temp->next;
		//cout<<follow->turn<<" ";
		//cout<<temp->turn<<endl;
		}
	}
	if(dead%2==1)
	    return (follow->turn);//返回胜利猴子的序号
	else
		return (temp->turn);
}
int main()
{
	int N,M;
	linker *head;
	while(cin>>N>>M)
	{
		num=1;
		if(N==0&&M==0)return 0;
		head=create(N);
		if(M!=1)
		{
		if(head!=NULL)cout<<out(head,M)<<endl;
		else continue;
		}
		else
			cout<<N<<endl;
	}
	return 0;
}
