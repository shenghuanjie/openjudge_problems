/*
2870: 求矩阵的加法
http://bailian.openjudge.cn/practice/2870/


描述
矩阵int a[3][3]，矩阵int b[3][3]。矩阵的数据由用户输入。输出新的矩阵c=a+b. 输出格式：c00 c01 c02 c10 c11 c12c20 c21 c22 每个元素占4位。
输入
矩阵aa00 a01 a02a10 a11 a12a20 a21 a22矩阵bb00 b01 b02b10 b11 b12b20 b21 b22
输出
矩阵cc00 c01 c02 c10 c11 c12c20 c21 c22 
样例输入
1 2 3
4 5 6
7 8 9

7 8 9 
4 5 6
1 2 3
样例输出
   8  10  12
   8  10  12
   8  10  12
提示
1、需要     #include 2、输出格式 cout << setw(4) << c[i][j];
来源
计算概论作业2006

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a[3][3]={},b[3][3]={},*p,i=0;
	p=*a;
	while(p<*a+9)
	{
		cin>>*p;
		p++;
	}
	p=*b;
	while(p<*b+9)
	{
		cin>>*p;
		p++;
	}
	while(i<9)
	{
		cout<<setw(4)<<*(*a+i)+*(*b+i);
		if(i==2||i==5||i==8)cout<<endl;
		i++;
	}
	return 0;
}
