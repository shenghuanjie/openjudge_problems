/*
2995: 登山
http://bailian.openjudge.cn/practice/2995/


描述
五一到了，PKU-ACM队组织大家去登山观光，队员们发现山上一个有N个景点，并且决定按照顺序来浏览这些景点，即每次所浏览景点的编号都要大于前一个浏览景点的编号。同时队员们还有另一个登山习惯，就是不连续浏览海拔相同的两个景点，并且一旦开始下山，就不再向上走了。队员们希望在满足上面条件的同时，尽可能多的浏览景点，你能帮他们找出最多可能浏览的景点数么？
输入
Line 1： N (2 <= N <= 1000) 景点数Line 2： N个整数，每个景点的海拔
输出
最多能浏览的景点数
样例输入
8
186 186 150 200 160 130 197 220
样例输出
4
来源
第六届北京大学程序设计大赛暨ACM/ICPC选拔赛

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
	cout<<temp-1<<endl;
}
