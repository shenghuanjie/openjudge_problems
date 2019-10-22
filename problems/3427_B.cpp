/*
3427: B
http://bailian.openjudge.cn/practice/3427/


描述
写一个程序完成以下命令：new id ——新建一个指定编号为id的序列(id<10000)add id num——向编号为id的序列加入整数nummerge id1 id2——合并序列id1和id2中的数，并将id2清空unique id——去掉序列id中重复的元素out id ——从小到大输出编号为id的序列中的元素，以空格隔开
输入
第一行一个数n，表示有多少个命令( n＜＝２０００００)。以后n行每行一个命令。
输出
按题目要求输出
样例输入
16
new 1
new 2
add 1 1
add 1 2
add 1 3
add 2 1
add 2 2
add 2 3
add 2 4
out 1
out 2
merge 1 2
out 1
out 2
unique 1
out 1

样例输出
1 2 3 
1 2 3 4
1 1 2 2 3 3 4

1 2 3 4


*/

#include<list>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	list<int> use[10001];
	int n,i,num,num2,data;
	char str[20];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>str;
		if(strcmp(str,"new")==0)
		{
			cin>>num;
		}
		if(strcmp(str,"add")==0)
		{
			cin>>num>>data;
			use[num].push_back(data);
		}
		if(strcmp(str,"merge")==0)
		{
			cin>>num>>num2;
			use[num].merge(use[num2]);
			/*merge(use[num].begin(),use[num].end(),use[num2].begin(),use[num2].end(),temp.begin());
			use[num2].clear();
			list<int>::const_iterator i; 
			i=use[num].begin();
			copy(temp.begin(),temp.end(),i);*/

		}
		if(strcmp(str,"unique")==0)
		{
			cin>>num;
			use[num].sort();
			use[num].unique();
		}
		if(strcmp(str,"out")==0)
		{
			cin>>num;
			use[num].sort();
			list<int>::const_iterator i; 
			for(i=use[num].begin();i!=use[num].end();++i)
			{
				cout<<*i<<" ";
			}
			cout<<endl;
		}

	}
	return 0;
}
