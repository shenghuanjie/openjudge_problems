/*
4041: 矩阵运算
http://bailian.openjudge.cn/practice/4041/


描述
矩阵有以下两种运算方式：矩阵乘法和矩阵转置矩阵乘法的计算方法定义为:对于矩阵A[m][q]*B[q][n],相乘的结果为矩阵C[m][n]且对于矩阵C中每一项都有C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ..... + A[i][q]*B[q][j]注意只有当前一矩阵A的列数等于后一矩阵B的行数时两个矩阵才能相乘。矩阵的转置定义为：交换矩阵C[m][q]中所有的行列元素所得到的矩阵C'[q][m]称为矩阵C的转置矩阵，即C'[i][j]=C[j][i] (1 <= i <= q, 1 <= j <= m)。现在给定矩阵A和B，请你计算矩阵A*矩阵B的乘积结果的转置矩阵，如果矩阵A和矩阵B不能进行乘法运算则直接计算矩阵A的转置矩阵。
输入
两个矩阵A和B第一行为矩阵的大小，后面跟着输入矩阵，所有元素都是整数，矩阵的行和列大小不超过100x1,y1a00 a01 a02a10 a11 a12a20 a21 a22a30 a31 a32x2,y2b00 b01 b02 b03 b04b10 b11 b12 b13 b14b20 b21 b22 b23 b24
输出
矩阵C’或A'c00 c01 c02 c03 c04c10 c11 c12 c13 c14c20 c21 c22 c23 c24c30 c31 c32 c33 c34
样例输入
4 3
1 2 3
4 5 6
7 8 9
10 11 12
3 5
7 8 9 10 11
4 5 6 7 8
1 2 3 4 5
样例输出
18   54   90  126
24   69  114  159
30   84  138  192
36   99  162  225
42  114  186  258
提示
输出格式 cout << setw(5) << c[i][j];头文件要包含 < iomanip >

*/

#include<iostream>
#include<iomanip>
using namespace std;
unsigned a[220][220],b[220][220],c[220][220]={0};
int rowa,rowb,columna,columnb;
void function(int h, int v);
void errorfunction(unsigned input[][220],int v, int h);
int main()
{
	int i,j;
	cin>>columna>>rowa;
	for(i=0;i<columna;i++)
		for(j=0;j<rowa;j++)
			cin>>a[i][j];
	cin>>columnb>>rowb;
	for(i=0;i<columnb;i++)
		for(j=0;j<rowb;j++)
			cin>>b[i][j];
	if(rowa!=columnb)
		errorfunction(a,columna,rowa);
	else
		function(columna,rowb);
	//system("pause");
	return 0;
}
void errorfunction(unsigned input[][220],int v, int h)
{
	int i ,j;
	for(i=0;i<h;i++)
	{
		for(j=0;j<v;j++)
			cout << setw(5) << input[j][i];
		cout<<endl;
	}
}
void function(int h,int v)
{
	int i,j,k;
	for(i=0;i<h;i++)
		for(j=0;j<v;j++)
			for(k=0;k<rowa;k++)
				c[i][j]+=a[i][k]*b[k][j];
	errorfunction(c,h,v);
}
