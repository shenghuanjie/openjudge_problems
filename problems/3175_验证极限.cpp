/*
3175: 验证极限
http://bailian.openjudge.cn/practice/3175/


描述
当整数n->无穷大时，x/an->0（其中x为任意常数，a为常数）既：给定任意一个e>0, 总能找到一个N,当n>N时，|x/an| < e说明：x,a,e为双精度，N为整数。
输入
三个数，分别代表x,a和e，其中a>1,e>0
输出
输出最小的非负整数N，使得当整数n>N时，有|x/an| < e成立
样例输入
样例输入1
4.2 5.3 10e-5
样例输入2
332 1.1 1e-4
样例输出
样例输出1
6
样例输出2
157

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,a,e;
		int i;
	cin>>x>>a>>e;
	for(i=0;;i++)
	{
		if(((x/pow(a,i))<e)&&((x/pow(a,i)))>(-e))
		{if(i!=0)cout<<i-1<<endl;else cout<<0<<endl;
		break;}
	}
	return 0;
}
