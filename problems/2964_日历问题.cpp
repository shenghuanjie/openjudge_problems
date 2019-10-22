/*
2964: 日历问题
http://bailian.openjudge.cn/practice/2964/


描述
在我们现在使用的日历中, 闰年被定义为能被4整除的年份，但是能被100整除而不能被400整除的年是例外，它们不是闰年。例如：1700, 1800, 1900 和 2100 不是闰年，而 1600, 2000 和 2400是闰年。 给定从公元2000年1月1日开始逝去的天数，你的任务是给出这一天是哪年哪月哪日星期几。
输入
输入包含若干行，每行包含一个正整数，表示从2000年1月1日开始逝去的天数。输入最后一行是−1, 不必处理。可以假设结果的年份不会超过9999。
输出
对每个测试样例，输出一行，该行包含对应的日期和星期几。格式为“YYYY-MM-DD DayOfWeek”, 其中 “DayOfWeek” 必须是下面中的一个： "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" 或 "Saturday“。
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

提示
2000.1.1. 是星期六
来源
2080

*/

#include "stdio.h"
#include "string.h"

void main()
{
	char *week[10]={"Saturday","Sunday","Monday",
					"Tuesday","Wednesday",
					"Thursday","Friday"};
	int days;
	int y,m,d,i;
	int month[13]={0,31,28,31,30,31,30,
					31,31,30,31,30,31};
	int year[10000]={0};

	for(i=2000;i<10000;i+=4)
		year[i]=1;
	for(i=2000;i<10000;i+=100)
		year[i]=0;
	for(i=2000;i<10000;i+=400)
		year[i]=1;
	while(1){
		y=2000;
		m=1;
		d=1;
		scanf("%d",&days);
		if(days==-1) break;
		i=days;
		
		while(days>=365+year[y]){
			days-=(365+year[y]);
			y++;
		}
		month[2]+=year[y];
		while(days>=month[m]){
			days-=month[m];
			m++;
		}
		d+=days;
		if(d>=10){
			if(m<10) printf("%d-0%d-%d ",y,m,d);
			else printf("%d-%d-%d ",y,m,d);
		}
		else{
			if(m<10) printf("%d-0%d-0%d ",y,m,d);
			else printf("%d-%d-0%d ",y,m,d);
		}
		puts(week[i%7]);
		month[2]=28;
	}
}
