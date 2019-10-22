/*
2856: 计算邮资
http://bailian.openjudge.cn/practice/2856/


描述
计算邮资：用户输入：邮件的重量，以及是否加快计算规则：重量在1克以内(包括1克), 基本费0.8元。超过1克的部分，按照0.5元/克的比例加收超重费。如果用户选择加快，多收2元。
输入
重量 double weight是否加快 char exp（可以取'y' or 'n'）
输出
邮资（注：只需要输出数字，例如1.3元，只需要输出1.3）
样例输入
1 y
2 n
3 n
样例输出
2.8
1.3
1.8
提示
注：其它注意事项请参考上次作业说明（problem2854）需要注意的几点：1. Submit时，注意选择“Language”为“C++”（不要使用默认的“GCC”），否则会有“Compile Error”。	注：当然，如果的确是使用其它语言实现，可以选择你使用的语言。发现有同学使用pascal实现，而且通过编译，结果正确。2. 写程序注意的地方。	a) 不要输出任何与结果无关的字符串。例如，在程序中加入“cout<<"result is"”，这样会导致结果错误。JudgeOnline是根据输出字符串匹配来判断结果正确与否的。只需要输出运行结果，不需要任何提示信息。	b) 请使用如下格式提交程序（和Problem 2854助教给出的一样）：举例说明	C++:	#include <iostream>	using namespace std;	int main()	{		int x,y; //变量定义，此处假设需要定义两个变量，均定义为整型		while(cin>>x>>y) 		{ 		 	你对一组输入的一次处理过程代码		}		return 0;	}		C:	#include <iostream>	using namespace std;	int main()	{		int x,y; //变量定义，此处假设需要定义两个变量，均定义为整型		while(scanf(%x %y",&x,&y)!=EOF) 		{ 	  		你对一组输入的一次处理过程代码		}		return 0;	}	注意：考虑以下几点，然后直接套用模版就行了：		i) 变量定义。		ii) 有几个变量需要输入，在while中cin相应的变量。		iii)	开始考虑主程序代码，在“{}”中写一次处理过程的代码即可。

*/

#include<iostream>
using namespace std;
int main()
{
	double a=0;
	double weight;
	char exp;
while(cin>>weight>>exp)
{
	if(weight>1)
	{
		a=0.8+(weight-1)*0.5;
	}
	else
	{
		a=0.8;
	}
    if(exp=='y')
		a=a+2;
		cout<<a<<endl;
	
} 
	return 0;
}
