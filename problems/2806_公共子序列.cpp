/*
2806: 公共子序列
http://bailian.openjudge.cn/practice/2806/


描述
我们称序列Z = < z1, z2, ..., zk >是序列X = < x1, x2, ..., xm >的子序列当且仅当存在 严格上升 的序列< i1, i2, ..., ik >，使得对j = 1, 2, ... ,k, 有xij = zj。比如Z = < a, b, f, c > 是X = < a, b, c, f, b, c >的子序列。现在给出两个序列X和Y，你的任务是找到X和Y的最大公共子序列，也就是说要找到一个最长的序列Z，使得Z既是X的子序列也是Y的子序列。
输入
输入包括多组测试数据。每组数据包括一行，给出两个长度不超过200的字符串，表示两个序列。两个字符串之间由若干个空格隔开。
输出
对每组输入数据，输出一行，给出两个序列的最大公共子序列的长度。
样例输入
abcfbc         abfcab
programming    contest 
abcd           mnp

样例输出
4
2
0

来源
翻译自Southeastern Europe 2003的试题

*/

#include<iostream>
using namespace std;
int main()
{
	char a[220],b[220];
	int x[220][220];
	int i,j;
	while(cin>>a>>b)
	{
	int lena=strlen(a),lenb=strlen(b);
	memset(x,0,sizeof(x));
	for(i=1;i<=lena;i++)
	{
		for(j=1;j<=lenb;j++)
		{
			if(a[i-1]==b[j-1])
			{
				x[i][j]=x[i-1][j-1]+1;
			}
			else
			{
				x[i][j]=x[i-1][j]>x[i][j-1] ? x[i-1][j] : x[i][j-1];
			}
		}
	}
	cout<<x[lena][lenb]<<endl;
	}
	return 0;
}
