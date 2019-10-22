/*
2909: 字符串加空格
http://bailian.openjudge.cn/practice/2909/


描述
编写一个函数,函数的参数是一个字符串指针，函数的功能完成在字符串中每隔一个字符插入一个空格。在主函数打印变化后的字符串.注意：要在同一个字符串中操作，不要再定义一个字符串
输入
一个字符串指针
输出
变化后的字符串
样例输入
test
test ab
 test
样例输出
t e s t
t e s t   a b
  t e s t
提示
注意：要在同一个字符串中操作，不要再定义一个字符串以子函数的形式给字符串加空格,子函数的形式为: void intsert(char *p)因为有多组测试数据,读取输入的时候建议采用如下形式: char strin[40];while(cin.getline(strin, 40, '\n')){//你的代码 }
来源
计算概论作业2006

*/

#include<iostream>
using namespace std;
void intsert(char *p)
{
	int i,l;
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		cout<<*(p+i)<<" ";
	}
	cout<<endl;
}
int main()
{
	char string[40];
	while(cin.getline(string,40,'\n'))
	{
		intsert(string);
	}
	return 0;
}

