/*
4045: ��3��5�޹ص���
http://bailian.openjudge.cn/practice/4045/


����
һ��������,������ܱ�x����,��������ʮ���Ʊ�ʾ����ĳ��λ���ϵ�����Ϊx,�����Ϊ��x��ص���.��������С�ڵ���n(n<300)����x�޹ص���������ƽ����.
����
����Ϊһ��,������n,(n<300)
���
���С�ڵ���n����3��5�޹ص���������ƽ����
��������
8
�������
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
