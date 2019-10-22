/*
2912: 三个完全平方数
http://bailian.openjudge.cn/practice/2912/


描述
将1，2，...,9分成3组，每组3个数，组内数字不重复，组间的数字也不重复。组内的3个数字可任意排列，组成一个三位数。已知这3个数都是完全平方数，求这3个数。
输入
输入一个MAX
输出
如果求出的三个数a,b,c均小于MAX，则输出:a b c否则输出小于MAX的数：a b或者a注意：1，a,b与b,c之间各有空格一个。最后一个数之后没有空格。2，应该满足a小于b小于c。
样例输入
无
样例输出
无

*/

#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
if(n>529&&n<=784)cout<<"361 529"<<endl;
else if(n>784)cout<<"361 529 784"<<endl;
else cout<<"361"<<endl;
return 0;
}
