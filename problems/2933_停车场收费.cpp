/*
2933: 停车场收费
http://bailian.openjudge.cn/practice/2933/


描述
 一个停车场的标准收费是3小时之内收5元，超过3小时，每增加1小时加收2元；如果时间不是整数，按比例收取，例如：如果输入为3.6小时，则费用为5 + (3.6-3)*2 = 6.2 元。最高收费为40元。假设任何车辆的停车时间都不超过24小时。编写程序，计算每辆车的停车费。(注意输出结果小数点后保留两位)
输入
输入停车的时间
输出
输出应该收取的停车费用
样例输入
2
3
3.46
样例输出
5.00
5.00
5.92

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double time;
	while(cin>>time)
	{
	double money=5;
	if(time>3)
	{
		money+=2*(time-3);
	}
	if(money>40)
		money=40.0;
	cout<<setiosflags(ios::fixed);
	cout<<setprecision(2)<<money<<endl;
	}
	return 0;
}

