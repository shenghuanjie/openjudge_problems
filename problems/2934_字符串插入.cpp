/*
2934: 字符串插入
http://bailian.openjudge.cn/practice/2934/


描述
有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。
输入
输入包括若干行，每一行为一组测试数据，格式为str substr
输出
对于每一组测试数据，输出插入之后的字符串。
样例输入
abcab eee
12343 555
样例输出
abceeeab
12345553
来源
计算概论期末考试

*/

#include<iostream>
using namespace std;
int main()
{
	char str[11],substr[4];
	int a,i,l;
	while(cin>>str>>substr)
	{
		    a=0;
			l=strlen(str);
			for(i=0;i<l;i++)
			{
				if(str[i]>str[a])
				{
					a=i;
				}
			}
			for(i=0;i<=a;i++)
			{cout<<str[i];}
			cout<<substr;
			for(;i<l;i++)
			{cout<<str[i];}
			cout<<endl;
	}
	return 0;
}
