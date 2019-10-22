/*
0102: Round and Round We Go
http://dsb.openjudge.cn/exercisea/0102/


描述
A cyclic number is an integer n digits in length which, when multiplied by any integer from 1 to n, yields a"cycle"of the digits of the original number. That is, if you consider the number after the last digit to "wrap around"back to the first digit, the sequence of digits in both numbers will be the same, though they may start at different positions.For example, the number 142857 is cyclic, as illustrated by the following table:142857	*1	=	142857142857	*2	=	285714142857	*3	=	428571142857	*4	=	571428142857	*5	=	714285142857	*6	=	857142
输入
Write a program which will determine whether or not numbers are cyclic. The input file is a list of integers from 2 to 60 digits in length. (Note that preceding zeros should not be removed, they are considered part of the number and count in determining n. Thus, "01"is a two-digit number, distinct from "1" which is a one-digit number.)
输出
For each input integer, write a line in the output indicating whether or not it is cyclic.
样例输入
142857
142856
142858
01
0588235294117647

样例输出
142857 is cyclic
142856 is not cyclic
142858 is not cyclic
01 is not cyclic
0588235294117647 is cyclic

来源
Greater New York 2001

*/

#include<iostream>
#include"string.h"
using namespace std;
void change(char x[], int a[],int l)
{
	int i,w=0;
	for(i=l-1;i>=0;i--)
	{
		a[w++]=x[i]-'0';
	}
}
void mul(int a[],int b[],int c[])
{
	int i,j,k=0;
	for(i=0;i<130;i++)
	{
		for(j=0;j<=1;j++)
		c[i+j]=a[i]*b[j];
	}
	for(i=0;i<130;i++)
	{
		c[i]+=k;k=c[i]/10;c[i]%=10;
	}
}
void add(int a[],int b[],int l)
{
	int i=0,w=0;
	for(;i<l;i++)
	b[i]=a[i];
	for(;w<l;w++)
	b[i++]=a[w];
	for(w=0;w<l;w++)
		b[i++]=a[w];
}
int main()
{
	char x[300];
	int a[300],i,l,j,w,b[300],c[300],temp[300];
	while(cin>>x)
	{
		for(i=0;i<300;i++)
			temp[i]=0;
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		memset(temp,0,sizeof(temp));
		l=strlen(x);
		memset(a,0,sizeof(a));
		change(x,a,l);
		add(a,temp,l);
		for(i=2;i<=l;i++)
		{
			b[0]=i%10;
			b[1]=i/10;
			mul(a,b,c);
			for(j=0;j<3*l;j++)
			{
				if(temp[j]==c[0])
				{
					w=0;
					while(w<=l-1)
					{
							if(temp[j+w]!=c[w])
							{
								
								goto next;
							}
							w++;
					}
					goto again;
				}
                    next:;
			}
			cout<<x<<" is not cyclic"<<endl;
			goto newx;
again:;
		}
		cout<<x<<" is cyclic"<<endl;
newx:;
	} 
	return 0;
}
