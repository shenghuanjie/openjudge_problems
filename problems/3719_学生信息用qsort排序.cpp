b'/*\n3719: \xe5\xad\xa6\xe7\x94\x9f\xe4\xbf\xa1\xe6\x81\xaf\xe7\x94\xa8qsort\xe6\x8e\x92\xe5\xba\x8f\nhttp://bailian.openjudge.cn/practice/3719/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe5\xb0\x86\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe5\xad\xa6\xe7\x94\x9f\xe4\xbf\xa1\xe6\x81\xaf\xe6\x8c\x89\xe5\x90\x8d\xe5\xad\x97\xe6\x8e\x92\xe5\xba\x8f\xe5\x90\x8e\xe8\xbe\x93\xe5\x87\xba\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe6\xaf\x8f\xe4\xb8\xaa\xe5\xad\xa6\xe7\x94\x9f\xe4\xbf\xa1\xe6\x81\xaf\xe6\x98\xaf\xe4\xb8\xa4\xe8\xa1\x8c\xef\xbc\x8c\xe7\xac\xac\xe4\xb8\x80\xe8\xa1\x8c\xe6\x98\xaf\xe5\x90\x8d\xe5\xad\x97\xef\xbc\x8c\xe7\x94\xb1\xe8\x8b\xb1\xe6\x96\x87\xe5\xad\x97\xe6\xaf\x8d\xe5\x92\x8c\xe7\xa9\xba\xe6\xa0\xbc\xe6\x9e\x84\xe6\x88\x90\xef\xbc\x8c\xe6\x9c\x80\xe9\x95\xbf18\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6;\xe7\xac\xac\xe4\xba\x8c\xe8\xa1\x8c\xe6\xa0\xbc\xe5\xbc\x8f\xe4\xb8\xba\xef\xbc\x9a\xe5\xad\xa6\xe5\x8f\xb7,\xe6\x80\xa7\xe5\x88\xab \xe5\xb9\xb4\xe9\xbe\x84\xe5\xad\xa6\xe5\x8f\xb7\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\x8d\xe8\xb6\x85\xe8\xbf\x87100,000\xe7\x9a\x84\xe6\x95\xb4\xe6\x95\xb0; \xe6\x80\xa7\xe5\x88\xab\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xef\xbc\x8c\xe4\xb8\xba\'M\' \xe6\x88\x96\'F\'; \xe5\xb9\xb4\xe9\xbe\x84\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\x8d\xe5\xa4\xa7\xe4\xba\x8e100\xe7\x9a\x84\xe6\x95\xb4\xe6\x95\xb0\xe8\xbe\x93\xe5\x85\xa5\xe6\x95\xb0\xe6\x8d\xae\xe6\x9c\x80\xe5\x90\x8e\xe6\x9c\x89\xe5\x8f\xaf\xe8\x83\xbd\xe6\x9c\x89\xe8\x8b\xa5\xe5\xb9\xb2\xe4\xb8\xaa\xe5\x9b\x9e\xe8\xbd\xa6\xef\xbc\x8c\xe4\xb9\x9f\xe6\x9c\x89\xe5\x8f\xaf\xe8\x83\xbd\xe6\xb2\xa1\xe6\x9c\x89\xe5\xad\xa6\xe7\x94\x9f\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xb6\x85\xe8\xbf\x87100\xe4\xb8\xaa\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe5\x87\xba\xe7\x8e\xb0\xe4\xb8\xa4\xe4\xb8\xaa\xe5\xad\xa6\xe7\x94\x9f\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97\xe4\xbb\x85\xe5\xa4\xa7\xe5\xb0\x8f\xe5\x86\x99\xe6\x9c\x89\xe5\xb7\xae\xe5\x88\xab\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5\n\xe8\xbe\x93\xe5\x87\xba\n\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x92\x8c\xe8\xbe\x93\xe5\x85\xa5\xe6\x95\xb0\xe6\x8d\xae\xe5\x9f\xba\xe6\x9c\xac\xe4\xb8\x80\xe6\xa0\xb7\xef\xbc\x8c\xe5\x94\xaf\xe4\xb8\x80\xe4\xb8\x8d\xe5\x90\x8c\xe5\x9c\xa8\xe4\xba\x8e\xe8\xbe\x93\xe5\x87\xba\xe5\xad\xa6\xe5\x8f\xb7\xe7\x9a\x84\xe6\x97\xb6\xe5\x80\x99\xef\xbc\x8c\xe5\xbf\x85\xe9\xa1\xbb\xe7\x94\xa8\xe5\x89\x8d\xe5\xaf\xbc0\xe8\xa1\xa5\xe8\xb6\xb38\xe4\xbd\x8d\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\nTom Hanks\r\n7863,M 18\r\nMary Lu\r\n18343,F 21\r\nSanta Fe\r\n27863,M 17\r\n\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\nMary Lu\r\n00018343,F 21\r\nSanta Fe\r\n00027863,M 17\r\nTom Hanks\r\n00007863,M 18\r\n\n\xe6\x8f\x90\xe7\xa4\xba\n1. \xe7\x94\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe5\xad\x98\xe6\x94\xbe\xe5\x8d\x95\xe4\xb8\xaa\xe5\xad\xa6\xe7\x94\x9f\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x8c\xe7\x94\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x93\xe6\x9e\x84\xe6\x95\xb0\xe7\xbb\x84\xe5\xad\x98\xe6\x94\xbe\xe5\x85\xa8\xe9\x83\xa8\xe5\xad\xa6\xe7\x94\x9f\xe4\xbf\xa1\xe6\x81\xaf\xef\xbc\x8c\xe7\x84\xb6\xe5\x90\x8e\xe5\xb0\x86\xe8\xaf\xa5\xe7\xbb\x93\xe6\x9e\x84\xe6\x95\xb0\xe7\xbb\x84\xe6\x8e\x92\xe5\xba\x8f2. \xe7\x94\xa8 gets\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xaf\xbb\xe5\x85\xa5\xe4\xb8\x80\xe8\xa1\x8c3. \xe7\x94\xa8 stricmp \xe5\x87\xbd\xe6\x95\xb0\xe4\xbd\x9c\xe5\xa4\xa7\xe5\xb0\x8f\xe5\x86\x99\xe6\x97\xa0\xe5\x85\xb3\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\xaf\x94\xe8\xbe\x83\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe5\x9c\xa8POJ\xe4\xb8\x8a\xe4\xba\xa4\xef\xbc\x8c\xe5\x90\x8d\xe5\xad\x97\xe8\xa6\x81\xe6\x94\xb9\xe6\x88\x90 _stricmp4. \xe8\xa1\xa5\xe5\x89\x8d\xe5\xaf\xbc0\xe7\x9a\x84\xe6\x96\xb9\xe6\xb3\x95\xef\xbc\x9aprintf("%04d",34) \xe4\xbc\x9a\xe8\xbe\x93\xe5\x87\xba 0034, printf("%05d",34) \xe4\xbc\x9a\xe8\xbe\x93\xe5\x87\xba 000345. \xe5\xa6\x82\xe6\x9e\x9c\xe7\x94\xa8scanf\xe8\xaf\xbb\xe5\x85\xa5\xe4\xb8\x80\xe8\xa1\x8c\xe7\x9a\x84\xe6\x95\xb0\xe6\x8d\xae\xe5\x90\x8e\xef\xbc\x8c\xe7\xb4\xa7\xe6\x8e\xa5\xe7\x9d\x80\xe7\x94\xa8gets\xe8\xaf\xbb\xe4\xb8\x8b\xe4\xb8\x80\xe8\xa1\x8c\xef\xbc\x8c\xe9\x82\xa3\xe4\xb9\x88\xe5\xbe\x88\xe5\x8f\xaf\xe8\x83\xbdgets\xe8\xaf\xbb\xe5\x85\xa5\xe7\x9a\x84\xe4\xb8\x8d\xe6\x98\xaf\xe4\xb8\x8b\xe4\xb8\x80\xe8\xa1\x8c\xe7\x9a\x84\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x8c\xe8\x80\x8c\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe7\xa9\xba\xe8\xa1\x8c\xef\xbc\x88\xe5\x88\x9a\xe5\x88\x9a\xe7\x94\xa8sanf\xe8\xaf\xbb\xe7\x9a\x84\xe9\x82\xa3\xe4\xb8\x80\xe8\xa1\x8c\xe7\x9a\x84\xe6\x9c\xab\xe5\xb0\xbe\xe7\x9a\x84\xe5\x9b\x9e\xe8\xbd\xa6\xe5\xaf\xbc\xe8\x87\xb4\xef\xbc\x89\n\xe6\x9d\xa5\xe6\xba\x90\nGuo Wei\n\n*/\n\n#include<iostream>\r\n#include<stdio.h>\r\n#include<cmath>\r\nusing namespace std;\r\nstruct student\r\n{\r\n char name[20];\r\n int code;\r\n char gender;\r\n int age;\r\n};\r\n\r\nint compare(const void *elem1,const void *elem2)\r\n{\r\n const char *sname1=((student *)elem1)->name;\r\n const char *sname2=((student *)elem2)->name;\r\n return _stricmp(sname1,sname2);\r\n}\r\n\r\nint main()\r\n{\r\n student namelist[100]={};\r\n int step=0;\r\n while(gets(namelist[step].name))\r\n {\r\n  scanf("%d,%c %d",&namelist[step].code,&namelist[step].gender,&namelist[step].age);\r\n  cin.get();\r\n  step++;\r\n }\r\n \r\n if(namelist[step-1].name[0]==0)\r\n    step--;\r\n qsort(namelist,step,sizeof(student),compare);\r\n int i=0;\r\n for(;i<step-1;i++)\r\n {\r\n  printf("%s\\n",namelist[i].name);\r\n  printf("%08d,%c %d\\n",namelist[i].code,namelist[i].gender,namelist[i].age);\r\n }\r\n printf("%s\\n",namelist[i].name);\r\n    printf("%08d,%c %d",namelist[i].code,namelist[i].gender,namelist[i].age);\r\n return 0;\r\n} '
