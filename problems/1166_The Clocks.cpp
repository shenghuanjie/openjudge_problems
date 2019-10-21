b'/*\n1166: The Clocks\nhttp://bailian.openjudge.cn/practice/1166/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n|-------|    |-------|    |-------||       |    |       |    |   |   ||---O   |    |---O   |    |   O   ||       |    |       |    |       ||-------|    |-------|    |-------|    A            B            C    |-------|    |-------|    |-------||       |    |       |    |       ||   O   |    |   O   |    |   O   ||   |   |    |   |   |    |   |   ||-------|    |-------|    |-------|    D            E            F    |-------|    |-------|    |-------||       |    |       |    |       ||   O   |    |   O---|    |   O   ||   |   |    |       |    |   |   ||-------|    |-------|    |-------|    G            H            I    (Figure 1)There are nine clocks in a 3*3 array (figure 1). The goal is to return all the dials to 12 o\'clock with as few moves as possible. There are nine different allowed ways to turn the dials on the clocks. Each such way is called a move. Select for each move a number 1 to 9. That number will turn the dials 90\' (degrees) clockwise on those clocks which are affected according to figure 2 below. Move   Affected clocks  1         ABDE 2         ABC 3         BCEF 4         ADG 5         BDEFH 6         CFI 7         DEGH 8         GHI 9         EFHI       (Figure 2)\n\xe8\xbe\x93\xe5\x85\xa5\nYour program is to read from standard input. Nine numbers give the start positions of the dials. 0=12 o\'clock, 1=3 o\'clock, 2=6 o\'clock, 3=9 o\'clock.\n\xe8\xbe\x93\xe5\x87\xba\nYour program is to write to standard output. Output a shortest sorted sequence of moves (numbers), which returns all the dials to 12 o\'clock. You are convinced that the answer is unique.\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n3 3 0\r\n2 2 2\r\n2 1 2\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n4 5 8 9\n\xe6\x9d\xa5\xe6\xba\x90\nIOI 1994\n\n*/\n\n#include<iostream>\nusing namespace std;\n\nint main()\n{\n\tint a[10],b[10],c[10]={0,0,0,0,0,0,0,0,0,0},i;//\xe5\xae\x9a\xe4\xb9\x89a\xe5\xad\x98\xe5\x82\xa8\xe9\x92\x9f\xe8\xa1\xa8\xe7\x9a\x84\xe5\x88\x9d\xe5\xa7\x8b\xe7\x8a\xb6\xe5\x86\xb5\xef\xbc\x8cb\xe5\xad\x98\xe5\x82\xa89\xe7\xa7\x8d\xe5\x8f\x98\xe6\x8d\xa2\xe7\x94\xa8\xe5\x88\xb0\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\xef\xbc\x8cc\xe5\xad\x98\xe5\x82\xa8\xe5\x8f\x98\xe6\x8d\xa2\xe5\x90\x8e\xe9\x92\x9f\xe8\xa1\xa8\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81\n\tfor(i=1;i<=9;i++)\n\t{\n\t\t cin>>a[i];\n\t\t  \n\t}\n\t\n\tfor(b[1]=0;b[1]<=3;b[1]++)\n\t\tfor(b[2]=0;b[2]<=3;b[2]++)\n\t\t\tfor(b[3]=0;b[3]<=3;b[3]++)\n\t\t\t\tfor(b[4]=0;b[4]<=3;b[4]++)\n\t\t\t\t\tfor(b[5]=0;b[5]<=3;b[5]++)\n\t\t\t\t\t\tfor(b[6]=0;b[6]<=3;b[6]++)\n\t\t\t\t\t\t\tfor(b[7]=0;b[7]<=3;b[7]++)\n\t\t\t\t\t\t\t\tfor(b[8]=0;b[8]<=3;b[8]++)\n\t\t\t\t\t\t\t\t\tfor(b[9]=0;b[9]<=3;b[9]++)//9\xe9\x87\x8d\xe5\xbe\xaa\xe7\x8e\xaf\xe6\x9e\x9a\xe4\xb8\xbe\xe5\x8f\x98\xe6\x8d\xa2\xe7\x94\xa8\xe5\x88\xb0\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\xef\xbc\x8c\xe6\x9c\x80\xe5\xa4\x9a\xe4\xb8\x8d\xe8\xb6\x85\xe8\xbf\x873\xe6\xac\xa1\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe4\xb8\x8e\xe4\xb8\x8d\xe5\x8f\x98\xe6\x8d\xa2\xe4\xb8\x80\xe6\xa0\xb7\xef\xbc\x8c\n\t\t\t\t\t\t\t\t\t{\n\t\t\t\t\t\t\t\t\t\t//\xe4\xb8\x8b\xe8\xbe\xb9\xe5\x81\x9a\xe5\x8f\x98\xe6\x8d\xa2\n\t\t\t\t\t\t\t\t\t\tc[1]=(a[1]+b[1]+b[2]+b[4])%4;\n\t\t\t\t\t\t\t\t\t\tc[2]=(a[2]+b[1]+b[2]+b[3]+b[5])%4;\n\t\t\t\t\t\t\t\t\t\tc[3]=(a[3]+b[2]+b[3]+b[6])%4;\n\t\t\t\t\t\t\t\t\t\tc[4]=(a[4]+b[1]+b[4]+b[5]+b[7])%4;\n\t\t\t\t\t\t\t\t\t\tc[5]=(a[5]+b[1]+b[3]+b[5]+b[7]+b[9])%4;\n\t\t\t\t\t\t\t\t\t\tc[6]=(a[6]+b[3]+b[5]+b[6]+b[9])%4;\n\t\t\t\t\t\t\t\t\t\tc[7]=(a[7]+b[4]+b[7]+b[8])%4;\n\t\t\t\t\t\t\t\t\t\tc[8]=(a[8]+b[5]+b[7]+b[8]+b[9])%4;\n\t\t\t\t\t\t\t\t\t\tc[9]=(a[9]+b[6]+b[8]+b[9])%4;\n\t\t\t\t\t\t\t\t\t\tif((c[1]+c[2]+c[3]+c[4]+c[5]+c[6]+c[7]+c[8]+c[9])==0)//\xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe6\x89\xbe\xe5\x88\xb0\xe8\xa7\xa3\n\t\t\t\t\t\t\t\t\t\t{\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[1]; i++) cout<<"1 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[2]; i++) cout<<"2 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[3]; i++) cout<<"3 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[4]; i++) cout<<"4 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[5]; i++) cout<<"5 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[6]; i++) cout<<"6 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[7]; i++) cout<<"7 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[8]; i++) cout<<"8 ";\n\t\t\t\t\t\t\t\t\t\t\tfor (i=0; i<b[9]; i++) cout<<"9 ";\n\t\t\t\t\t\t\t\t\t\t\treturn 0;\n\t\t\t\t\t\t\t\t\t\t}\n\t\t\t\t\t\t\t\t\t}\n\treturn 0;\n}'