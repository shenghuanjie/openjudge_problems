/*
2943: 小白鼠排队
http://bailian.openjudge.cn/practice/2943/


描述
N只小白鼠(1 < N < 100)，每只鼠头上戴着一顶有颜色的帽子。现在称出每只白鼠的重量，要求按照白鼠重量从大到小的顺序输出它们头上帽子的颜色。帽子的颜色用“red”，“blue”等字符串来表示。不同的小白鼠可以戴相同颜色的帽子。白鼠的重量用整数表示。
输入
输入第一行为一个整数N，表示小白鼠的数目。下面有N行，每行是一只白鼠的信息。第一个为不大于1000的正整数，表示白鼠的重量，；第二个为字符串，表示白鼠的帽子颜色，字符串长度不超过10个字符。注意：白鼠的重量各不相同。
输出
按照白鼠的重量从大到小的顺序输出白鼠的帽子颜色。
样例输入
3
30 red
50 blue
40 green

样例输出
blue
green
red

来源
医学部计算概论2006期末考试题

*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	struct
	{
	int weight;
	string color;
	}mouse[110],temp;
	for(i=0;i<n;i++)
	{
		cin>>mouse[i].weight;
		cin>>mouse[i].color;
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(mouse[j].weight>mouse[i].weight)
			{
				temp=mouse[i];
				mouse[i]=mouse[j];
				mouse[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<mouse[i].color<<endl;
	}
	return 0;
}

