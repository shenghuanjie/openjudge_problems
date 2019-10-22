/*
0301: 二叉树的遍历问题
http://dsb.openjudge.cn/0504/0301/


描述
输入一棵二叉树的先序和中序遍历序列，输出其后序遍历序列。
输入
输入文件为tree.in，共两行，第一行一个字符串，表示树的先序遍历，第二行一个字符串，表示树的中序遍历。树的结点一律用小写字母表示。
输出
输出文件为tree.out，仅一行，表示树的后序遍历序列。
样例输入
abdec
dbeac

样例输出
debca

*/

#include<iostream>
#include<string>
#include<stack>
#include <stdlib.h>
using namespace std;
int comp(const void *a, const void *b)//排序中用到的比较函数
{
	if(*(char *)a>*(char *)b)
		return 1;
	else
		return -1;
}
bool Post_order(string *pre, string *in)//执行求后序遍历的函数
{
	if((pre->length()!=in->length())||(pre->length()==0)||(in->length()==0))//若字符串长度不一致或者为0返回false
	{
		cout<<pre->length()<<" "<<in->length()<<endl;
		return false;
	}
	string a,b;
	a=*pre;b=*in;
	qsort(&a[0],a.length(),sizeof(char),comp);
	qsort(&b[0],b.length(),sizeof(b[0]),comp);
	if(!(a==b))//若存在不同字符，返回false
	{
		return false;
	}
	using std::stack;
	stack<string> Tree_stack;
	string *p=in;//设定当前处理的中序遍历中的一部分的指针
	int temp;
	while(1)
	{
		if(!(p->length()==1))
		{
			temp=p->find((*pre)[0],0);//找到当前前序遍历的根节点在中序遍历中的位置
			if(temp<0)
			{
				system("pause");
				return false;
			}
			if(temp!=0)//假如该根节点有左子树，那么将该节点和其右子树压栈，然后处理左子树
			{
				Tree_stack.push(pre->substr(0,1));
				if(temp+1!=p->length())//假如该根节点有右子树，则将其压栈
					Tree_stack.push(p->substr(temp+1,pre->length()-temp-1));
				*p=p->substr(0,temp);
				*pre=pre->substr(1,pre->length()-1);
			}
			else//假如该根节点没有左子树，由于长度不为1，则一定有右子树，那么将该节点压栈，然后遍历右子树
			{
				Tree_stack.push(p->substr(0,1));
				*p=p->substr(1,p->length()-1);
				*pre=pre->substr(1,pre->length()-1);
			}
		}
		else//长度为1的时候，输出该节点的值，然后从栈中弹出之前未处理的右子树或节点
		{
			cout<<*p;
			if((*p)[0]==(*pre)[0]&&pre->length()>1)
				*pre=pre->substr(1,pre->length()-1);
			if(!Tree_stack.empty())
			{
				*p=Tree_stack.top();
				Tree_stack.pop();
			}
			else
				p=NULL;//当栈空的时候，没有数据要处理

		}
		if(p==NULL)
		{
			cout<<endl;
			break;
		}
	}
	return true;
}
int main()
{
	string preorder_data, inorder_data;
	cin>>preorder_data>>inorder_data;
	if(Post_order( &preorder_data, &inorder_data));
	else  //若出现错误，清空屏幕，输出False
	{
		system("cls");
		cout<<"False!!!"<<endl;
	}
	//system("pause");
	return 0;
}
