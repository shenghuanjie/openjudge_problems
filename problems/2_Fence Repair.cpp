/*
2: Fence Repair
http://dsb.openjudge.cn/final2011/2/


描述
Farmer John wants to repair a small length of the fence around the pasture. He measures the fence and finds that he needs N (1 ≤ N ≤ 20,000) planks of wood, each having some integer length Li (1 ≤ Li ≤ 50,000) units. He then purchases a single long board just long enough to saw into the N planks (i.e., whose length is the sum of the lengths Li). FJ is ignoring the "kerf", the extra length lost to sawdust when a sawcut is made; you should ignore it, too.FJ sadly realizes that he doesn't own a saw with which to cut the wood, so he mosies over to Farmer Don's Farm with this long board and politely asks if he may borrow a saw.Farmer Don, a closet capitalist, doesn't lend FJ a saw but instead offers to charge Farmer John for each of the N-1 cuts in the plank. The charge to cut a piece of wood is exactly equal to its length. Cutting a plank of length 21 costs 21 cents.Farmer Don then lets Farmer John decide the order and locations to cut the plank. Help Farmer John determine the minimum amount of money he can spend to create the N planks. FJ knows that he can cut the board in various different orders which will result in different charges since the resulting intermediate planks are of different lengths. 
输入
Line 1: One integer N, the number of planksLines 2..N+1: Each line contains a single integer describing the length of a needed plank
输出
Line 1: One integer: the minimum amount of money he must spend to make N-1 cuts
样例输入
3
8
5
8
样例输出
34
提示
He wants to cut a board of length 21 into pieces of lengths 8, 5, and 8.The original board measures 8+5+8=21. The first cut will cost 21, and should be used to cut the board into pieces measuring 13 and 8. The second cut will cost 13, and should be used to cut the 13 into 8 and 5. This would cost 21+13=34. If the 21 was cut into 16 and 5 instead, the second cut would cost 16 for a total of 37 (which is more than 34). 中文提示：现在需要n个木板，且给定这n个木板的长度。现有一块长度为这n个木板长度之和的长木板，需要把这个长木板分割需要的n块（一空需要切n-1刀）。每次切一刀时，切之前木板的长度是本次切割的成本。（例如，将长度为21的木板切成长度分别为8、5、8的三块。切第一刀时的成本为21，将其切成长度分别为13和8的两块。第二刀成本为13，并且将木板切成长度为8和5的两块，这样工作完成，总成本为21+13=34。另外，假如第一刀将木板切成长度为16和5的两块，则总开销为21+16=37，比上一个方案开销更大）。请你设计一种切割的方式，使得最后切完后总成本最小。可以应用Huffman树求解此问题。输入：第1行：一个整数n，为需要的木板数量第2行----第n+1行：每块木板的长度输出：一个整数，最小的总成本

*/

#include<iostream>
#include "stdio.h"
//#include<string>
//#include "string.h"
//#include "stdlib.h"
using namespace std;
unsigned heap[30000]={0};
int n;
/*int cmp(const void *a,const void *b)
{
	if(*((int *)a)>*((int *)b))
		return 1;
	else
		return -1;
}*/
void sitdown(int i)
{
	unsigned temp=heap[i];
	while(i<n)
	{
		if(2*i+1>=n)
			break;
		if(2*i+2>=n)
		{
			if(heap[2*i+1]<temp)
			{
				heap[i]=heap[2*i+1];
				i=i*2+1;
			}
			break;
		}
		if(temp<=heap[2*i+1]&&temp<=heap[2*i+2])
			break;
		if(heap[2*i+1]<heap[2*i+2])
		{
			heap[i]=heap[2*i+1];
			i=i*2+1;
		}
		else
		{
			heap[i]=heap[2*i+2];
			i=i*2+2;
		}
	}
	heap[i]=temp;
}
/*void situp(int i)
{
	int temp=heap[i];
	while(i>=0)
	{
		if((i-1)/2<0)
			break;
		if(heap[(i-1)/2]>temp)
		{
			heap[i]=heap[(i-1)/2];
			i=(i-1)/2;
		}
		else 
			break;
	}
}*/
int main()
{
	cin>>n;
	unsigned total=0;
	int i;
	unsigned use1,use2,result;
	for(i=0;i<n;i++)
	{
		cin>>heap[i];
	}
	if(n==1)
	{
		cout<<heap[0]<<endl;
		return 0;
	}
	if(n==2)
	{
		cout<<heap[0]+heap[1]<<endl;
		return 0;
	}
	for(i=n/2-1;i>=0;i--)
		sitdown(i);
	while(n>2)
	{
		use1=heap[0];
		heap[0]=heap[n-1];
		n--;
		sitdown(0);
		use2=heap[0];
		heap[0]=heap[n-1];
		//n--;
		//sitdown(0);
		result=use1+use2;
		total+=result;
		heap[0]=result;
		//n++;
		sitdown(0);
	}
	total+=heap[0]+heap[1];
	cout<<total<<endl;
	return 0;
}
