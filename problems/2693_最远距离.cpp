/*
2693: 最远距离
http://bailian.openjudge.cn/practice/2693/


描述
给定一组点(x,y)，求距离最远的两个点之间的距离。
输入
第一行是点数n（n大于等于2）接着每一行代表一个点，由两个浮点数x y组成。
输出
输出一行是最远两点之间的距离。使用printf("%.4f\n", dis)输出距离值并精确到小数点后4位。
样例输入
6
34.0 23.0
28.1 21.6
14.7 17.1
17.0 27.2
34.7 67.1
29.3 65.1
样例输出
53.8516
提示
注意在内部计算时最好使用double类型，但在用scanf读取数据时只能用float类型的变量。
来源
计算概论05

*/

#include<iostream>
#include<cmath>
using namespace std;
struct
{
	double x;
	double y;
}dot[1000];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>dot[i].x>>dot[i].y;
	}
	double distance=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(((dot[i].x-dot[j].x)*(dot[i].x-dot[j].x)+(dot[i].y-dot[j].y)*(dot[i].y-dot[j].y))>distance)
				distance=(dot[i].x-dot[j].x)*(dot[i].x-dot[j].x)+(dot[i].y-dot[j].y)*(dot[i].y-dot[j].y);
		}
	}
	cout<<sqrt(distance);
	return 0;
}
