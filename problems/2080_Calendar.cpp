b'/*\n2080: Calendar\nhttp://bailian.openjudge.cn/practice/2080/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\nA calendar is a system for measuring time, from hours and minutes, to months and days, and finally to years and centuries. The terms of hour, day, month, year and century are all units of time measurements of a calender system.According to the Gregorian calendar, which is the civil calendar in use today, years evenly divisible by 4 are leap years, with the exception of centurial years that are not evenly divisible by 400. Therefore, the years 1700, 1800, 1900 and 2100 are not leap years, but 1600, 2000, and 2400 are leap years.Given the number of days that have elapsed since January 1, 2000 A.D, your mission is to find the date and the day of the week.\n\xe8\xbe\x93\xe5\x85\xa5\nThe input consists of lines each containing a positive integer, which is the number of days that have elapsed since January 1, 2000 A.D. The last line contains an integer \xe2\x88\x921, which should not be processed.You may assume that the resulting date won\xe2\x80\x99t be after the year 9999.\n\xe8\xbe\x93\xe5\x87\xba\nFor each test case, output one line containing the date and the day of the week in the format of "YYYY-MM-DD DayOfWeek", where "DayOfWeek" must be one of "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" and "Saturday".\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n1730\r\n1740\r\n1750\r\n1751\r\n-1\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n2004-09-26 Sunday\r\n2004-10-06 Wednesday\r\n2004-10-16 Saturday\r\n2004-10-17 Sunday\n\xe6\x9d\xa5\xe6\xba\x90\nShanghai 2004 Preliminary\n\n*/\n\n#include<iostream>\n#include<string>\nusing namespace std;\nshort judge(int year)\n{\n\tif(year%4!=0||(year%100==0)&&(year%400!=0))\n\t\treturn 0;\n\telse\n\t    return 1;\n}\nint main()\n{\n\tint day;\n\tint type[2]={365,366};\n\tchar week[7][10]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};\n\tint month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,\n\t\t\t         31,29,31,30,31,30,31,31,30,31,30,31};\n\tstring yue[13]={"00","01","02","03","04","05","06","07","08","09","10","11","12"};\n\twhile(cin>>day&&day!=-1)\n\t{\n\t\tint year,mth;\n\t\tint temp=day%7;\n\t\tfor(year=2000;day>=type[judge(year)];year++)\n\t\t\tday-=type[judge(year)];\n\t\tfor(mth=0;day>=month[judge(year)][mth];mth++)\n\t\t\tday-=month[judge(year)][mth];\n\t\tprintf("%d-%02d-%02d %s\\n",year,mth+1,day+1,week[temp]);\n\n\t}\n\treturn 0;\n}'
