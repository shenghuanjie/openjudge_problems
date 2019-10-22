/*
2888: 字符串中的数字
http://bailian.openjudge.cn/practice/2888/


描述
输入一个字符串，长度不超过20，字符串中包含数字和非数字字符，将其中是数字的字符提取出来，对它们进行从小到大排序，非数字字符则忽略不计。
输入
若干行字符串
输出
每一个字符串中所有数字的升序排序。每个数字占四个字符位置。使用cout<< setw(4)<< num;处理完一行字符串换行一次。使用cout<< endl;
样例输入
31W 7Q9 2D2
4d t51 X9P
样例输出
   1   2   2   3   7   9
   1   4   5   9

提示
1.由于有多组测试数据，要求使用while循环读取输入。如下：while(cin.getline(str,21)){//你的代码}2.setw(4)函数需要#include < iomanip >

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char str[30];
	int i;
	int num[10];
	memset(num,0,sizeof(num));
	while(cin.getline(str,30))
	{
		int len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]>='0'&&str[i]<='9')
			{
				num[str[i]-'0']++;
			}
		}
		for(i=0;i<10;i++)
		{
			for(;num[i]>0;num[i]--)
				cout<<setw(4)<<i;
		}
		cout<<endl;
	}
	return 0;
}
