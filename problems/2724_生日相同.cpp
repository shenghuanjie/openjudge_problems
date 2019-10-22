/*
2724: 生日相同
http://bailian.openjudge.cn/practice/2724/


描述
在一个有180人的大班级中，存在两个人生日相同的概率非常大，现给出每个学生的学号，出生月日。试找出所有生日相同的学生。
输入
第一行为整数n，表示有n个学生，n<100。此后每行包含一个字符串和两个整数，分别表示学生的学号（字符串长度小于10）和出生月(1<=m<=12)日(1<=d<=31)。学号、月、日之间用一个空格分隔。
输出
对每组生日相同的学生，输出一行，其中前两个数字表示月和日，后面跟着所有在当天出生的学生的学号，数字、学号之间都用一个空格分隔。对所有的输出，要求按日期从前到后的顺序输出。对生日相同的学号，按输入的顺序输出。
样例输入
5
00508192 3 2
00508153 4 5
00508172 3 2
00508023 4 5
00509122 4 5
样例输出
3 2 00508192 00508172
4 5 00508153 00508023 00509122
来源
计算概论化学学院期末考试

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,j,x=0,n,month[101],day[101],temp;
	string number[101],tem;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>number[i]>>month[i]>>day[i];
	}
	 for(j=0;j<n-1;j++)
		{
			for(i=0;i<=n-j-2;i++)
			{
				if(month[i]>month[i+1])
				{
					temp=month[i];
					month[i]=month[i+1];
					month[i+1]=temp;
					temp=day[i];
					day[i]=day[i+1];
					day[i+1]=temp;
					tem=number[i];
					number[i]=number[i+1];
					number[i+1]=tem;
				}
			}
	    }
	 	  for(j=0;j<n-1;j++)
		{
			for(i=0;i<=n-j-2;i++)
			{			
	 if((month[i]==month[i+1])&&(day[i]>day[i+1]))
				{
					temp=day[i];
					day[i]=day[i+1];
					day[i+1]=temp;
					tem=number[i];
					number[i]=number[i+1];
					number[i+1]=tem;
				}
			}
	    }
		for(i=0;i<n-1;i++)
		{
			if((month[i]==month[i+1])&&(day[i]==day[i+1]))
				x++;
			if((month[i]!=month[i+1])||(day[i]!=day[i+1]))
			{
			if(x!=0)
			{	cout<<month[i]<<" "<<day[i]<<" ";
			for(j=i-x;j<=i;j++)
					cout<<number[j]<<" ";
			cout<<endl;}
			x=0;}
			if((i==n-2)&&(x!=0))
			{
				cout<<month[i]<<" "<<day[i]<<" ";
			for(j=i+1-x;j<=n-1;j++)
					cout<<number[j]<<" ";
			cout<<endl;
			}
		}
	return 0;
	 }
