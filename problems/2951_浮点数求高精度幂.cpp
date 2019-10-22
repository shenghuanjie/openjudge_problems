/*
2951: 浮点数求高精度幂
http://bailian.openjudge.cn/practice/2951/


描述
有一个实数 R ( 0.0 < R < 99.999 ) ,要求写程序精确计算 R 的 n 次方。n 是整数并且 0 < n <= 25。 
输入
T输入包括多组 R 和 n。 R 的值占第 1 到 第 6 列,  n 的值占第 8 和第 9 列。
输出
对于每组输入，要求输出一行，该行包含精确的 R 的 n 次方。输出需要去掉前导的 0 后后面不不要的 0 。如果输出是整数，不要输出小数点。
样例输入
95.123 12
0.4321 20
5.1234 15
6.7592  9
98.999 10
1.0100 12

样例输出
548815620517731830194541.899025343415715973535967221869852721
.00000005148554641076956121994511276767154838481760200726351203835429763013462401
43992025569.928573701266488041146654993318703707511666295476720493953024
29448126.764121021618164430206909037173276672
90429072743629540498.107596019456651774561044010001
1.126825030131969720661201

来源
POJ 1001

*/

#include<iostream>
using namespace std;
int len;
void multiple(int a[],int b[],int c[],int lx)//大整数乘法
{
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<lx;j++)
		{
			c[j+i]+=a[i]*b[j];
			if(c[j+i]>=10)
			{
				c[j+i+1]+=c[j+i]/10;
				c[j+i]%=10;
			}
		}
	}

}
void inter(char r[], int n)//处理输入是整数的情况
{
	int i=0,use[520],x[2][520],j=0;//use用于保存输入的浮点数去除小数点儿后的数，x用于乘方计算

	memset(x,0,sizeof(x));
	for(i=len-1;i>=0;i--)
	{
		x[0][j]=r[i]-'0';
		use[j]=x[0][j];
		j++;
	}
	int temp;

		for(i=0;i<n-1;i++)
		{
			temp=i%2;

			j=510;
			while(x[temp][j]==0)j--;
			memset(x[1-temp],0,sizeof(x[1-temp]));
			multiple(use,x[temp],x[1-temp],j+1);
		}
		j=510;
		
		while(x[1-temp][j]==0)j--;
		if(j==-1)cout<<"0";
		for(;j>=0;j--)
			cout<<x[1-temp][j];
		cout<<endl;
}
int main()
{
	short n;//指数
	char r[520];//浮点数
	while(cin>>r>>n)
	{
		int i=0;
		if(n==0){cout<<"1"<<endl;continue;}//假如指数为0，直接输出1
		if(n==1)//指数为1输出去除多余0后的数
		{
			i=strlen(r)-1;
			while(r[i]=='0')r[i--]='\0';
			if(r[i]=='.')r[i]='\0';
			cout<<r<<endl;
			continue;
		}
		int use[520],x[2][520],dot=0,j=0;//use,x同上，dot用于记录小数点儿的位置
		memset(x,0,sizeof(x));
		memset(use,0,sizeof(use));
		len=strlen(r)-1;
		i=len;
		while(r[len]=='0')len--;//扔掉多余的0
		if(r[len]=='.')//判断输入是否为整数
		{
			inter(r,n);goto next;
		}
		while(r[i]!='.'&&i>-1)i--;
			if(i==-1)
			{
				
				len++;
				inter(r,n);goto next;
			}
		//处理输入是小数的情况
		
		for(i=len;r[i]!='.';i--)
		{
			x[0][j]=r[i]-'0';
			use[j]=x[0][j];
			j++;
			
		}
		dot=j;
		
		for(i-=1;i>=0;i--)
		{
			x[0][j]=r[i]-'0';
			use[j]=x[0][j];
			j++;
			
		}
		
		
         int temp;

		 //算n次方，将之前的结果保存在x[1-temp]中，然后每次都交换存储结果的位置，而前一次的结果便作为后一次的乘数
		for(i=0;i<n-1;i++)
		{
			temp=i%2;
			j=510;
			while(x[temp][j]==0)j--;
			memset(x[1-temp],0,sizeof(x[1-temp]));
			multiple(use,x[temp],x[1-temp],j+1);
		}
		j=510;
		//输出
		while(j>=dot*n&&x[1-temp][j]==0)j--;
		//if(j<dot*n)cout<<"0";若整数部分为0貌似直接输出小数点儿
		for(;j>=dot*n;j--)
			cout<<x[1-temp][j];
		cout<<".";
		i=0;
		while(x[1-temp][i]==0)i++;
		while(j>=i)
		{
			cout<<x[1-temp][j--];
		}
		cout<<endl;
next:;

	}

	return 0;
}
