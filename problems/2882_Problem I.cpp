b'/*\n2882: Problem I\nhttp://bailian.openjudge.cn/practice/2882/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe8\xbe\x93\xe5\x85\xa5\xe6\x95\xb4\xe6\x95\xb0a\xe5\x92\x8cb\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9ca\xe8\x83\xbd\xe8\xa2\xabb\xe6\x95\xb4\xe9\x99\xa4\xef\xbc\x8c\xe5\xb0\xb1\xe8\xbe\x93\xe5\x87\xba\xe7\xae\x97\xe5\xbc\x8f\xe7\x9a\x84\xe5\x95\x86\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe8\xbe\x93\xe5\x87\xba\xe6\x95\xb4\xe6\x95\xb0\xe5\x95\x86\xe5\x92\x8c\xe4\xbd\x99\xe6\x95\xb0\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9cb=0\xef\xbc\x8c\xe8\xbe\x93\xe5\x87\xbaerror\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe6\x95\xb4\xe6\x95\xb0a\xe5\x92\x8c\xe6\x95\xb4\xe6\x95\xb0b\n\xe8\xbe\x93\xe5\x87\xba\n\xe5\x95\x86\xe6\x88\x96\xe8\x80\x85\xe5\x95\x86\xe5\x92\x8c\xe4\xbd\x99\xe6\x95\xb0\xe6\x88\x96\xe8\x80\x85error\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n100 10\r\n75 20\r\n1 0\r\n\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n10\r\n3 15\r\nerror\r\n\n\xe6\x8f\x90\xe7\xa4\xba\n1.\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xe6\x9c\x89\xe5\xa4\x9a\xe7\xbb\x84\xef\xbc\x8c\xe9\x87\x87\xe7\x94\xa8\xe5\xa6\x82\xe4\xb8\x8b\xe7\x9a\x84\xe6\xa0\xbc\xe5\xbc\x8f\xef\xbc\x9awhile(cin>>a>>b){\t\t// calculate\t\t// output}2.\xe6\xb3\xa8\xe6\x84\x8fACM\xe9\xa2\x98\xe7\x9b\xae\xe7\x89\xb9\xe7\x82\xb9\xef\xbc\x8c\xe4\xb8\x8d\xe8\xa6\x81\xe8\xbe\x93\xe5\x87\xba\xe9\xa2\x9d\xe5\xa4\x96\xe4\xbf\xa1\xe6\x81\xaf\xe3\x80\x82\n\n*/\n\n#include<iostream>\r\nusing namespace std;\r\nint main()\r\n{\r\n\tint a,b,quo,rem;\r\nwhile(cin>>a>>b)\r\n{\r\n\tif(b==0)\r\n\t\tcout<<"error"<<endl;\r\n\telse\r\n\t{\r\n\t\trem=a%b;\r\n\t\tquo=(a-rem)/b;\r\n\tif(rem==0)\r\n\t\tcout<<quo<<endl;\r\n\tif(rem!=0)\r\n\t\tcout<<quo<<" "<<rem<<endl;\r\n\t}\r\n\t} \r\n\treturn 0;\r\n}'