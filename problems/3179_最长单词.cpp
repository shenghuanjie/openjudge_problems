/*
3179: 最长单词
http://bailian.openjudge.cn/practice/3179/


描述
输入一个英文句子，长度不超过200个字符。其中可包含的符号只有逗号","和句号"."。输出句子中最长的一个单词。如果有多个这样的单词，输出最后出现的。
输入
多组数据，每行为一个句子，其中符号"."不代表句子结束，譬如人名中可含有".”。
输出
每行一个最长单词。这里单词的定义是仅由连续的字母组成的字符串。
样例输入
Good morning.
Have a nice day.
样例输出
morning
nice

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
