/*
0101: Binary Tree
http://dsb.openjudge.cn/exercisea/0101/


描述
BackgroundBinary trees are a common data structure in computer science. In this problem we will look at an infinite binary tree where the nodes contain a pair of integers. The tree is constructed like this:The root contains the pair (1, 1).If a node contains (a, b) then its left child contains (a + b, b) and its right child (a, a + b)ProblemGiven the contents (a, b) of some node of the binary tree described above, suppose you are walking from the root of the tree to the given node along the shortest possible path. Can you find out how often you have to go to a left child and how often to a right child?
输入
The first line contains the number of scenarios.Every scenario consists of a single line containing two integers i and j (1 <= i, j <= 2*109) that representa node (i, j). You can assume that this is a valid node in the binary tree described above.
输出
The output for every scenario begins with a line containing "Scenario #i:", where i is the number of the scenario starting at 1. Then print a single line containing two numbers l and r separated by a single space, where l is how often you have to go left and r is how often you have to go right when traversing the tree from the root to the node given in the input. Print an empty line after every scenario.
样例输入
3
42 1
3 4
17 73
样例输出
Scenario #1:
41 0

Scenario #2:
2 1

Scenario #3:
4 6

来源
TUD Programming Contest 2005 (Training Session), Darmstadt, Germany

*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b;
	int left,right;
	int i=1;
	while(i<=n)
	{
		left=0;right=0;
		cin>>a>>b;
		cout<<"Scenario #"<<i++<<":"<<endl;
		while(a&&b)
		{
			if(a>b)
			{
				left+=(a-1)/b;
				a%=b;
			}
			else
			{
				right+=(b-1)/a;
				b%=a;
			}
		}
		cout<<left<<" "<<right<<endl<<endl;
	}
	//system("pause");
	return 0;
}
