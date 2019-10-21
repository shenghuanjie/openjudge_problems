/*
4045: 与3和5无关的数
http://bailian.openjudge.cn/practice/4045/


描述
一个正整数,如果它能被x整除,或者它的十进制表示法中某个位数上的数字为x,则称其为与x相关的数.现求所有小于等于n(n<300)的与x无关的正整数的平方和.
输入
输入为一行,正整数n,(n<300)
输出
输出小于等于n的与3和5无关的正整数的平方和
样例输入
8
样例输出
134

*/

#include <iostream>
using namespace std;
bool judge(unsigned x)
{
	if((!(x%3))||(!(x%5)))
		return true;
	while(x)
	{
		if(x%10==3||x%10==5)
			return true;
		x/=10;
	}
	return false;
}
int main()
{
	unsigned n,i;
	cin>>n;
	unsigned sum=0;
	for(i=1;i<=n;i++)
	{
		if(!judge(i))
		{
			//cout<<i<<endl;
			sum+=i*i;
		}

	}
	cout<<sum<<endl;
	//system("pause");
	return 0;
}
