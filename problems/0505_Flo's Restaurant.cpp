/*
0505: Flo's Restaurant
http://dsb.openjudge.cn/pactice5/0505/


描述
Sick and tired of pushing paper in the dreary bleary-eyed world of finance, Flo ditched her desk job and built her own restaurant.In the small restaurant, there are several two-seat tables, four-seat tables and six-seat tables. A single diner or a group of two diners should be arranged to a two-seat table, a group of three or four diners should be arranged to a four-seat table, and a group of five or six diners should be arranged to a six-seat table.Flo's restaurant serves delicious food, and many people like to eat here. Every day when lunch time comes, the restaurant is usually full of diners. If there is no suitable table for a new coming group of diners, they have to wait until some suitable table is free and there isn't an earlier arrival group waiting for the same kind of tables. Kind Flo will tell them how long they will get their seat, and if it's longer than half an hour, they will leave for another restaurant.Now given the list of coming diners in a day, please calculate how many diners take their food in Flo's restaurant. You may assume it takes half an hour for every diner from taking a seat to leaving the restaurant.
输入
There are several test cases. The first line of each case contains there positive integers separated by blanks, A, B and C (A, B, C >0, A + B + C <= 100), which are the number of two-seat tables, the number of four-seat tables and the number of six-seat tables respectively. From the second line, there is a list of coming groups of diners, each line of which contains two integers, T and N (0 < N <= 6), representing the arrival time and the number of diners of each group. The arrival time T is denoted by HH:MM, and fixed between 08:00 and 22:00 (the restaurant closes at 23:00). The list is sorted by the arrival time of each group in an ascending order, and you may assume that no groups arrive at the same time. Each test case is ended by a line of "#".A test case with A = B = C = 0 ends the input, and should not be processed.
输出
For each test case, you should output an integer, the total number of diners who take their food in Flo's restaurant, in a separated line.
样例输入
1 1 1
10:40 1
10:50 2
11:00 4
#
1 1 1
10:40 1
10:50 2
11:00 2
#
1 2 1
10:30 1
10:40 3
10:50 2
11:00 1
11:20 5
#
0 0 0

样例输出
7
3
12

来源
PKU Monthly,Alcyone

*/

#include<iostream>
#include<string.h>
#include "stdio.h"
using namespace std;

 

struct table{
   int end[101];   // 桌子为空的时间。
   int wait_time[101];   //  桌子不为空，若为等，则其到来的时间需不小于wait_time。
};

 

int main(){
   int t[3], n, clock, minute, time, people;
   char s[10];

   while(1){
      struct table tab[3];
      int k[3] = {1, 1, 1},sum = 0;
      for(n = 0; n < 3; n ++){
         memset(tab[n].end, 0, sizeof(tab[n].end));
         memset(tab[n].wait_time, 0, sizeof(tab[n].wait_time));
      }

 

      cin >> t[0] >> t[1] >> t[2];
      getchar();    // 消去回车。
      if(t[0] == 0 && t[1] == 0 && t[2] == 0) break;
      while(1){
         gets(s);
         if(s[0] == '#') break;

         clock=10 * (s[0] - '0') + (s[1] - '0');
         minute=10 * (s[3] - '0') + (s[4] - '0');
         time= 60 * (clock - 8) + minute;
         people=s[6] - '0';    // 计算出到达的时间和人数。

         if(people == 1 || people == 2)  n = 0;
         else if(people == 3 || people == 4)  n = 1;
         else if(people == 5 || people == 6)  n = 2;

         if(time >= tab[n].end[k[n]]){

            tab[n].end[k[n]] = time + 30;
            k[n] ++;
            if(k[n] > t[n]) k[n] = 1;
            sum += people;
         }    // 第一种情况（就坐）：客人对应的桌子为空。
         else if(time >= tab[n].wait_time[k[n]]){
            tab[n].wait_time[k[n]] = tab[n].end[k[n]];
            tab[n].end[k[n]] += 30;
            k[n] ++;
            if(k[n] > t[n])  k[n] = 1;
            sum += people;
         }    // 第二种情况（等）：客人对应的桌子不为空，且上一个等待的客人已经在就餐。
      }
      cout << sum << endl;
   }
   return 0;
}
