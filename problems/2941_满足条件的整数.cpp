/*
2941: 满足条件的整数
http://bailian.openjudge.cn/practice/2941/


描述
假设a、b、c均为整数，且满足a，b，c 大于1，并且小于等于100，找出所有符合条件：“a2+ b2= c2”的整数组。
输入
无。
输出
按a从小到大的顺序输出所有满足条件的整数组（若a相同，则按b从小到大的顺序输出），每行一组，每一组数据的输出样式为： a*a + b*b = c*c注意：1）为避免重复输出，要求a<=b；2）加号和等号左右各有一个空格，除此之外无多余空格。
样例输入

样例输出


*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j;
	int result;
	double temp;
	for(i=2;i<=100;i++)
	{
		for(j=i;j<=100;j++)
		{
			result=i*i+j*j;
			if(result>100*100)continue;
			temp=sqrt((double)result);
			if(temp==floor(temp))
				cout<<i<<"*"<<i<<" + "<<j<<"*"<<j<<" = "<<temp<<"*"<<temp<<endl;
		}
	}
	return 0;
}
