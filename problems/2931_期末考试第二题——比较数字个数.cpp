/*
2931: 期末考试第二题——比较数字个数
http://bailian.openjudge.cn/practice/2931/


描述
输入两个长度不超过100的字符串，判断第一个字符串中出现的字母（在'a'-'z'和'A'-'Z'中取）其出现的次数是否都不大于该字母在第二个字符串中出现的次数。
输入
输入为两个长度不超过100的字符串。该字符串中可以有任意的字符包括*&^%$#@等。每个字符串以回车结束输入。
输出
输出为一行。如果第一个字符串中的每个字母的出现次数不大与其在第二个字符串中出现的次数，则输出1。否则输出0；
样例输入
aaabc
aljfbcaaa
XYZ
xxxyzG
bcdE
bcdbbEfg
样例输出
1
0
1
提示
字母要区分大小写。测试数据有多组。
来源
06级计算概论课期末考试

*/

#include<iostream>
using namespace std;
int main()
{
	char a[110],b[110];
	int la,lb,i;
	while(cin.getline(a,101)!=0)
	{
		cin.getline(b,101);
	int count[60]={};
	bool temp=false;
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<la;i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		count[a[i]-'A'+26]++;
		if(a[i]<='z'&&a[i]>='a')
		count[a[i]-'a']++;
	}
	for(i=0;i<lb;i++)
	{
		if(b[i]<='Z'&&b[i]>='A')
		count[b[i]-'A'+26]--;
		if(b[i]<='z'&&b[i]>='a')
		count[b[i]-'a']--;
	}
	for(i=0;i<=51;i++)
	{
		//cout<<count[i]<<" ";
		if(count[i]>0){cout<<"0"<<endl;temp=true;break;}
	}
	if(!temp)cout<<"1"<<endl;
	}
	return 0;
}
