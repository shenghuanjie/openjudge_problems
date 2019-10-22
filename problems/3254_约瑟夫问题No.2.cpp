/*
3254: 约瑟夫问题No.2
http://bailian.openjudge.cn/practice/3254/


描述
n 个小孩围坐成一圈，并按顺时针编号为1,2,…,n，从编号为 p 的小孩顺时针依次报数，由1报到m ，当报到 m 时，该小孩从圈中出去，然后下一个再从1报数，当报到 m 时再出去。如此反复，直至所有的小孩都从圈中出去。请按出去的先后顺序输出小孩的编号。
输入
每行是用空格分开的三个整数，第一个是n,第二个是p,第三个是m (0 < m,n < 300)。最后一行是:0 0 0
输出
按出圈的顺序输出编号，编号之间以逗号间隔。
样例输入
8 3 4
0 0 0
样例输出
6,2,7,4,3,5,1,8
提示
可以利用模拟方法解题.与 http://net.pku.edu.cn/~course/cs101/book2/pp_list.txt中的 poj 2746 Joseph issue极为相似。
来源
cs10107 C++ Final Exam

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
void out(linker *head,int dead)
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
		cout<<temp->turn<<",";
		follow->next =temp->next;
		temp=temp->next;
		//cout<<follow->turn<<" ";
		//cout<<temp->turn<<endl;
		}
	}
	if(dead%2==1)
	{
		cout<<temp->turn<<",";
	    cout<<follow->turn<<endl;;//返回胜利猴子的序号
	}
	else
	{
		cout<<follow->turn<<",";
		cout<<temp->turn<<endl;
	}
}
int main()
{
	int N,M,P;
	linker *head;
	while(cin>>N>>P>>M)
	{
		num=1;
		if(N==0&&M==0)return 0;
		head=create(N);
		while(head->turn!=P)head=head->next;
		if(M!=1)
		{
		if(head!=NULL)out(head,M);
		else continue;
		}
		else
		{
			head=head->next;
			cout<<P;
			while(head->turn!=P)
			{
				cout<<","<<head->turn;
				head=head->next;
			}
			cout<<endl;
			
		}
	}
	return 0;
}
