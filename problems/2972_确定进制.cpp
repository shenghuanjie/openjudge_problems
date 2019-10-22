/*
2972: 确定进制
http://bailian.openjudge.cn/practice/2972/


描述
6*9 = 42 对于十进制来说是错误的，但是对于13进制来说是正确的。即, 6(13) * 9(13) = 42(13)， 而 42(13) = 4 * 131+ 2 * 130= 54(10)。 你的任务是写一段程序读入三个整数p、q和 r，然后确定一个进制 B(2<=B<=16) 使得 p * q = r. 如果 B有很多选择, 输出最小的一个。例如： p = 11, q = 11, r = 121. 则有 11(3) * 11(3) = 121(3) 因为 11(3) = 1 * 31+ 1 * 30= 4(10) 和 121(3) = 1 * 32+ 2 * 31+ 1 * 30= 16(10)。 对于进制 10,有 11(10) * 11(10) = 121(10)。这种情况下，应该输出 3。如果没有合适的进制，则输出 0。
输入
一行，包含三个整数p、q、r，相邻两个整数之间用单个空格隔开。 p、q、r的所有位都是数字，并且1 <= p、q、r <= 1,000,000。
输出
一个整数：即使得p * q = r成立的最小的B。如果没有合适的B，则输出 0。
样例输入
6 9 42
样例输出
13

来源
Taejon 2002, POJ 1331, 程序设计实习07

*/

#include<iostream>
using namespace std;
int change(char temp[],int n)
{
	int len=strlen(temp);
	int result=0;
	for(int i=0;i<len;i++)
	{
		if(temp[i]-'0'>=n)return -1;
		result*=n;
		result+=temp[i]-'0';
	}
	return result;
}
int main()
{
	int x;
	cin>>x;
	char a[100],b[100],c[100];
	for(int k=0;k<x;k++)
	{
	cin>>a>>b>>c;
	int i;
	for(i=2;i<=16;i++)
	{
		if(change(a,i)==-1||change(b,i)==-1||change(c,i)==-1)continue;
		if((change(a,i)*change(b,i))==change(c,i))break;
	}
	if(i==17)i=0;
	cout<<i<<endl;
	}
	return 0;
}
