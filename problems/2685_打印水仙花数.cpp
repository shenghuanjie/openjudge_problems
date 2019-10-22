/*
2685: 打印水仙花数
http://bailian.openjudge.cn/practice/2685/


描述
打印出所有得“水仙花数”，所谓“水仙花数”是指一个3位数，其各位数字的立方和等于该数本身，例如，152是水仙花数，因为153＝1×1×1＋5×5×5＋3×3×3。
输入
无输入。
输出
输出所有水仙花数，每行输出一个水仙花数。
样例输入

样例输出

来源
计算概论05

*/

#include<iostream>
using namespace std;
int main()
{
	int i=100,a=0,b=0,c=0;
	for(;i<1000;i++)
	{
		a=i%10;
		b=i/10;
		c=b/10;
		b%=10;
		if(i==(a*a*a+b*b*b+c*c*c))
		{
			cout<<i<<endl;
		}
	}
    return 0;
}
