/*
3751: 地质考察队
http://bailian.openjudge.cn/practice/3751/


描述
有一支地质考察队想考察一个区域内的海拔情况。已知一个n*m矩阵内的每个点的海拔。请帮助他们计算出这个区域的最高点海拔，最低点海拔
输入
第一行有两个整数，n和m，分别是行数和列数，(n<100, m<100)第2~n+1行，是每一行的所有列上点的海拔高度h (-30000 < h < 30000)，h是整数
输出
输出只有一行，包含两个数：最高海拔、最低海拔
样例输入
3 4
10 30 0 5
-10 20 0 0
-20 10 0 0

样例输出
30 -20

*/

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	int max=0,min=30010,x;
	cin>>a>>b;
	int i;
	a*=b;
	for(i=0;i<a;i++)
	{
		cin>>x;
		if(x<min)min=x;
		if(x>max)max=x;
	}
	cout<<max<<" "<<min<<endl;
	return 0;
}
