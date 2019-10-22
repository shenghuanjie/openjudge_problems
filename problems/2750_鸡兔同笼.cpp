/*
2750: 鸡兔同笼
http://bailian.openjudge.cn/practice/2750/


描述
一个笼子里面关了鸡和兔子（鸡有2只脚，兔子有4只脚，没有例外）。已经知道了笼子里面脚的总数a，问笼子里面至少有多少只动物，至多有多少只动物。
输入
一行，一个正整数a (a < 32768)。
输出
一行，包含两个正整数，第一个是最少的动物数，第二个是最多的动物数，两个正整数用一个空格分开。如果没有满足要求的答案，则输出两个0，中间用一个空格分开。
样例输入
20

样例输出
5 10


*/

#include <iostream>
using namespace std;
int main( )
{int nCases,i, nFeet;
//nCases表示输入测试数据的组数，nFeet表示输入的脚数。
cin>>nCases;
for(i= 0; i< nCases; i++){
cin>>nFeet;
if(nFeet%2 != 0) // 如果有奇数只脚，则输入不正确，
// 因为不论2 只还是4 只，都是偶数
cout<<"0 0"<<endl;
else if (nFeet%4 != 0)
//若要动物数目最少，使动物尽量有4 只脚
//若要动物数目最多，使动物尽量有2 只脚
cout<<nFeet/ 4 + 1<<" "<<nFeet/ 2<<endl;
else
cout<<nFeet/ 4<<" "<<nFeet/ 2<<endl;
}
return 0;
}
