b'/*\n2976: All in All\nhttp://bailian.openjudge.cn/practice/2976/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe7\xbb\x99\xe5\xae\x9a\xe4\xb8\xa4\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2s\xe5\x92\x8ct\xef\xbc\x8c\xe8\xaf\xb7\xe5\x88\xa4\xe6\x96\xads\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaft\xe7\x9a\x84\xe5\xad\x90\xe5\xba\x8f\xe5\x88\x97\xe3\x80\x82\xe5\x8d\xb3\xe4\xbb\x8et\xe4\xb8\xad\xe5\x88\xa0\xe9\x99\xa4\xe4\xb8\x80\xe4\xba\x9b\xe5\xad\x97\xe7\xac\xa6\xef\xbc\x8c\xe5\xb0\x86\xe5\x89\xa9\xe4\xbd\x99\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe8\xbf\x9e\xe6\x8e\xa5\xe8\xb5\xb7\xe6\x9d\xa5\xef\xbc\x8c\xe5\x8d\xb3\xe5\x8f\xaf\xe8\x8e\xb7\xe5\xbe\x97s\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe5\x8c\x85\xe6\x8b\xac\xe8\x8b\xa5\xe5\xb9\xb2\xe4\xb8\xaa\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82\xe6\xaf\x8f\xe4\xb8\xaa\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xe7\x94\xb1\xe4\xb8\xa4\xe4\xb8\xaaASCII\xe7\xa0\x81\xe7\x9a\x84\xe6\x95\xb0\xe5\xad\x97\xe5\x92\x8c\xe5\xad\x97\xe6\xaf\x8d\xe4\xb8\xb2s\xe5\x92\x8ct\xe7\xbb\x84\xe6\x88\x90\xef\xbc\x8cs\xe5\x92\x8ct\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\xe4\xb8\x8d\xe8\xb6\x85\xe8\xbf\x87100000\xe3\x80\x82\n\xe8\xbe\x93\xe5\x87\xba\n\xe5\xaf\xb9\xe6\xaf\x8f\xe4\xb8\xaa\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9cs\xe6\x98\xaft\xe7\x9a\x84\xe5\xad\x90\xe5\xba\x8f\xe5\x88\x97\xe5\x88\x99\xe8\xbe\x93\xe5\x87\xba\xe2\x80\x9cYes\xe2\x80\x9d\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe8\xbe\x93\xe5\x87\xba\xe2\x80\x9cNo\xe2\x80\x9d\xe3\x80\x82\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\nsequence subsequence\r\nperson compression\r\nVERDI vivaVittorioEmanueleReDiItalia\r\ncaseDoesMatter CaseDoesMatter\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\nYes\r\nNo\r\nYes\r\nNo\n\xe6\x9d\xa5\xe6\xba\x90\nUlm Local 2002, POJ 1936, \xe7\xa8\x8b\xe5\xba\x8f\xe8\xae\xbe\xe8\xae\xa1\xe5\xae\x9e\xe4\xb9\xa02007\n\n*/\n\n#include<iostream>\nusing namespace std;\nint main()\n{\n\tchar s[100000]={\'\\0\'},t[100000]={\'\\0\'};\n\tunsigned i,j,ls,lt;\n\twhile(cin>>s>>t)\n\t{\n\t\t\ti=0;j=0;\n\t\t\tls=strlen(s);\n\t\t\tlt=strlen(t);\n\t\t\tfor(i=0;i<lt;i++)\n\t\t\t{\n\t\t\t\tif((j<ls)&&(t[i]==s[j]))\n\t\t\t\tj++;\n\t\t\t}\n\t\t\tif(j==ls)\n\t\t\t\tcout<<"Yes"<<endl;\n\t\t\tif(j<ls)\n\t\t\t\tcout<<"No"<<endl;\n\t}\n\treturn 0;\n}'
