/*
3178: 开关电灯
http://bailian.openjudge.cn/practice/3178/


描述
N盏灯排成一排，从1到N依次编号。有N个人也同样编号。第一个人将灯全部熄灭；第2个人将对应2和2的倍数的灯打开；第3个人将对应着3和3的倍数的灯做反向操作（如果原来是开，则关掉它，否则就打开它）；以后的人和3做同样的操作，即第i个人将对应着i和i的倍数的灯做反向操作。
输入
灯的总数N, 1<=N<=1000
输出
在第N个人操作后，顺序输出还亮着灯的编号。
样例输入
8
样例输出
2 3 5 6 7 8

*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a[1100];
	memset(a,0,sizeof(a));
	cin>>n;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j%i==0)a[j]=1-a[j];
		}
	}
	for(j=1;j<=n;j++)
	{
		if(a[j])cout<<j<<" ";
	}
	return 0;
}
