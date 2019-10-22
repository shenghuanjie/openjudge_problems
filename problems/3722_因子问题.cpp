/*
3722: 因子问题
http://bailian.openjudge.cn/practice/3722/


描述
任给两个正整数N、M，求一个最小的正整数a，使得a和(M-a)都是N的因子。
输入
包括两个整数N、M。N不超过1,000,000。
输出
输出一个整数a，表示结果。如果某个案例中满足条件的正整数不存在，则在对应行输出-1
样例输入
35 10

样例输出
5


*/

#include<iostream>
using namespace std;
int main()
{
	unsigned m,n,a;
	int k;
	cin>>k;
	for(;k>0;k--)
	{
		cin>>n>>m;
		for(a=1;a<m;a++)
		{
			if(n%a==0&&n%(m-a)==0)
				break;
		}
		if(a==m)
		{
			cout<<"-1"<<endl;
			continue;
		}
		cout<<a<<endl;
	}
	return 0;
}
