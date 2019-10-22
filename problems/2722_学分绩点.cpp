/*
2722: 学分绩点
http://bailian.openjudge.cn/practice/2722/


描述
北京大学对本科生的成绩施行平均学分绩点制（GPA）。既将学生的实际考分根据不同的学科的不同学分按一定的公式进行计算。公式如下：实际成绩          绩点90——100          4.085——89           3.782——84           3.378——81           3.075——77           2.772——74           2.368——71           2.064——67           1.560——63           1.060以下              01．一门课程的学分绩点=该课绩点*该课学分2．总评绩点=所有学科绩点之和/所有课程学分之和现要求你编写程序求出某人A的总评绩点（GPA）。
输入
第一行 总的课程数n（n<10）；第二行 相应课程的学分（两个学分间用空格隔开）；第三行 对应课程的实际得分；此处输入的所有数字均为整数。
输出
输出有一行，总评绩点，精确到小数点后2位小数。（printf("%.2f",GPA);）
样例输入
5
4 3 4 2 3
91 88 72 69 56
样例输出
2.52
来源
计算概论化学学院期末考试

*/

#include<iostream>
using namespace std;
int main()
{
	double score[101];
	int i;
	for(i=0;i<60;i++)
		score[i]=0;
	for(;i<=63;i++)
		score[i]=1.0;
	for(;i<=67;i++)
		score[i]=1.5;
	for(;i<=71;i++)
		score[i]=2.0;
	for(;i<=74;i++)
		score[i]=2.3;
	for(;i<=77;i++)
		score[i]=2.7;
	for(;i<=81;i++)
		score[i]=3.0;
	for(;i<=84;i++)
		score[i]=3.3;
	for(;i<=89;i++)
		score[i]=3.7;
	for(;i<=100;i++)
		score[i]=4.0;
	double GPA=0.0;
	int num[12],grade[12];
	int n;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>num[i];
	for(i=1;i<=n;i++)
		cin>>grade[i];
	for(i=1;i<=n;i++)
	{
		GPA+=num[i]*score[grade[i]];
	}
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=num[i];
	}
	GPA/=sum;
	printf("%.2f",GPA);
	return 0;
}
