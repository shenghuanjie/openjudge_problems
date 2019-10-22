/*
2738: 实数加法
http://bailian.openjudge.cn/practice/2738/


描述
求两个实数相加的和。题目中输入输出里出现的浮点数都有如下的形式：P1P2...Pi.Q1Q2...Qj。对于整数部分，P1P2...Pi是一个非负整数且当整数部分不为0时，P1不等于0；对于小数部分，Qj不等于0。
输入
2行，每行是一个加数。每个加数的长度不超过100。
输出
一行，即相应的和。输出保证一定是一个小数部分不为0的实数。
样例输入
0.111111111111111111111111111111
0.111111111111111111111111111111
样例输出
0.222222222222222222222222222222

*/

/*
将小数点儿前后分别做大整数加法，然后判断小数部分是否有进位
*/
#include<iostream>
using namespace std;
void add (short a[], short b[], int len)//大整数加法
{
	int i=0;
	for(;i<len;i++)
	{
		a[i]=a[i]+b[i];
		if(a[i]>=10)
		{
			a[i+1]++;
			a[i]-=10;
		}
	}
}
void forward(short a[], short b[], int len)//判断小数部分是否需要进位
{
	if(b[len])
	{
		a[0]+=b[len];
		b[len]=0;
	}
}
int main()
{
	int n;
	cin>>n;//输入组数
	int i,j,k;
	short intera[220],interb[220];//记录两个数的整数部分
	short dota[220],dotb[220];//记录小数部分
	char a[220],b[220];//保存输入数据
	while(n>0)
	{
		memset(intera,0,sizeof(intera));//数组置空
		memset(dota,0,sizeof(dota));
		memset(interb,0,sizeof(interb));
		memset(dotb,0,sizeof(dotb));
		j=0;
		cin>>a>>b;
		int lena=strlen(a);int lenb=strlen(b);
		//将字符串转存到数组中
		for(i=lena-1;a[i]!='.';i--)
		{
			dota[j++]=a[i]-'0';
		}
		i--;
		int lendota=j;j=0;
		for(;i>=0;i--)
		{
			intera[j++]=a[i]-'0';
		}
		int lenintera=j;j=0;



		for(i=lenb-1;b[i]!='.';i--)
		{
			dotb[j++]=b[i]-'0';
		}
		i--;
		int lendotb=j;j=0;
		for(;i>=0;i--)
		{
			interb[j++]=b[i]-'0';
		}
		int leninterb=j;j=0;

		//小数部分要对齐
		if(lendota>lendotb)
		{
			for(i=lendota-1,j=lendotb-1;j>=0;i--,j--)
			{
				dotb[i]=dotb[j];
			}
			for(;i>=0;i--)
				dotb[i]=0;
		}

		if(lendotb>lendota)
		{
			for(i=lendotb-1,j=lendota-1;j>=0;i--,j--)
			{
				dota[i]=dota[j];
			}
			for(;i>=0;i--)
				dota[i]=0;
		}
		//分别进行大整数加法，并计算进位
		add(dota,dotb,lendota>lendotb ? lendota : lendotb);
		forward(intera,dota,lendota>lendotb ? lendota : lendotb);
		add(intera,interb,lenintera>leninterb ? lenintera : leninterb);
		k=210;
		//输出函数
		while(intera[k]==0&&k>0)//找到第一个不为零的数
		{
			k--;
		}
		while(k>=0)
		{
			cout<<intera[k--];
		}
    	k=lendota>lendotb ? lendota : lendotb;
		k--;
		cout<<".";
		i=0;
		while(!dota[i])i++;
		while(k>=i)
		{
			cout<<dota[k--];
		}
		cout<<endl;
		n--;
	}
	return 0;
}
