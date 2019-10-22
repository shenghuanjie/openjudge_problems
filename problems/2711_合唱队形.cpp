/*
2711: 合唱队形
http://bailian.openjudge.cn/practice/2711/


描述
N位同学站成一排，音乐老师要请其中的(N-K)位同学出列，使得剩下的K位同学不交换位置就能排成合唱队形。合唱队形是指这样的一种队形：设K位同学从左到右依次编号为1, 2, …, K，他们的身高分别为T1, T2, …, TK，则他们的身高满足T1 < T2 < … < Ti , Ti > Ti+1 > … > TK (1 <= i <= K)。你的任务是，已知所有N位同学的身高，计算最少需要几位同学出列，可以使得剩下的同学排成合唱队形。
输入
输入的第一行是一个整数N（2 <= N <= 100），表示同学的总数。第一行有n个整数，用空格分隔，第i个整数Ti（130 <= Ti <= 230）是第i位同学的身高（厘米）。
输出
输出包括一行，这一行只包含一个整数，就是最少需要几位同学出列。
样例输入
8
186 186 150 200 160 130 197 220

样例输出
4
来源
2005~2006医学部计算概论期末考试

*/

#include<iostream>
using namespace std;
struct w
{
	int num;
	int height;
}mountain[1010];
int cmp(const void *a,const void *b)
{
	w *x=(w *)a,*y=(w *)b;
	if(x->height<y->height)return -1;
	else
	return 1;
}
int main()
{
	int h[1010];
	int n;
	cin>>n;
	int i,j,temp;
	int result[1010][2];
	memset(result,0,sizeof(result));
	for(i=0;i<n;i++)
	{
		cin>>h[i];
		mountain[i].num=i;
		mountain[i].height=h[i];
	}
	qsort(mountain,n,sizeof(w),cmp);
	for(i=0;i<n;i++)
	{
		temp=0;
		for(j=0;j<mountain[i].num;j++)
			if(mountain[i].height>h[j]&&result[j][0]>temp)
				temp=result[j][0];
		result[mountain[i].num][0]+=temp+1;
		temp=0;
		for(j=mountain[i].num+1;j<n;j++)
			if(mountain[i].height>h[j]&&result[j][1]>temp)
				temp=result[j][1];
		result[mountain[i].num][1]+=temp+1;
		//cout<<mountain[i].height<<" "<<result[mountain[i].num][0]<<" "<<result[mountain[i].num][1]<<endl;
	}
	temp=0;
	for(i=0;i<n;i++)
	{
		//cout<<"zuo"<<result[i][0]<<"you"<<result[i][1]<<endl;
		if(result[i][0]+result[i][1]>temp)
			temp=result[i][0]+result[i][1];
	}
	cout<<n-temp+1<<endl;
}
