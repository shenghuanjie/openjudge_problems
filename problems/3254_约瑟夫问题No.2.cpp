/*
3254: Լɪ������No.2
http://bailian.openjudge.cn/practice/3254/


����
n ��С��Χ����һȦ������˳ʱ����Ϊ1,2,��,n���ӱ��Ϊ p ��С��˳ʱ�����α�������1����m �������� m ʱ����С����Ȧ�г�ȥ��Ȼ����һ���ٴ�1������������ m ʱ�ٳ�ȥ����˷�����ֱ�����е�С������Ȧ�г�ȥ���밴��ȥ���Ⱥ�˳�����С���ı�š�
����
ÿ�����ÿո�ֿ���������������һ����n,�ڶ�����p,��������m (0 < m,n < 300)�����һ����:0 0 0
���
����Ȧ��˳�������ţ����֮���Զ��ż����
��������
8 3 4
0 0 0
�������
6,2,7,4,3,5,1,8
��ʾ
��������ģ�ⷽ������.�� http://net.pku.edu.cn/~course/cs101/book2/pp_list.txt�е� poj 2746 Joseph issue��Ϊ���ơ�
��Դ
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
linker *create(int len)//����һ��ѭ������
{
	linker *head,*temp,*follow;
	int n=0;
	head=new linker;
	temp=head;
	while(n<len)
	{
	temp->turn=n+1;//��ֵ
	follow=temp;//����
	temp->next=new linker;//ָ����һ���ڵ�
	n++;
	temp = temp->next;//�ƶ�temp
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
		num++;//����
		follow=temp;
		temp=temp->next;
		if(num==dead)//����һֻ����
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
	    cout<<follow->turn<<endl;;//����ʤ�����ӵ����
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
