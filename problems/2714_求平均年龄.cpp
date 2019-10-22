/*
2714: 求平均年龄
http://bailian.openjudge.cn/practice/2714/


描述
班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。
输入
第一行有一个整数n（1<= n <= 100），表示学生的人数。其后n行每行有1个整数，表示每个学生的年龄，取值为15到25。
输出
输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。
样例输入
2
18
17

样例输出
17.50
来源
2005~2006医学部计算概论期末考试

*/

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int p;
	double num=0;
	for(int i=1;i<=n;i++)
	{
		cin>>p;
		num+=p;
	}
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<num/n<<endl;
	return 0;
}
