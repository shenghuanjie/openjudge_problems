/*
2854: 点和正方形的关系
http://bailian.openjudge.cn/practice/2854/


描述
有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1），x是横轴，y是纵轴。写一个程序，判断一个给定的点是否在这个正方形内。
输入
输入坐标x，y
输出
yes或者no
样例输入
3 4
1 1
0 0
样例输出
no
yes
yes
提示
提示1：系统的测试文件中数据有很多组，因此同学们在程序里要写循环读取数据并判断是否读完文件的代码。如果不知道如何处理，可以参考下面的两个模板：C++这样写：while(cin>>x>>y){  判断x，y是否在正方形里的代码}C这样写：while(scanf(%x %y",&x,&y)!=EOF){  判断x，y是否在正方形里的代码}提示2：输出结果时，必须加上换行符endl（C++语言）或\n（c语言）。不然会报输出格式错误。提示3：要选对编程语言。如果程序是用C++语法写的，就不能在language里选c。会报编译错误。例子：比如说编号为1000的练习题，按以上要求的格式写出来的标准答案如下：#include <iostream>using namespace std;int main(){	int a,b;	while(cin>>a>>b)	{		cout<< a+b << endl;	}	return 0;}

*/

#include<iostream>
using namespace std;
int main()
{
	double x,y;
	while(cin>>x>>y)
	{
		if(x<=1&&x>=-1&&y<=1&&y>=-1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}

