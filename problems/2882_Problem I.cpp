/*
2882: Problem I
http://bailian.openjudge.cn/practice/2882/


描述
输入整数a和b，如果a能被b整除，就输出算式的商，否则输出整数商和余数，如果b=0，输出error。
输入
整数a和整数b
输出
商或者商和余数或者error
样例输入
100 10
75 20
1 0

样例输出
10
3 15
error

提示
1.测试数据有多组，采用如下的格式：while(cin>>a>>b){		// calculate		// output}2.注意ACM题目特点，不要输出额外信息。

*/

#include<iostream>
using namespace std;
int main()
{
	int a,b,quo,rem;
while(cin>>a>>b)
{
	if(b==0)
		cout<<"error"<<endl;
	else
	{
		rem=a%b;
		quo=(a-rem)/b;
	if(rem==0)
		cout<<quo<<endl;
	if(rem!=0)
		cout<<quo<<" "<<rem<<endl;
	}
	} 
	return 0;
}
