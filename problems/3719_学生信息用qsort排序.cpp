/*
3719: 学生信息用qsort排序
http://bailian.openjudge.cn/practice/3719/


描述
将输入的学生信息按名字排序后输出。
输入
每个学生信息是两行，第一行是名字，由英文字母和空格构成，最长18个字符;第二行格式为：学号,性别 年龄学号是一个不超过100,000的整数; 性别是一个字符，为'M' 或'F'; 年龄是一个不大于100的整数输入数据最后有可能有若干个回车，也有可能没有学生不会超过100个，不会出现两个学生的名字仅大小写有差别的情况
输出
格式和输入数据基本一样，唯一不同在于输出学号的时候，必须用前导0补足8位
样例输入
Tom Hanks
7863,M 18
Mary Lu
18343,F 21
Santa Fe
27863,M 17

样例输出
Mary Lu
00018343,F 21
Santa Fe
00027863,M 17
Tom Hanks
00007863,M 18

提示
1. 用一个结构存放单个学生信息，用一个结构数组存放全部学生信息，然后将该结构数组排序2. 用 gets可以读入一行3. 用 stricmp 函数作大小写无关的字符串比较。如果在POJ上交，名字要改成 _stricmp4. 补前导0的方法：printf("%04d",34) 会输出 0034, printf("%05d",34) 会输出 000345. 如果用scanf读入一行的数据后，紧接着用gets读下一行，那么很可能gets读入的不是下一行的内容，而是一个空行（刚刚用sanf读的那一行的末尾的回车导致）
来源
Guo Wei

*/

#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
struct student
{
 char name[20];
 int code;
 char gender;
 int age;
};

int compare(const void *elem1,const void *elem2)
{
 const char *sname1=((student *)elem1)->name;
 const char *sname2=((student *)elem2)->name;
 return _stricmp(sname1,sname2);
}

int main()
{
 student namelist[100]={};
 int step=0;
 while(gets(namelist[step].name))
 {
  scanf("%d,%c %d",&namelist[step].code,&namelist[step].gender,&namelist[step].age);
  cin.get();
  step++;
 }
 
 if(namelist[step-1].name[0]==0)
    step--;
 qsort(namelist,step,sizeof(student),compare);
 int i=0;
 for(;i<step-1;i++)
 {
  printf("%s\n",namelist[i].name);
  printf("%08d,%c %d\n",namelist[i].code,namelist[i].gender,namelist[i].age);
 }
 printf("%s\n",namelist[i].name);
    printf("%08d,%c %d",namelist[i].code,namelist[i].gender,namelist[i].age);
 return 0;
} 
