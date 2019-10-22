/*
3429: D
http://bailian.openjudge.cn/practice/3429/


描述
现有一整数集（允许有重复元素），初始为空。我们定义如下操作：add x 把x加入集合del x 把集合中所有与x相等的元素删除ask x 对集合中元素x的情况询问对每种操作，我们要求进行如下输出。add 输出操作后集合中x的个数del 输出操作前集合中x的个数ask 先输出0或1表示x是否曾被加入集合（0表示不曾加入），再输出当前集合中x的个数，中间用空格格开。
输入
第一行是一个整数n，表示命令数。0<=n<=100000。后面n行命令，如Description中所述。
输出
共n行，每行按要求输出。
样例输入
7
add 1
add 1
ask 1
ask 2
del 2
del 1
ask 1

样例输出
1
2
1 2
0 0
0
2
1 0

提示
Please use STL’s set and multiset to finish the task.

*/

#include<set>
#include<iostream>
using namespace std;
int main()
{
	int i,n,num;
	//int count=0;
	//multiset<int>::const_iterator p;
	char str[5];
	cin>>n;
	multiset<int> use;
	set<int> remember;
	for(i=0;i<n;i++)
	{
		scanf("%s%d",str,&num);
		switch(str[1])
		{
		case'd':{
			use.insert(num);
			remember.insert(num);
			printf("%d\n",use.count(num));
			break;
		}
		case'e':
		{
			printf("%d\n",use.count(num));
			use.erase(num);
			break;
		}
		case's':
		{
			if(remember.find(num)!=remember.end())
			{
					printf("1 %d\n",use.count(num));
			}
			else
					printf("0 0\n");
			break;
		}
		}
	}
	return 0;
}

