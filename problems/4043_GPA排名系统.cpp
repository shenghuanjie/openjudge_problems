/*
4043: GPA����ϵͳ
http://bailian.openjudge.cn/practice/4043/


����
Ŀǰ���ߵ�ԺУ��������GPA������ѧ����ѧ�����֡���ͳ��������ʽ�����ÿһ��ѧ����ƽ���ɼ�����ƽ���ɼ���Ϊ���ݽ��������������������������Ѿ������˽������Լ���������ʿ�����飬��Ϊ�����������׶ˡ����ڲ�ͬ�Ŀγ̣�ѡ��ѧ����ƽ���ɼ��᲻ͬ�̶ȵ��ܵ��γ̵����׳̶Ⱥ���ʦ�������̶ȵ���Լ���������������ϵͳ�����о͹�����ѧ��ѡ��һЩ�Ƚ����׵Ŀγ̣���Ϊ���������°빦���ػ�ýϸߵ�ƽ���֡�Ϊ�˿˷���Щ�׶ˣ���Ҫ������ϵͳ��һ���ĸĽ���һ�ָĽ��ķ����Ƕ�ѡ��i�ſε�ÿһ��ѧ���ĳɼ�����һ���ض�������ֵdi��������Ϊj��ѧ���ÿεĳɼ�Gij�޸�ΪG'ij=Gij+di������ʹ�þ��������󣬸ÿε������ƽ���ֵ���δ����ǰѡ�ÿε�����ѧ�����пε�ƽ���֡���������Ǹ���ĳһ���༶ѧ��ĳѧ�ڵĳɼ�������ÿ�ſε�����ֵdi������ѧ������m��1 <= m <= 20�����γ���Ŀn��1 <= n <= 10�����γ������Լ�����ѧ�����ſεĳɼ������ڵ�i�ſγ̣��������ֵdi��
����
1. ��һ�����������������ÿո�ָ����ֱ�Ϊѧ������m�Ϳγ���Ŀn��2. �ڶ�������n�ſγ����ƣ��ÿո�ָ���ÿ�ſγ̵����ƾ�������15���ַ�����ΪСд��3. �����п�ʼ����m * n�ľ��󡣱�ʾ����ѧ�����ſγɼ�x��0 < x <= 100�����Կո�ָ�����ѧ��δѡ�˿Σ����λ���0.
���
���Ϊn�У�ÿ�и�ʽΪ��math 5������������γ����ƣ��ո���������ֵdi��diΪ���������������С�����־���ȥ�������ǣ�����diΪ��������������������-��
��������
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
�������
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
