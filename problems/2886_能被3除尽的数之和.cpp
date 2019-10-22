/*
2886: 能被3除尽的数之和
http://bailian.openjudge.cn/practice/2886/


描述
输入一个非负整数n（n≥0），求从0到n之间（注意包括n）所有能被3除尽的数之和。
输入
非负整数：n
输出
[0，n]之间能被3除尽的数之和：sum
样例输入
1
9

样例输出
0
18
提示
因为有多组测试数据,建议程序通过下面方式读入nint n;while(cin>>n){    //你的代码}

*/

#include<iostream>
using namespace std;
int main()
{
	int sum;
	int n;
	while(cin>>n)
	{
		sum=0;
		while(n%3!=0)n--;
		for(;n>0;n-=3)
		{
			sum+=n;
		}
		cout<<sum<<endl;
	}
		return 0;
}
