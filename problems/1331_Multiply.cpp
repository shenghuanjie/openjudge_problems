/*
1331: Multiply
http://bailian.openjudge.cn/practice/1331/


描述
6*9 = 42" is not true for base 10, but is true for base 13. That is, 6(13) * 9(13) = 42(13) because 42(13) = 4 * 131 + 2 * 130 = 54(10). You are to write a program which inputs three integers p, q, and r and determines the base B (2<=B<=16) for which p * q = r. If there are many candidates for B, output the smallest one. For example, let p = 11, q = 11, and r = 121. Then we have 11(3) * 11(3) = 121(3) because 11(3) = 1 * 31 + 1 * 30 = 4(10) and 121(3) = 1 * 32 + 2 * 31 + 1 * 30 = 16(10). For another base such as 10, we also have 11(10) * 11(10) = 121(10). In this case, your program should output 3 which is the smallest base. If there is no candidate for B, output 0. 
输入
The input consists of T test cases. The number of test cases (T ) is given in the first line of the input file. Each test case consists of three integers p, q, and r in a line. All digits of p, q, and r are numeric digits and 1<=p,q, r<=1,000,000. 
输出
Print exactly one line for each test case. The line should contain one integer which is the smallest base for which p * q = r. If there is no such base, your program should output 0. 
样例输入
3
6 9 42
11 11 121
2 2 2

样例输出
13
3
0


来源
Taejon 2002

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
