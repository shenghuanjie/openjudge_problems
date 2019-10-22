/*
2676: 整数的个数
http://bailian.openjudge.cn/practice/2676/


描述
给定k（1  < k < 100）个正整数，其中每个数都是大于等于1，小于等于10的数。写程序计算给定的k个正整数中，1，5和10出现的次数。
输入
输入有两行：第一行包含一个正整数k，第二行包含k个正整数，每两个正整数用一个空格分开。
输出
输出有三行，第一行为1出现的次数，，第二行为5出现的次数，第三行为10出现的次数。
样例输入
5
1 5 8 10 5 

样例输出
1
2
1

来源
计算概论05－模拟考试1

*/

#include<iostream>
using namespace std;
int main()
{
	int k,i;
	cin>>k;
	int a,b,c;
	a=0;
	b=0;
	c=0;
	int w[120];
		for(i=0;i<k;i++)
		{
			cin>>w[i];
			if(w[i]==1)
				a=a+1;
            if(w[i]==5)
				b=b+1;
		    if(w[i]==10)
				c=c+1;
		}
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
	return 0;
}
