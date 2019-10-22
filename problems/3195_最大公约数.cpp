/*
3195: 最大公约数
http://bailian.openjudge.cn/practice/3195/


描述
输入2个正整数，求出他们的最大公约数。
输入
输入两个正整数，只有一行，整数之间用一个空格分开
输出
输出最大公约数，只有一行，包括三个数据，分别为采用十进制，十六进制和八进制表示的最大公约数，输出数据之间用空格隔开
样例输入
3 9
样例输出
3 0x3 03
提示
注意十六进制，八进制的表示格式

*/

#include<iostream>
using namespace std;
int gcd(int a, int b) //求a, b的最大公约数
{
if(a%b ==0)
return b;
else
return gcd(b, a%b);
}
int main()
{
	int a,b,result;
	cin>>a>>b;
	result=gcd(a,b);
	cout<<result<<" ";
	cout<<"0x"<<hex<<result<<" ";
	cout<<"0"<<oct<<result<<endl;
	return 0;
}
