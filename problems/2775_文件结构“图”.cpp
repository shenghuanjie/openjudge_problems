/*
2775: 文件结构“图”
http://bailian.openjudge.cn/practice/2775/


描述
在计算机上看到文件系统的结构通常很有用。Microsoft Windows上面的"explorer"程序就是这样的一个例子。但是在有图形界面之前，没有图形化的表示方法的，那时候最好的方式是把目录和文件的结构显示成一个"图"的样子，而且使用缩排的形式来表示目录的结构。比如：ROOT|     dir1|     file1|     file2|     file3|     dir2|     dir3|     file1file1file2这个图说明：ROOT目录包括三个子目录和两个文件。第一个子目录包含3个文件，第二个子目录是空的，第三个子目录包含一个文件。
输入
你的任务是写一个程序读取一些测试数据。每组测试数据表示一个计算机的文件结构。每组测试数据以'*'结尾，而所有合理的输入数据以'#'结尾。一组测试数据包括一些文件和目录的名字（虽然在输入中我们没有给出，但是我们总假设ROOT目录是最外层的目录）。在输入中,以']'表示一个目录的内容的结束。目录名字的第一个字母是'd'，文件名字的第一个字母是'f'。文件名可能有扩展名也可能没有（比如fmyfile.dat和fmyfile）。文件和目录的名字中都不包括空格,长度都不超过30。一个目录下的子目录个数和文件个数之和不超过30。
输出
在显示一个目录中内容的时候，先显示其中的子目录（如果有的话），然后再显示文件（如果有的话）。文件要求按照名字的字母表的顺序显示（目录不用按照名字的字母表顺序显示，只需要按照目录出现的先后显示）。对每一组测试数据，我们要先输出"DATA SET x:"，这里x是测试数据的编号（从1开始）。在两组测试数据之间要输出一个空行来隔开。你需要注意的是，我们使用一个'|'和5个空格来表示出缩排的层次。
样例输入
file1
file2
dir3
dir2
file1
file2
]
]
file4
dir1
]
file3
*
file2
file1
*
#
样例输出
DATA SET 1:
ROOT
|     dir3
|     |     dir2
|     |     file1
|     |     file2
|     dir1
file1
file2
file3
file4

DATA SET 2:
ROOT
file1
file2

提示
一个目录和它的子目录处于不同的层次一个目录和它的里面的文件处于同一层次
来源
翻译自 Pacific Northwest 1998 的试题

*/

#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
string file[10][1000];//file[x][y]用于存放第x层第y个文件
int files[10];//用于存放第x层的总文件数
int deep;//层数
bool judge=true;//判断是否结束输入
bool see=true;//判断是否需要输出ROOT
int sum=1;//记录数据组数
int cmp(const void *a, const void *b) //用于qsort的比较函数
{
	string p=*(string *)a,q=*(string *)b;
	int lena=p.size();
	int lenb=q.size();
	int i;
	i=0;
	while(i<lenb&&i<lena&&p[i]==q[i])i++;
	if(i==lena&&lenb>lena)return -1;
	if(i==lenb&&lenb<lena)return 1;
	if(p[i]>q[i])return 1;
	if(p[i]<q[i])return -1;
	return 0;
}
void input(int num)//num代表当前层中已有的文件数
{
	int i;
	string temp;
	cin>>temp;//输入一个名称
	if(temp[0]=='#'){judge=false;return;}//结束输入
	else if(see)//输出ROOT
	{
		cout<<"DATA SET "<<sum<<":"<<endl;
		cout<<"ROOT"<<endl;
		see=false;
	}
	if(temp[0]=='f')//假如是一个文件名，记录它
	{
		file[deep][num]=temp;
		files[deep]=num+1;
		input(files[deep]);
		return;
	}
	else if(temp[0]=='d')//假如是文件夹名直接输出
	{
		deep++;
		for (int i=0;i<deep;i++) cout<<"|     ";
		cout<<temp<<endl;
		input(0);
		return;
	}
	else if(temp[0]==']')//文件夹到了结尾，输出全部文件
	{
		int j;
		qsort(file[deep],files[deep],sizeof(string),cmp);
		for(i=0;i<files[deep];i++) 
		{
			for(j=0;j<deep;j++) cout<<"|     ";
			cout<<file[deep][i]<<endl;
			file[deep][i]="";
		}
		files[deep]=0;//将此层文件数置为0
		deep--;
		input(files[deep]);
		return;
	}
	else if(temp[0]=='*')//本组数据结束，输出ROOT下的文件
	{
		qsort(file[0],files[0],sizeof(string),cmp);
		for(i=0;i<files[0];i++) 
		{
			cout<<file[0][i]<<endl;
		}
		deep=0;
		memset(files,0,sizeof(files));
		see=true;
	}
	return;
}
int main()//主函数
{
	while(judge)
	{
	    deep=0;
		memset(files,0,sizeof(files));
		input(0);
		cout<<endl;
		sum++;
	}
	return 0;
}
