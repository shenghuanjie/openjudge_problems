/*
B: 公共子序列
http://cxsjsx.openjudge.cn/contest1793/B/


描述
我们称序列Z = < z1, z2, ..., zk >是序列X = < x1, x2, ..., xm >的子序列当且仅当存在 严格上升 的序列< i1, i2, ..., ik >，使得对j = 1, 2, ... ,k, 有xij = zj。比如Z = < a, b, f, c > 是X = < a, b, c, f, b, c >的子序列。现在给出两个序列X和Y，你的任务是找到X和Y的最大公共子序列，也就是说要找到一个最长的序列Z，使得Z既是X的子序列也是Y的子序列。
输入
输入包括多组测试数据。每组数据包括一行，给出两个长度不超过200的字符串，表示两个序列。两个字符串之间由若干个空格隔开。
输出
对每组输入数据，输出一行，给出两个序列的最大公共子序列的长度。
样例输入
abcfbc         abfcab
programming    contest 
abcd           mnp

样例输出
4
2
0

来源
翻译自Southeastern Europe 2003的试题

*/

#include <string.h>
#include <iostream>
using namespace std;
#define MAX 210
#define OFFSET 1

char str1[MAX];
char str2[MAX];
int len[MAX][MAX];

int main()
{
    while (scanf("%s %s",str1,str2)!=EOF)
    {
        memset(len,0,sizeof len);
        for (int i=0;i<MAX;i++)
        {
            len[0][i] = 0;
            len[i][0] = 0;
        }
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        for (int i=0;i<len1;i++)
        {
            for (int j=0;j<len2;j++)
            {
                if (str1[i]==str2[j])
                    len[i+OFFSET][j+OFFSET] = len[i-1+OFFSET][j-1+OFFSET]+1;
                else
                    len[i+OFFSET][j+OFFSET] = len[i-1+OFFSET][j+OFFSET] > len[i+OFFSET][j-1+OFFSET] ? len[i-1+OFFSET][j+OFFSET] : len[i+OFFSET][j-1+OFFSET];
            }
        }
        cout<<len[len1][len2]<<endl;
    }

    return 0;
}

