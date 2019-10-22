/*
2927: 判断数字个数
http://bailian.openjudge.cn/practice/2927/


描述
判断一行字符串中的数字出现的个数。
输入
输入有多行，每行一个字符串，该字符串中可以包含&^$^#@*任何符号以及空格。
输出
有多行。输出该字符串中每个出现过的数字，然后在冒号“:”后面输出该数字出现的次数。按数字大小，从小到大的顺序输出。一行输出一个数字及其出现次数。没有出现过的数字不输出。
样例输入
ldksfj857ld*&%&^%00000
138****0055end
样例输出
0:5
5:1
7:1
8:1
0:2
1:1
3:1
5:2
8:1



来源
06级计算概论课

*/

#include<iostream>
using namespace std;
int main()
{
	int count[10];
	char str[1000];
	while(cin.getline(str,999))
	{
		memset(count,0,sizeof(count));
		int l=strlen(str);
		for(int i=0;i<l;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
				count[str[i]-'0']++;
		}
		for(int i=0;i<10;i++)
		{
			if(count[i]!=0)
			{
				cout<<i<<":"<<count[i]<<endl;
			}
		}
	}
	return 0;
}
