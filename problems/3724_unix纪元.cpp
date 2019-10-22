/*
3724: unix纪元
http://bailian.openjudge.cn/practice/3724/


描述
在著名的unix系统中，使用了一种简洁高效的时间表示方法，即：将1970年1月1日0点作为“unix纪元”的原点，从1970年1月1日开始经过的秒数存储为一个32位整数请编写一个程序，帮助把一个unix时间辍，转换成形如"YYYY-mm-dd HH:ii:ss"的格式，其中的字母分别代表YYYY4 位数字完整表示的年份mm数字表示的月份，有前导零的 2 位数字dd月份中的第几天，有前导零的2位数字HH小时，24 小时格式，有前导零ii有前导零的分钟数ss秒数，有前导零
输入
输入数据有若干行，每行包含一个整数t，(0<=t<2^31)
输出
对每一行输入数据，输出一行，为形如“YYYY-mm-dd HH:ii:ss”格式的时间
样例输入
10
1234567890

样例输出
1970-01-01 00:00:10
2009-02-13 23:31:30


*/

#include<iostream>
#include <iomanip>
using namespace std;
unsigned judge(unsigned m)
{ 
	if(m%4!=0||(m%100==0&&m%400!=0))
		return  0; 
	else 
		return 1; 
	
}
int main()
{
	unsigned year[2]={365,366},month[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	unsigned hour,minute;
	unsigned years,months,days;
	//unsigned i,j;
	unsigned time;
	while(cin>>time)
	{
	years=1970;
	while(1)
	{
		unsigned t=year[judge(years)]*86400;
		if(time>=t)
		{
			time-=t;
			years++;
		}
		else 
			break;
	}
	unsigned temp=judge(years);
	months=1;
	while(1)
	{
		unsigned t=month[temp][months]*86400;
		if(time>=t)
		{
			time-=t;
			months++;
		}
		else
			break;
	}
	days=1+time/86400;
	time%=86400;
	hour=time/3600;
	time%=3600;
	minute=time/60;
	time%=60;
	cout<<years<<"-";
	cout<<setfill('0')<<setw(2)<<months;
	cout<<"-";
	cout<<setfill('0')<<setw(2)<<days;
	cout<<" ";
	cout<<setfill('0')<<setw(2)<<hour;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<minute;
	cout<<":";
	cout<<setfill('0')<<setw(2)<<time;
	cout<<endl;
	}
	return 0;
}
