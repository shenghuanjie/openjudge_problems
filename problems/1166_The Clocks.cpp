/*
1166: The Clocks
http://bailian.openjudge.cn/practice/1166/


描述
|-------|    |-------|    |-------||       |    |       |    |   |   ||---O   |    |---O   |    |   O   ||       |    |       |    |       ||-------|    |-------|    |-------|    A            B            C    |-------|    |-------|    |-------||       |    |       |    |       ||   O   |    |   O   |    |   O   ||   |   |    |   |   |    |   |   ||-------|    |-------|    |-------|    D            E            F    |-------|    |-------|    |-------||       |    |       |    |       ||   O   |    |   O---|    |   O   ||   |   |    |       |    |   |   ||-------|    |-------|    |-------|    G            H            I    (Figure 1)There are nine clocks in a 3*3 array (figure 1). The goal is to return all the dials to 12 o'clock with as few moves as possible. There are nine different allowed ways to turn the dials on the clocks. Each such way is called a move. Select for each move a number 1 to 9. That number will turn the dials 90' (degrees) clockwise on those clocks which are affected according to figure 2 below. Move   Affected clocks  1         ABDE 2         ABC 3         BCEF 4         ADG 5         BDEFH 6         CFI 7         DEGH 8         GHI 9         EFHI       (Figure 2)
输入
Your program is to read from standard input. Nine numbers give the start positions of the dials. 0=12 o'clock, 1=3 o'clock, 2=6 o'clock, 3=9 o'clock.
输出
Your program is to write to standard output. Output a shortest sorted sequence of moves (numbers), which returns all the dials to 12 o'clock. You are convinced that the answer is unique.
样例输入
3 3 0
2 2 2
2 1 2
样例输出
4 5 8 9
来源
IOI 1994

*/

#include<iostream>
using namespace std;

int main()
{
	int a[10],b[10],c[10]={0,0,0,0,0,0,0,0,0,0},i;//定义a存储钟表的初始状况，b存储9种变换用到的次数，c存储变换后钟表的状态
	for(i=1;i<=9;i++)
	{
		 cin>>a[i];
		  
	}
	
	for(b[1]=0;b[1]<=3;b[1]++)
		for(b[2]=0;b[2]<=3;b[2]++)
			for(b[3]=0;b[3]<=3;b[3]++)
				for(b[4]=0;b[4]<=3;b[4]++)
					for(b[5]=0;b[5]<=3;b[5]++)
						for(b[6]=0;b[6]<=3;b[6]++)
							for(b[7]=0;b[7]<=3;b[7]++)
								for(b[8]=0;b[8]<=3;b[8]++)
									for(b[9]=0;b[9]<=3;b[9]++)//9重循环枚举变换用到的次数，最多不超过3次，否则与不变换一样，
									{
										//下边做变换
										c[1]=(a[1]+b[1]+b[2]+b[4])%4;
										c[2]=(a[2]+b[1]+b[2]+b[3]+b[5])%4;
										c[3]=(a[3]+b[2]+b[3]+b[6])%4;
										c[4]=(a[4]+b[1]+b[4]+b[5]+b[7])%4;
										c[5]=(a[5]+b[1]+b[3]+b[5]+b[7]+b[9])%4;
										c[6]=(a[6]+b[3]+b[5]+b[6]+b[9])%4;
										c[7]=(a[7]+b[4]+b[7]+b[8])%4;
										c[8]=(a[8]+b[5]+b[7]+b[8]+b[9])%4;
										c[9]=(a[9]+b[6]+b[8]+b[9])%4;
										if((c[1]+c[2]+c[3]+c[4]+c[5]+c[6]+c[7]+c[8]+c[9])==0)//判断是否找到解
										{
											for (i=0; i<b[1]; i++) cout<<"1 ";
											for (i=0; i<b[2]; i++) cout<<"2 ";
											for (i=0; i<b[3]; i++) cout<<"3 ";
											for (i=0; i<b[4]; i++) cout<<"4 ";
											for (i=0; i<b[5]; i++) cout<<"5 ";
											for (i=0; i<b[6]; i++) cout<<"6 ";
											for (i=0; i<b[7]; i++) cout<<"7 ";
											for (i=0; i<b[8]; i++) cout<<"8 ";
											for (i=0; i<b[9]; i++) cout<<"9 ";
											return 0;
										}
									}
	return 0;
}
