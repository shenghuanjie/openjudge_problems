/*
B: 全排列
http://cxsjsx.openjudge.cn/contest1783/B/


描述
给定一个由不同的小写字母组成的字符串，输出这个字符串的所有全排列。 我们假设对于小写字母有'a' < 'b' < ... < 'y' < 'z'，而且给定的字符串中的字母已经按照从小到大的顺序排列。 
输入
输入只有一行，是一个由不同的小写字母组成的字符串，已知字符串的长度在1到6之间。
输出
输出这个字符串的所有排列方式，每行一个排列。要求字母序比较小的排列在前面。字母序如下定义：已知S = s1s2...sk , T = t1t2...tk，则S < T 等价于，存在p (1 <= p <= k)，使得s1 = t1, s2 = t2, ..., sp - 1 = tp - 1, sp < tp成立。
样例输入
abc
样例输出
abc
acb
bac
bca
cab
cba


*/

#include<iostream>
using namespace std;
void Ec(char str[],int i,int j)
{
    char t;
	int n;
    t = str[j];
	for(n=j-1;n>=i;n--)
	{
		str[n+1]=str[n];
	}
	str[i]=t;
}
void RE(char str[],int i,int j)
{
	char t;
	int n;
    t = str[i];
	for(n=i+1;n<=j;n++)
	{
		str[n-1]=str[n];
	}
	str[j]=t;
}
void RP(char str[],int k)
{
    int m;
    if(k==strlen(str))
    {
        cout<<str<<endl;
    }
    else
    {
        for(m=k; m<strlen(str);m++)
        {
            Ec(str,k,m);
            RP(str,k+1);
            RE(str,k,m);
        }
    }

}
int main()
{
    char a[10];
	cin>>a;
    RP(a,0);
    return 0;
}
