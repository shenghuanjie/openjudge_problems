/*
4041: ��������
http://bailian.openjudge.cn/practice/4041/


����
�����������������㷽ʽ������˷��;���ת�þ���˷��ļ��㷽������Ϊ:���ھ���A[m][q]*B[q][n],��˵Ľ��Ϊ����C[m][n]�Ҷ��ھ���C��ÿһ���C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ..... + A[i][q]*B[q][j]ע��ֻ�е�ǰһ����A���������ں�һ����B������ʱ�������������ˡ������ת�ö���Ϊ����������C[m][q]�����е�����Ԫ�����õ��ľ���C'[q][m]��Ϊ����C��ת�þ��󣬼�C'[i][j]=C[j][i] (1 <= i <= q, 1 <= j <= m)�����ڸ�������A��B������������A*����B�ĳ˻������ת�þ����������A�;���B���ܽ��г˷�������ֱ�Ӽ������A��ת�þ���
����
��������A��B��һ��Ϊ����Ĵ�С��������������������Ԫ�ض���������������к��д�С������100x1,y1a00 a01 a02a10 a11 a12a20 a21 a22a30 a31 a32x2,y2b00 b01 b02 b03 b04b10 b11 b12 b13 b14b20 b21 b22 b23 b24
���
����C����A'c00 c01 c02 c03 c04c10 c11 c12 c13 c14c20 c21 c22 c23 c24c30 c31 c32 c33 c34
��������
4 3
1 2 3
4 5 6
7 8 9
10 11 12
3 5
7 8 9 10 11
4 5 6 7 8
1 2 3 4 5
�������
18   54   90  126
24   69  114  159
30   84  138  192
36   99  162  225
42  114  186  258
��ʾ
�����ʽ cout << setw(5) << c[i][j];ͷ�ļ�Ҫ���� < iomanip >

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
