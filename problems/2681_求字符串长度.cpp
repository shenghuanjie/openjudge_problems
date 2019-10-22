/*
2681: 求字符串长度
http://bailian.openjudge.cn/practice/2681/


描述
求一个长度不大于100的字符串的长度，要求不使用strlen方法，并且使用到字符指针。
输入

输出
字符串的长度。
样例输入
I love Beijing.
样例输出
15
来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	char str[110];
	char *p;
	cin.getline(str,100);
	p=str;
	while(*p!='\0')
	{
		p++;
	}
	cout<<p-str<<endl;
	return 0;
}

