/*
2926: 算术运算
http://bailian.openjudge.cn/practice/2926/


描述
根据输入的数字及运算符对输入的两个数进行运算。输出结果。
输入
输入为一行。先输入第一个数，空格，输入运算符，再空格，输入第二个数。回车结束输入。输入的运算符只会是“+”或者“-”。
输出
输出运算的结果。
样例输入
1111111111 - 1
45 + 873
样例输出
1111111110
918
提示
输入的运算符只会是“+”或者“-”。测试输入可能会比较大。需要用长整型。
来源
06计算概论联系题

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char sign;
	long a,b;
	while(cin>>a>>sign>>b)
	{
		if(sign=='+')
		{
			cout<<a+b<<endl;
		}
		else if(sign=='-')
		{
			cout<<a-b<<endl;
		}
	}
	return 0;
}
