b'/*\n2723: \xe4\xb8\x8d\xe5\x90\x89\xe5\x88\xa9\xe6\x97\xa5\xe6\x9c\x9f\nhttp://bailian.openjudge.cn/practice/2723/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe5\x9c\xa8\xe5\x9b\xbd\xe5\xa4\x96\xef\xbc\x8c\xe6\xaf\x8f\xe6\x9c\x88\xe7\x9a\x8413\xe5\x8f\xb7\xe5\x92\x8c\xe6\xaf\x8f\xe5\x91\xa8\xe7\x9a\x84\xe6\x98\x9f\xe6\x9c\x9f5\xe9\x83\xbd\xe6\x98\xaf\xe4\xb8\x8d\xe5\x90\x89\xe5\x88\xa9\xe7\x9a\x84\xe3\x80\x82\xe7\x89\xb9\xe5\x88\xab\xe6\x98\xaf\xe5\xbd\x9313\xe5\x8f\xb7\xe9\x82\xa3\xe5\xa4\xa9\xe6\x81\xb0\xe5\xa5\xbd\xe6\x98\xaf\xe6\x98\x9f\xe6\x9c\x9f5\xe6\x97\xb6\xef\xbc\x8c\xe6\x9b\xb4\xe4\xb8\x8d\xe5\x90\x89\xe5\x88\xa9\xe3\x80\x82\xe5\xb7\xb2\xe7\x9f\xa5\xe6\x9f\x90\xe5\xb9\xb4\xe7\x9a\x84\xe4\xb8\x80\xe6\x9c\x88\xe4\xb8\x80\xe6\x97\xa5\xe6\x98\xaf\xe6\x98\x9f\xe6\x9c\x9fw\xef\xbc\x8c\xe5\xb9\xb6\xe4\xb8\x94\xe8\xbf\x99\xe4\xb8\x80\xe5\xb9\xb4\xe4\xb8\x80\xe5\xae\x9a\xe4\xb8\x8d\xe6\x98\xaf\xe9\x97\xb0\xe5\xb9\xb4\xef\xbc\x8c\xe6\xb1\x82\xe5\x87\xba\xe8\xbf\x99\xe4\xb8\x80\xe5\xb9\xb4\xe6\x89\x80\xe6\x9c\x8913\xe5\x8f\xb7\xe9\x82\xa3\xe5\xa4\xa9\xe6\x98\xaf\xe6\x98\x9f\xe6\x9c\x9f5\xe7\x9a\x84\xe6\x9c\x88\xe4\xbb\xbd\xef\xbc\x8c\xe6\x8c\x89\xe4\xbb\x8e\xe5\xb0\x8f\xe5\x88\xb0\xe5\xa4\xa7\xe7\x9a\x84\xe9\xa1\xba\xe5\xba\x8f\xe8\xbe\x93\xe5\x87\xba\xe6\x9c\x88\xe4\xbb\xbd\xe6\x95\xb0\xe5\xad\x97\xe3\x80\x82\xef\xbc\x88w=1..7\xef\xbc\x89\n\xe8\xbe\x93\xe5\x85\xa5\n\xe8\xbe\x93\xe5\x85\xa5\xe6\x9c\x89\xe4\xb8\x80\xe8\xa1\x8c\xef\xbc\x8c\xe5\x8d\xb3\xe4\xb8\x80\xe6\x9c\x88\xe4\xb8\x80\xe6\x97\xa5\xe6\x98\x9f\xe6\x9c\x9f\xe5\x87\xa0\xef\xbc\x88w\xef\xbc\x89\xe3\x80\x82\xef\xbc\x881 <= w <= 7\xef\xbc\x89\n\xe8\xbe\x93\xe5\x87\xba\n\xe8\xbe\x93\xe5\x87\xba\xe6\x9c\x89\xe4\xb8\x80\xe5\x88\xb0\xe5\xa4\x9a\xe8\xa1\x8c\xef\xbc\x8c\xe6\xaf\x8f\xe8\xa1\x8c\xe4\xb8\x80\xe4\xb8\xaa\xe6\x9c\x88\xe4\xbb\xbd\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe8\xaf\xa5\xe6\x9c\x88\xe7\x9a\x8413\xe6\x97\xa5\xe6\x98\xaf\xe6\x98\x9f\xe6\x9c\x9f\xe4\xba\x94\xe3\x80\x82\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n7\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n1\r\n10\n\xe6\x8f\x90\xe7\xa4\xba\n1\xe3\x80\x813\xe3\x80\x815\xe3\x80\x817\xe3\x80\x818\xe3\x80\x8110\xe3\x80\x8112\xe6\x9c\x88\xe5\x90\x84\xe6\x9c\x8931\xe5\xa4\xa94\xe3\x80\x816\xe3\x80\x819\xe3\x80\x8111\xe6\x9c\x88\xe5\x90\x84\xe6\x9c\x8930\xe5\xa4\xa92\xe6\x9c\x88\xe6\x9c\x8928\xe5\xa4\xa9\n\xe6\x9d\xa5\xe6\xba\x90\n\xe8\xae\xa1\xe7\xae\x97\xe6\xa6\x82\xe8\xae\xba\xe5\x8c\x96\xe5\xad\xa6\xe5\xad\xa6\xe9\x99\xa2\xe6\x9c\x9f\xe6\x9c\xab\xe8\x80\x83\xe8\xaf\x95\n\n*/\n\n#include<iostream>\nusing namespace std;\nint main()\n{\n\tint month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};\n\tint w;\n\tcin>>w;\n\tint x=w;\n\tfor(int i=0;i<12;i++)\n\t{\n\t\tx=(x+month[i])%7;\n\t\tif((x+12)%7==5)\n\t\t\tcout<<i+1<<endl;\n\t}\n\treturn 0;\n}'
