/*
E: 木材加工
http://cxsjsx.openjudge.cn/contest1783/E/


描述
木材厂有一些原木，现在想把这些木头切割成一些长度相同的小段木头，需要得到的小段的数目是给定了。当然，我们希望得到的小段越长越好，你的任务是计算能够得到的小段木头的最大长度。木头长度的单位是厘米。原木的长度都是正整数，我们要求切割得到的小段木头的长度也要求是正整数。
输入
第一行是两个正整数N和K(1 ≤ N ≤ 10000, 1 ≤ K ≤ 10000)，N是原木的数目，K是需要得到的小段的数目。接下来的N行，每行有一个1到10000之间的正整数，表示一根原木的长度。　
输出
输出能够切割得到的小段的最大长度。如果连1厘米长的小段都切不出来，输出"0"。
样例输入
3 7
232
124
456

样例输出
114
来源
NOIP 2004

*/



#include <stdio.h>

int n, k, len[10000];

int isok(int t) {

int num = 0, i;

       for (i = 0; i < n; i++) {

              if (num >= k) break;

              num =   num+(len[i]/t)  ;

                     }

              if (  num >= k  ) return 1;

              else return 0;

                     }

void main() {

int i, left, right, mid;

       scanf("%d%d", &n, &k);

       right = 0;

              for (i = 0; i < n; i++) {

              scanf("%d", &(len[i]));

              if (right < len[i]) 
				  
				  right = len[i];

                                          }

              right++;

             left = 0;

			 while (left + 1 < right) {

              mid = (left + right) / 2;

              if (  !isok(mid)   ) right = mid;

              else left = mid;

			 }

       printf ("%d\n", left);
			  }
