/*
2880: 句中最长的单词
http://bailian.openjudge.cn/practice/2880/


描述
输入一个英文句子，长度不超过40个字符。编写程序，输出句子中最长的一个单词。
输入
长度不超过40的字符串
输出
句中最长的单词
样例输入
This is a test sentence
样例输出
sentence
提示
1.输入只有一个句子，不需使用while2.若句尾有标点，则标点和最后一个单词可看成是一个单词，可以不用作额外判断3.假设句中最长的单词只有一个
来源
计算概论作业2006

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	char input[201];
	int num[201],locate[201],k=0,i=0,j=0;
	while(cin.getline(input,200))
	{
	memset(num,0,sizeof(num));
	memset(locate,0,sizeof(locate));
	k=0;i=0;j=0;
	for(i=0;i<strlen(input);i++)
	{
		if(((input[i]=='.')||(input[i]==' ')||(input[i]==','))&&((input[i+1]!='.')&&(input[i+1]!=' ')&&(input[i+1]!=',')))
		{
			k++;
			locate[k]=i+1;
			continue;
		}
		if((input[i]!='.')&&(input[i]!=' ')&&(input[i]!=','))
		num[k]++;
	}
	j=k;
	for(i=k;i>=0;i--)
	{
		if(num[i]>num[j])
			j=i;
	}
    for(i=locate[j];i<(locate[j]+num[j]);i++)
	cout<<input[i];
	cout<<endl;
	}
	return 0;
}
