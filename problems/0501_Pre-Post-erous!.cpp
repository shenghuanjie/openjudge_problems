/*
0501: Pre-Post-erous!
http://dsb.openjudge.cn/pactice5/0501/


描述
We are all familiar with pre-order, in-order and post-order traversals of binary trees. A common problem in data structure classes is to find the pre-order traversal of a binary tree when given the in-order and post-order traversals. Alternatively, you can find the post-order traversal when given the in-order and pre-order. However, in general you cannot determine the in-order traversal of a tree when given its pre-order and post-order traversals. Consider the four binary trees below:    a   a   a   a   /   /     \   \  b   b       b   b /     \     /     \c       c   c       cAll of these trees have the same pre-order and post-order traversals. This phenomenon is not restricted to binary trees, but holds for general m-ary trees as well.
输入
Input will consist of multiple problem instances. Each instance will consist of a line of the formm s1 s2indicating that the trees are m-ary trees, s1 is the pre-order traversal and s2 is the post-order traversal.All traversal strings will consist of lowercase alphabetic characters. For all input instances, 1 <= m <= 20 and the length of s1 and s2 will be between 1 and 26 inclusive. If the length of s1 is k (which is the same as the length of s2, of course), the first k letters of the alphabet will be used in the strings. An input line of 0 will terminate the input.
输出
For each problem instance, you should output one line containing the number of possible trees which would result in the pre-order and post-order traversals for the instance. All output values will be within the range of a 32-bit signed integer. For each problem instance, you are guaranteed that there is at least one tree with the given pre-order and post-order traversals.
样例输入
2 abc cba
2 abc bca
10 abc bca
13 abejkcfghid jkebfghicda
0
样例输出
4
1
45
207352860
来源
East Central North America 2002

*/

#include<iostream>
#include<string>
using namespace std;
/*由前序遍历和后序遍历只能得到每个结点的儿子个数，然后根据排列组合可以得到可能情况*/
string former,later;
int round,total;//round是用来遍历前序遍历的序列的，保证每个结点的儿子个数都求一遍。
int m;
int c(int n,int m){
	if(n>m-n)
		n=m-n;
	int i,k=m-n+1,ret=1;
	for(i=0;i<n;i++)ret=ret*(k+i)/(i+1);
	return ret;
}
void getson(int i,int j)
{
	if(i>j)return;
	int temp,sons=0;
	for(temp=i;temp<=j;temp++)
	{
		if(later[temp]==former[round])//在后序中找到了前序中相应的结点，是上一个节点的儿子
		{
			sons++;//儿子数加一个
			round++;//找下一个节点的儿子
			getson(i,temp-1);//后序遍历中，左边的是当前节点的儿子，递归计算
			i=temp+1;//继续看后序中右边的部分，找下一个儿子
		}

	}
	total*=c(sons,m);
}
int main()
{
	while(1)
	{
		cin>>m;
		if(m==0)
		{
			break;
		}
		cin>>former>>later;
		round=1;
		total=1;
		getson(0,former.length()-2);//去掉根结点，开始递归求儿子个数，并计算可能的排列方式
		cout<<total<<endl;
	}
	return 0;
}

