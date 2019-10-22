/*
2910: 提取数字
http://bailian.openjudge.cn/practice/2910/


描述
输入一个字符串，长度不超过30，内有数字字符和非数字字符，请找出字符串中所有由连续数字字符组成的正整数，并按出现顺序输出。
输入
一个字符串，最大长度为100，不包含空格等空白符。
输出
按出现顺序输出字符串中包含的正整数，每个数字一行，不要输出前导0。保证输入字符串中的正整数均在int范围内。
样例输入
a123*456U17960?302tab5876
样例输出
123
456
17960
302
5876
来源
计算概论作业2006

*/

#include<iostream>
using namespace std;
int main()
{
	char str[40],l;
	cin.getline(str,31);
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(str[i]<='9'&&str[i]>='0')
		{
			if(str[i+1]>'9'||str[i+1]<'0')
				cout<<str[i]<<endl;
			else
				cout<<str[i];
		}
	}
	return 0;
}
