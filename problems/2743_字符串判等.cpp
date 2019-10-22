/*
2743: 字符串判等
http://bailian.openjudge.cn/practice/2743/


描述
判断两个由大小写字母和空格组成的字符串在忽略大小写，且忽略空格后是否相等。
输入
两行，每行包含一个字符串。
输出
若两个字符串相等，输出YES，否则输出NO。
样例输入
a A bb BB ccc CCC
Aa BBbb CCCccc

样例输出
YES

*/

#include<iostream>
using namespace std;
int main()
{
	char str1[120],str2[120];
	int i,j,l1,l2;
	int n;
	cin>>n;
	cin.get();
	for(;n>0;n--)
	{
		cin.getline(str1,110);
		cin.getline(str2,110);
		//cout<<str1<<"说"<<str2;
		//cout<<"d"<<endl;
		l1=strlen(str1);
		l2=strlen(str2);
		for(i=0;i<l1;i++)
		{
			if(str1[i]>='A'&&str1[i]<='Z')str1[i]=str1[i]-'A'+'a';
		}
		for(i=0;i<l2;i++)
		{
			if(str2[i]>='A'&&str2[i]<='Z')str2[i]=str2[i]-'A'+'a';
		}
		//cout<<str1<<endl;
		//cout<<str2<<endl;
		i=0;j=0;
		bool no=false;
		while(i<l1&&j<l2)
		{
			while(str1[i]==' ')i++;
			while(str2[j]==' ')j++;
			if(str1[i]!=str2[j])
			{
				no=true;
				break;
			}
			else
			{
				i++;j++;
			}
		}
		if(no)cout<<"NO"<<endl;
		else
		{
			for(;i<l1;i++)
			{
				if(str1[i]!=' ')
				{
					cout<<"NO"<<endl;
					goto next;
				}
			}
			for(;i<l1;i++)
			{
				if(str1[i]!=' ')
				{
					cout<<"NO"<<endl;
					goto next;
				}
			}
			for(;j<l2;j++)
			{
				if(str2[j]!=' ')
				{
					cout<<"NO"<<endl;
					goto next;
				}
			}
			cout<<"YES"<<endl;
		}
next:if(n!=1)cin.get();
	}
	return 0;
}     
