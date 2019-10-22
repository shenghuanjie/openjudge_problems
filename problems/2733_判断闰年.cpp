/*
2733: 判断闰年
http://bailian.openjudge.cn/practice/2733/


描述
判断某年是否是闰年。
输入
输入只有一行，包含一个整数a(0 < a < 3000)
输出
一行，如果公元a年是闰年输出Y，否则输出N
样例输入
2006
样例输出
N
提示
公历纪年法中，能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年， 能被3200整除的也不是闰年，如1900年是平年，2000年是闰年，3200年不是闰年。

*/

#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a%3200==0)
		cout<<"N"<<endl;
	else if(a%400==0)
		cout<<"Y"<<endl;
	else if(a%100==0)
		cout<<"N"<<endl;
	else if(a%4==0)
		cout<<"Y"<<endl;
	else
		cout<<"N"<<endl;
	return 0;
}
