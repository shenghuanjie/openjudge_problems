/*
2753: 菲波那契数列
http://bailian.openjudge.cn/practice/2753/


描述
菲波那契数列是指这样的数列: 数列的第一个和第二个数都为1，接下来每个数都等于前面2个数之和。给出一个正整数a，要求菲波那契数列中第a个数是多少。
输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数a(1 <= a <= 20)
输出
输出有n行，每行输出对应一个输入。输出应是一个正整数，为菲波那契数列中第a个数的大小
样例输入
4
5
2
19
1

样例输出
5
1
4181
1


*/

#include<iostream>
using namespace std;
int main()
{
	unsigned n,i,j,a,a1,a2,temp;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a1=a2=1;
		cin>>a;
		for(j=1;j<a-1;j++)
		{
			temp=a1;
			a1=a1+a2;
			a2=temp;
		}
		cout<<a1<<endl;
	}
return 0;
}
