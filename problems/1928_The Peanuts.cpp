b'/*\n1928: The Peanuts\nhttp://bailian.openjudge.cn/practice/1928/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\nMr. Robinson and his pet monkey Dodo love peanuts very much.  One day while they were having a walk on a country road, Dodo found a sign by the road, pasted with a small piece of paper, saying "Free Peanuts Here! " You can imagine how happy Mr. Robinson and Dodo were.There was a peanut field on one side of the road.  The peanuts were planted on the intersecting points of a grid as shown in Figure-1.  At each point, there are either zero or more peanuts. For example, in Figure-2, only four points have more than zero peanuts, and the numbers are 15, 13, 9 and 7 respectively.  One could only walk from an intersection point to one of the four adjacent points, taking one unit of time. It also takes one unit of time to do one of the following:  to walk from the road to the field, to walk from the field to the road, or pick peanuts on a point.According to Mr. Robinson\'s requirement, Dodo should go to the plant with the most peanuts  first. After picking them, he should then go to the next plant with the most peanuts, and so on.  Mr. Robinson was not so patient as to wait for Dodo to pick all the peanuts and he asked Dodo to return to the road in a certain period of time. For example, Dodo could pick 37 peanuts within 21 units of time in the situation given in Figure-2.Your task is, given the distribution of the peanuts and a certain period of time, tell how many peanuts Dodo could pick.  You can assume that each point contains a different amount of peanuts, except 0, which may appear more than once.\n\xe8\xbe\x93\xe5\x85\xa5\nThe first line of input contains the test case number T (1 <= T <= 20). For each test case, the first line contains three integers, M, N and K (1 <= M, N <= 50, 0 <= K <= 20000).  Each of the following M lines contain N integers. None of the integers will exceed 3000.  (M * N) describes the peanut field. The j-th integer X in the i-th line means there are X peanuts on the point (i, j). K means Dodo must return to the road in K units of time.\n\xe8\xbe\x93\xe5\x87\xba\nFor each test case, print one line containing the amount of peanuts Dodo can pick.\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n2\r\n6 7 21\r\n0 0 0 0 0 0 0\r\n0 0 0 0 13 0 0\r\n0 0 0 0 0 0 7\r\n0 15 0 0 0 0 0\r\n0 0 0 9 0 0 0\r\n0 0 0 0 0 0 0\r\n6 7 20\r\n0 0 0 0 0 0 0\r\n0 0 0 0 13 0 0\r\n0 0 0 0 0 0 7\r\n0 15 0 0 0 0 0\r\n0 0 0 9 0 0 0\r\n0 0 0 0 0 0 0\r\n\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n37\r\n28\r\n\n\xe6\x9d\xa5\xe6\xba\x90\nBeijing 2004 Preliminary@POJ\n\n*/\n\n#include<iostream>\n#include<cmath>\n#include<stdlib.h>\nusing namespace std;\nstruct w\n{\n\tint x;\n\tint y;\n\tint peanut;\n}field[3000];\nint cmp(const void *a,const void *b)\n{\n\tw *x,*y;\n\tx=(w*)a;\n\ty=(w*)b;\n\tif(x->peanut>y->peanut)\n\t\treturn -1;\n\tif(x->peanut<y->peanut)\n\t\treturn 1;\n\treturn 0;\n}\nint main()\n{\n\tint t;\n\tcin>>t;\n\tint m,n,k;\n\tint i,j;\n\tint temp;\n\tfor(;t>0;t--)\n\t{\n\t\tcin>>m>>n>>k;\n\t\ttemp=0;\n\t\tfor(i=1;i<=m;i++)\n\t\t{\n\t\t\tfor(j=1;j<=n;j++)\n\t\t\t{\n\t\t\t\tcin>>field[temp].peanut;\n\t\t\t\tfield[temp].x=i;\n\t\t\t\tfield[temp].y=j;\n\t\t\t\ttemp++;\n\t\t\t}\n\t\t}\n\t\tint result=0;\n\t\tqsort(field,temp,sizeof(w),cmp);\n\t\tint tempx=0,tempy=field[0].y;\n\t\tint use;\n\t\tfor(i=0;i<temp;i++)\n\t\t{\n\t\t\tif(field[i].peanut==0)break;\n\t\t\tuse=fabs((double)tempx-field[i].x)+fabs((double)tempy-field[i].y)+1+field[i].x;\n\t\t\tif(use<=k)\n\t\t\t{\n\t\t\t\tresult+=field[i].peanut;\n\t\t\t\tk-=use;\n\t\t\t\tk+=field[i].x;\n\t\t\t\ttempx=field[i].x;\n\t\t\t\ttempy=field[i].y;\n\t\t\t}\n\t\t\telse\n\t\t\t{\n\t\t\t\tbreak;\n\t\t\t}\n\t\t}\n\t\tcout<<result<<endl;\n\t}\n\treturn 0;\n}'
