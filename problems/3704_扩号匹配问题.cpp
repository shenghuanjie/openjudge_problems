/*
3704: 扩号匹配问题
http://bailian.openjudge.cn/practice/3704/


描述
在某个字符串（长度不超过100）中有左括号、右括号和大小写字母；规定（与常见的算数式子一样）任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。写一个程序，找到无法匹配的左括号和右括号，输出原来字符串，并在下一行标出不能匹配的括号。不能匹配的左括号用"$"标注,不能匹配的右括号用"?"标注.
输入
输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字母，字符串长度不超过100注意：cin.getline(str,100)最多只能输入99个字符！
输出
对每组输出数据，输出两行，第一行包含原始输入字符，第二行由"$","?"和空格组成，"$"和"?"表示与之对应的左括号和右括号不能匹配。
样例输入
((ABCD(x)
)(rttyy())sss)(
样例输出
((ABCD(x)
$$
)(rttyy())sss)(
?            ?$


*/

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	short left[110],temp;
	while(cin>>str)
	{
		cout<<str<<endl;
		memset(left,-1,sizeof(left));
		short l=str.length();
		short a=0,b=0;
		for(short i=0;i<l;i++)
		{
			if(str[i]=='(')
				left[a++]=i;
		}
		if(left[0]==-1)
		{
			for(short i=0;i<l;i++)
			{
				if(str[i]==')')
					cout<<"?";
				else
					cout<<" ";
			}
			cout<<endl;
			continue;
		}
		for(short x=a-1;x>=0;x--)
		{
			temp=x;
		for(short i=left[x];i<l;i++)
		{
			if(str[i]==')')
			{
				str[i]=0;
				str[left[temp--]]=0;
				break;
			}
		}
		}
		for(short i=0;i<l;i++)
		{
			if(str[i]==')')
			     cout<<'?';
			else if(str[i]=='(')
				cout<<'$';
			else cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
