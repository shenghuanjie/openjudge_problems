/*
2804: 词典
http://bailian.openjudge.cn/practice/2804/


描述
你旅游到了一个国外的城市。那里的人们说的外国语言你不能理解。不过幸运的是，你有一本词典可以帮助你。
输入
首先输入一个词典，词典中包含不超过100000个词条，每个词条占据一行。每一个词条包括一个英文单词和一个外语单词，两个单词之间用一个空格隔开。而且在词典中不会有某个外语单词出现超过两次。词典之后是一个空行，然后给出一个由外语单词组成的文档，文档不超过100000行，而且每行只包括一个外语单词。输入中出现单词只包括小写字母，而且长度不会超过10。
输出
在输出中，你需要把输入文档翻译成英文，每行输出一个英文单词。如果某个外语单词不在词典中，就把这个单词翻译成“eh”。
样例输入
dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay

atcay
ittenkay
oopslay

样例输出
cat
eh
loops

提示
输入比较大，推荐使用C语言的I / O函数。
来源
翻译自Waterloo local 2001.09.22的试题

*/

#include <stdio.h>
 #include <string.h>
 #include <stdlib.h>
 struct dict//定义结构体用于保存一对儿字符串，一个是英文，一个是外文
 {
	 char english[11];
	 char foreign[11];
 }a[100001];
 int mycmp(const void * aa, const void * b)//为qsort提供比较函数，
 {
	 return strcmp(((dict*)aa)->foreign,((dict*)b)->foreign);
 }
 int cmp(const void* aa, const void* b)//为bsearch提供比较函数
 {
	 return strcmp((char*) aa, ((dict*)b)->foreign);
 }
 int main()
 {
	 char line[30], query[11];//line为输入的词典，query为输入的需要查找的词
	 int i=0,j,k;
	 while(gets(line))//输入数据
	 {
		 if(!strcmp(line,"")) break;
		 k = strlen(line);
		 for(j=0; j<k; j++)
			 if(line[j]==' ')
			 {
				 line[j]='\0';
				 break;
			 }
			 strcpy(a[++i].english, line);
			 strcpy(a[i].foreign, line+j+1);
	 }
	 qsort(a+1, i, sizeof(dict), mycmp);//排序
	 while(scanf("%s", query)!=EOF)
	 {
		 dict* f = (dict *) bsearch(query,a+1, i,sizeof(dict), cmp);//查找相应的
		 if(f)
			 printf("%s\n",f->english);
		 else
			 printf("eh\n");

	 }
	 return 0;
 }
