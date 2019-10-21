/*
4043: GPA排名系统
http://bailian.openjudge.cn/practice/4043/


描述
目前，高等院校往往采用GPA来评价学生的学术表现。传统的排名方式是求对每一个学生的平均成绩，以平均成绩作为依据进行排名。但这样的排名方法已经引起了教育界以及社会各界人士的争议，因为它存在着许多弊端。对于不同的课程，选课学生的平均成绩会不同程度地受到课程的难易程度和老师的严厉程度的制约。因而这样的排名系统无形中就鼓励了学生选择一些比较容易的课程，因为这样可以事半功倍地获得较高的平均分。为了克服这些弊端，需要对排名系统做一定的改进。一种改进的方案是对选第i门课的每一个学生的成绩加上一个特定的修正值di，例如编号为j的学生该课的成绩Gij修改为G'ij=Gij+di。最终使得经过调整后，该课调整后的平均分等于未调整前选该课的所有学生所有课的平均分。你的任务是根据某一个班级学生某学期的成绩，计算每门课的修正值di。输入学生人数m（1 <= m <= 20）、课程数目n（1 <= n <= 10）、课程名称以及各个学生各门课的成绩。对于第i门课程，输出修正值di。
输入
1. 第一行输入两个整数，用空格分隔，分别为学生人数m和课程数目n。2. 第二行输入n门课程名称，用空格分隔。每门课程的名称均不超过15个字符，均为小写。3. 第三行开始输入m * n的矩阵。表示各个学生各门课成绩x（0 < x <= 100），以空格分隔。若学生未选此课，则该位输出0.
输出
输出为n行，每行格式为“math 5”。首先输出课程名称，空格后输出修正值di。di为整数（计算过程中小数部分均舍去，不考虑），若di为正输出‘’，否则输出‘-’
样例输入
8 5
math physics algebra english chemistry
98 78 0 76 86
0 79 99 89 68
0 0 79 96 78
58 97 79 90 47
90 0 84 99 77
94 54 76 85 0
69 60 0 85 95
79 85 86 96 68
样例输出
math -1
physics 4
algebra -2
english -8
chemistry 7

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string *courses;
	int student,course_number,i,j,k,score_matrix[101][101],selected[101],inclass[101];
	cin>>student>>course_number;
	courses= new string[course_number+3];
	for(i=1;i<=course_number;i++)
		cin>>courses[i];
	for(i=1;i<=student;i++)
	{
		k=0;
		for(j=1;j<=course_number;j++)
		{
			cin>>score_matrix[i][j];
			k+=(score_matrix[i][j]!=0);
		}
		selected[i]=k;
	}
	for(i=1;i<=course_number;i++)
	{
		inclass[i]=0;
		for(j=1;j<=student;j++)
		{
			inclass[i]+=(score_matrix[j][i]!=0);
		}
	}
	int sum_score,selected_number,temp_score;
	int temp;
	for(i=1;i<=course_number;i++)
	{
		sum_score=0;
		selected_number=0;
		temp_score=0;
		for(j=1;j<=student;j++)
		{
			if(score_matrix[j][i]!=0)
			{
				for(k=1;k<=course_number;k++)
					sum_score+=score_matrix[j][k];
				selected_number+=selected[j];
				temp_score+=score_matrix[j][i];
			}
		}
		temp=sum_score/selected_number-temp_score/inclass[i];
		cout<<courses[i]<<" "<<temp<<endl;

	}
	//system("pause");
	return 0;
}
