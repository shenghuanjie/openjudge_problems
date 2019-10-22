/*
2809: 计算2的N次方
http://bailian.openjudge.cn/practice/2809/


描述
任意给定一个正整数N(N<=100)，计算2的n次方的值。
输入
输入一个正整数N。
输出
输出2的N次方的值。
样例输入
5
样例输出
32

提示
高精度计算

*/

#include<iostream>
using namespace std;
int main()
{
	short result[201]={2};
	int n;
	int w=0;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		w=0;
		while(w<100)
		{
			result[w]*=2;
			w++;
		}
		w=0;
		while(w<100)
		{
			if(result[w]>=10)
			{
				result[w]-=10;
				result[w+1]++;
			}
			w++;
		}
	}
	w=100;
	while(result[w]==0)w--;
	for(;w>=0;w--)
		cout<<result[w];
	cout<<endl;
	return 0;
}
