/*
2737: 大整数除法
http://bailian.openjudge.cn/practice/2737/


描述
求两个大的正整数相除的商。
输入
第1行是被除数，第2行是除数。每个数均不超过100位。
输出
一行，相应的商的整数部分
样例输入
2376
24

样例输出
99

*/

#include <string>
#include <iostream>
using namespace std;

#define MAX 200

int num1[MAX+10];
int num2[MAX+10];
unsigned int total[MAX+10];

int Sub(int a,int b)
{
    if (b>=a)
    {
        if (a==b)
            return 0;
        else
            return -1;
    }
    int i = 0;
    for (;a>b;i++)
    {
        b++;
    }
    return i;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        memset(num1,0,sizeof(num1));
        memset(num2,0,sizeof(num2));
        memset(total,0,sizeof(total));
        string str1,str2;
        cin>>str1>>str2;
        int len,index;
        len = str1.length();
        index = 0;
		int i;
        for (i=len-1;i>=0;i--)
        {
            num1[index++] = str1[i]-'0';
        }
        len = str2.length();
        index = 0;
        for (i=len-1;i>=0;i--)
        {
            num2[index++] = str2[i]-'0';
        }

        if (str2.length()>str1.length())
        {
            cout<<"0"<<endl;
            continue;
        }
        int len1,len2,length;
        len1 = str1.length();
        len2 = str2.length();
        length = Sub(len1,len2);
        while (1)
        {
            for (i=len1-1;i>=0;i--)
            {
                if (num1[i])
                {
                    len1 = i+1;
                    break;
                }
            }
            len = Sub(len1,len2);

            int index = 0;
            bool flag = false;
            for (i=len1-1;i>=len;i--)
            {
                if (num1[i]<num2[i-len])
                {
                    flag = true;
                    break;
                }
                if (num1[i]>num2[i-len])
                {
                    break;
                }

            }
            if (flag)
                len--;
            if (len==-1)
                break;
            while (++index)
            {
                bool flag = false;
                for (i=len1-1;i>=len;i--)
                {
                    if (num1[i]<num2[i-len])
                    {
                        flag = true;
                        break;
                    }
                    if (num1[i]>num2[i-len])
                    {
                        break;
                    }

                }
                if (flag)
                {
                    index--;
                    break;
                }
                for (i=len;i<len1;i++)
                {
                    num1[i] -= num2[i-len];
                    if (num1[i]<0)
                    {
                        num1[i] += 10;
                        num1[i+1]--;
                    }
                }
            }
            if (index==0)
                break;
            else
                total[len] = index;
        }
        bool flag = false;
        for (i=length;i>=0;i--)
        {
            if (flag||total[i])
            {
                flag = true;
                cout<<total[i];
            }
        }
        if (!flag)
        {
            cout<<"0";
        }
        cout<<endl;
    }
	return 0;
}
