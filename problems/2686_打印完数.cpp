/*
2686: 打印完数
http://bailian.openjudge.cn/practice/2686/


描述
一个数如果恰好等于它的因子之和，这个数就成为“完数”。例如，6的因子为1、2、3，而6＝1＋2＋3，因此6是“完数”。编程序打印出1000之内（包括1000）所有的完数，并按如下格式输出其所有因子：6 its factors are 1,2,3
输入
无输入
输出
输出1000以内所有的完数及其因子，每行一个完数。
样例输入

样例输出

来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	int well[100],i,j,a,b,x;
	for(i=1;i<1001;i++)
	{
		b=0;
		x=0;
		for(j=1;j<i;j++)
	   {
			if(i%j==0)
			{
             well[b]=j;
			b=b+1;
			}
		}
		 for(a=0;a<b;a++)
		     {
           x=x+well[a];
		     }
		if(i==x)
		{
				 cout<<i<<" its factors are ";
				 if(b>1)
				 {
					 for(a=0;a<b-1;a++)
					 {
					 cout<<well[a]<<",";
					 }
					 cout<<well[b-1];
					 cout<<endl;
				 }
		}
	}
	return 0;
}
