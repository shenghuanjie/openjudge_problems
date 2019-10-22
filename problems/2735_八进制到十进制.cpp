/*
2735: 八进制到十进制
http://bailian.openjudge.cn/practice/2735/


描述
把一个八进制正整数转化成十进制。
输入
一行，仅含一个八进制表示的正整数a，a的十进制表示的范围是(0, 65536)。
输出
一行，a的十进制表示。
样例输入
11
样例输出
9

*/

#include<iostream>
using namespace std;
int main()
{
	int i;
	cin>>oct>>i;
	cout<<dec<<i;
	return 0;
}
