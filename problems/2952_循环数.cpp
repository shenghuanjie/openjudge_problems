/*
2952: 循环数
http://bailian.openjudge.cn/practice/2952/


描述
若一个n位的数字串满足下述条件，则称其是循环数（cyclic）：将这个数字串视为整数（可能带有前导0），并用任意一个 1 到 n 之间（包含1和n）的整数去乘它时, 会得到一个将原数字串首尾相接后，再在某处断开而得到的新数字串所对应的整数。例如，数字 142857 是循环数，因为: 142857 *1 = 142857 142857 *2 = 285714 142857 *3 = 428571 142857 *4 = 571428 142857 *5 = 714285 142857 *6 = 857142。请写一个程序判断给定的数是否是循环数。注意：在此题中，输入数字串允许带前导0，且前导0不能被忽略，例如“01”是两位数字串，而“1”是一位数字串。但将数字串转化为整数做乘法运算或比较运算时，可以忽略前导0。
输入
一行，一个长度在 2 到 60 位之间的数字串。
输出
一个整数，若输入的数字串是循环数，输出1，否则输出0。
样例输入
142857



样例输出
1


来源
1047

*/

#include<iostream>
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
	for(i=0;i<130;i++)//fuza
	{
		for(j=0;j<=1;j++)
		c[i+j]=a[i]*b[j];
	}
	for(i=0;i<130;i++)
	{
		c[i]+=k;k=c[i]/10;c[i]%=10;
	}
}
/*void exchange(int c[],char temp[],int l)
{
	int i=0,w=l-1;
	while(i<l)
	{
		temp[w--]=c[i++]+'0';
	}
}*/
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
			//exchange(c,temp,l);




       /* i=100;
		while(c[i]==0)i--;
		for(;i>=0;i--)
		{
			cout<<c[i];
		}
		cout<<endl;


		i=100;
		while(temp[i]==0)i--;
		for(;i>=0;i--)
		{
			cout<<temp[i];
		}
		cout<<endl;*/





			for(j=0;j<3*l;j++)
			{
				if(temp[j]==c[0])
				{
					//cout<<"n"<<endl;
					w=0;
					while(w<=l-1)
					{
						//cout<<"s"<<endl;
							if(temp[j+w]!=c[w])
							{
								//cout<<"no"<<endl;
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
/*i=100;
		while(c[i]==0)i--;
		for(;i>=0;i--)
		{
			cout<<c[i];
		}
		cout<<endl;*/
