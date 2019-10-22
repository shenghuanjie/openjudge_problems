/*
B: Trees Made to Order
http://cxsjsx.openjudge.cn/contest1788/B/


描述
We can number binary trees using the following scheme: The empty tree is numbered 0.The single-node tree is numbered 1.All binary trees having m nodes have numbers less than all those having m+1 nodes.Any binary tree having m nodes with left and right subtrees L and R is numbered n such that all trees having m nodes numbered > n have either Left subtrees numbered higher than L, or A left subtree = L and a right subtree numbered higher than R.The first 10 binary trees and tree number 20 in this sequence are shown below:Your job for this problem is to output a binary tree when given its order number.
输入
Input consists of multiple problem instances. Each instance consists of a single integer n, where 1 <= n <= 500,000,000. A value of n = 0 terminates input. (Note that this means you will never have to output the empty tree.)
输出
For each problem instance, you should output one line containing the tree corresponding to the order number for that instance. To print out the tree, use the following scheme:A tree with no children should be output as X.A tree with left and right subtrees L and R should be output as (L')X(R'), where L' and R' are the representations of L and R.  If L is empty, just output X(R').  If R is empty, just output (L')X.
样例输入
1
20
31117532
0
样例输出
X
((X)X(X))X
(X(X(((X(X))X(X))X(X))))X(((X((X)X((X)X)))X)X)
来源
East Central North America 2001

*/

#include<iostream>
using namespace std;
long long f[20],s[20];
void init()
{
 int i,m;
 long long sum;
 f[0]=1;
 f[1]=1;
 for(m=2;m<20;m++)
 {
  f[m]=0;
  for(i=0;i<m;i++)
   f[m]+=f[i]*f[m-1-i];
 }
 sum=0;
 s[0]=1;
 for(i=1;i<20;i++)
 {
  sum+=f[i];
  s[i]=sum;
 }
}
void Search(long long n,int r)
{
 long long sum=0;
 int i;
 for(i=0;i<r;i++)
 {
  sum+=f[i]*f[r-1-i];
  if(n<=sum)
   break;
 }
 sum-=f[i]*f[r-1-i];
 n-=sum;
 if(i!=0)//如果左子树非空
 {
  printf("(");
  if(n%f[r-1-i]==0)
   Search(n/f[r-1-i],i);
  else
   Search(n/f[r-1-i]+1,i);
  printf(")");
 }
 printf("X");
 if(i!=r-1)//如果右子树非空
 {
  printf("(");
  if(n%f[r-1-i]==0)
   Search(f[r-1-i],r-1-i);
  else
   Search(n%f[r-1-i],r-1-i);
  printf(")");
 }
}
int main()
{
 long long n;
 int r;
 init();
 while(scanf("%lld",&n)!=EOF)
 {
  if(n==0)
   break;
  for(r=1;r<20;r++)
  {
   if(n==s[r])
    break;
   if(n>s[r-1]&&n<s[r])
    break;
  }
  n-=s[r-1];
  Search(n,r);
  printf("\n");
 }
}

