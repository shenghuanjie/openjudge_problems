/*
3249: 进制转换
http://bailian.openjudge.cn/practice/3249/


描述
将一个长度最多为30位数字的十进制非负整数转换为二进制数输出。
输入
多组数据，每行为一个长度不超过30位的十进制非负整数。（注意是10进制数字的个数可能有30个，而非30bits的整数）
输出
每行输出对应的二进制数。
样例输入
0
1
3
8

样例输出
0
1
11	
1000


*/

#include<iostream>
#include<string>
using namespace std;
void chu(int *a,int l)
{
	int i=0,temp;
	while(*(a+i)==0){i++;}
	if(i==l-1&&*(a+i)==1)
	{
		cout<<"1";
		return;
	}
	for(;i<l-1;i++)
	{
		if(*(a+i)%2==1)*(a+i+1)+=10;
			*(a+i)/=2;
	}
	temp=*(a+i)%2;
	*(a+i)/=2;
	chu(a,l);
	cout<<temp;
}
int main()
{
	string inter;
	while(cin>>inter)
	{
	int l=inter.length();
	int *a=new int[l+1];
	memset(a,0,sizeof(a));
	for(int i=0;i<l;i++)
	*(a+i)=inter[i]-'0';
	if(l==1&&inter=="0")
		cout<<"0"<<endl;
	else
	{
	chu(a,l);cout<<endl;
	}
	delete a;
	}
	return 0;
}
