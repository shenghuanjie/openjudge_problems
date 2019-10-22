/*
3248: 最大公约数
http://bailian.openjudge.cn/practice/3248/


描述
给定两个正整数，求它们的最大公约数。
输入
有多组数据，每行为两个正整数，且不超过int可以表示的范围。
输出
行对应输出最大公约数。
样例输入
4 8
8 6
200 300
样例输出
4
2
100
提示
系统的测试文件中数据有很多组，因此同学们在程序里要写循环读取数据并判断是否读完文件的代码。如果不知道如何处理，可以参考下面的两个模板：C++这样写：while(cin>>x>>y){  求x和y最大公约数的代码}C这样写：while(scanf(%x %y",&x,&y)!=EOF){  求x和y最大公约数的代码}

*/

#include<iostream>
using namespace std;
int f(int a,int b)
{
	if(a%b==0)
		return b;
	else 
		return f(b,a%b);
}
int main()
{
	int a,b;
	while(cin>>a>>b)
	cout<<f(a>b?a:b,a<b?a:b)<<endl;
	return 0;
}
