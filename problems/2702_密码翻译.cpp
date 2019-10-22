/*
2702: 密码翻译
http://bailian.openjudge.cn/practice/2702/


描述
在情报传递过程中,为了防止情报被截获,往往需要对情报用一定的方式加密,简单的加密算法虽然不足以完全避免情报被破译,但仍然能防止情报被轻易的识别.我们给出一种最简的的加密方法,对给定的一个字符串,把其中从a-y,A-Y的字母用其后继字母替代,把z和Z用a和A替代,则可得到一个简单的加密字符串.
输入
第一行是字符串的数目n, (也要使用get(s)读取字符串,再用n=atoi(s)获得整数数值).其余n行每行一个字符串,用gets(s)方式读取这一行字符串.每个字符串长度小于80个字符.
输出
输出每行字符串的加密字符串.
样例输入
1
Hello! How are you!
样例输出
Ifmmp! Ipx bsf zpv!
提示
为了避免gets和scanf在使用时的冲突,可用n=atoi(s)把字符串s转换为整数.atoi定义在头文件stdlib.h中.
来源
计算概论05

*/

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	char str[100];
	char s[100];
	int n;
	cin>>s;
	cin.get();
	n=atoi(s);
	do
	{
	gets(str);
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(isalpha(str[i]))
		{
			if(str[i]!='Z'&&str[i]!='z')
			str[i]+=1;
			else
				str[i]-=25;
		}
	}
	cout<<str<<endl;
	}while((--n)>0);
	return 0;
}
