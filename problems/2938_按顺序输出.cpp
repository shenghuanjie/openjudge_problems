/*
2938: 按顺序输出
http://bailian.openjudge.cn/practice/2938/


描述
输入3个整数，要求按从大到小的顺序输出它们。
输入
一行，包括3个整数，以空格分隔
输出
一行，包括3个整数，以空格分隔
样例输入
1 4 4
样例输出
4 4 1
来源
医学部计算概论2006期末考试题

*/

#include<iostream>
using namespace std;
int main()
{
	int a[3],temp;
	cin>>a[0]>>a[1]>>a[2];
	for(int i=0;i<3;i++)
	{
		for(int j=i;j<3;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(int i=0;i<3;i++)
		cout<<a[i]<<" ";
		cout<<endl;
	return 0;
}
