/*
2734: 十进制到八进制
http://bailian.openjudge.cn/practice/2734/


描述
把一个十进制正整数转化成八进制。
输入
一行，仅含一个十进制表示的整数a(0 < a < 65536)。
输出
一行，a的八进制表示。
样例输入
9
样例输出
11

*/

#include<iostream>
using namespace std;
void change(int a)
{
	if(a<8)
	{
		cout<<a;
		return;
	}
	change(a/8);
	cout<<a%8;
}
int main()
{
	int a;
	cin>>a;
	change(a);
	cout<<endl;
	return 0;
}
