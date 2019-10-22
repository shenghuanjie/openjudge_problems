/*
2080: Calendar
http://bailian.openjudge.cn/practice/2080/


描述
A calendar is a system for measuring time, from hours and minutes, to months and days, and finally to years and centuries. The terms of hour, day, month, year and century are all units of time measurements of a calender system.According to the Gregorian calendar, which is the civil calendar in use today, years evenly divisible by 4 are leap years, with the exception of centurial years that are not evenly divisible by 400. Therefore, the years 1700, 1800, 1900 and 2100 are not leap years, but 1600, 2000, and 2400 are leap years.Given the number of days that have elapsed since January 1, 2000 A.D, your mission is to find the date and the day of the week.
输入
The input consists of lines each containing a positive integer, which is the number of days that have elapsed since January 1, 2000 A.D. The last line contains an integer −1, which should not be processed.You may assume that the resulting date won’t be after the year 9999.
输出
For each test case, output one line containing the date and the day of the week in the format of "YYYY-MM-DD DayOfWeek", where "DayOfWeek" must be one of "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" and "Saturday".
样例输入
1730
1740
1750
1751
-1
样例输出
2004-09-26 Sunday
2004-10-06 Wednesday
2004-10-16 Saturday
2004-10-17 Sunday
来源
Shanghai 2004 Preliminary

*/

#include<iostream>
#include<string>
using namespace std;
short judge(int year)
{
	if(year%4!=0||(year%100==0)&&(year%400!=0))
		return 0;
	else
	    return 1;
}
int main()
{
	int day;
	int type[2]={365,366};
	char week[7][10]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,
			         31,29,31,30,31,30,31,31,30,31,30,31};
	string yue[13]={"00","01","02","03","04","05","06","07","08","09","10","11","12"};
	while(cin>>day&&day!=-1)
	{
		int year,mth;
		int temp=day%7;
		for(year=2000;day>=type[judge(year)];year++)
			day-=type[judge(year)];
		for(mth=0;day>=month[judge(year)][mth];mth++)
			day-=month[judge(year)][mth];
		printf("%d-%02d-%02d %s\n",year,mth+1,day+1,week[temp]);

	}
	return 0;
}
