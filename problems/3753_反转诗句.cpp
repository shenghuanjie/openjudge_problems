b'/*\n3753: \xe5\x8f\x8d\xe8\xbd\xac\xe8\xaf\x97\xe5\x8f\xa5\nhttp://bailian.openjudge.cn/practice/3753/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe4\xbd\xa0\xe6\x89\x8b\xe4\xb8\xad\xe6\x9c\x89\xe4\xba\x9b\xe4\xbb\x8e\xe5\x8f\xb3\xe5\x90\x91\xe5\xb7\xa6\xe8\xaf\xbb\xe7\x9a\x84\xe8\xaf\x97\xe5\x8f\xa5\xef\xbc\x8c\xe6\xaf\x94\xe5\xa6\x82\xe2\x80\x9crose red red a like is luve my O\xe2\x80\x9d\xe3\x80\x82\xe7\x8e\xb0\xe5\x9c\xa8\xe4\xb8\xba\xe4\xba\x86\xe9\x98\x85\xe8\xaf\xbb\xe8\xbf\x99\xe4\xba\x9b\xe7\xbe\x8e\xe5\xa6\x99\xe7\x9a\x84\xe8\xaf\x97\xe5\x8f\xa5\xef\xbc\x8c\xe4\xbd\xa0\xe8\xa6\x81\xe6\x8a\x8a\xe8\xbf\x99\xe4\xba\x9b\xe8\xaf\xad\xe5\x8f\xa5\xe5\x8f\x8d\xe8\xbd\xac\xe6\x88\x90\xe6\xad\xa3\xe5\xb8\xb8\xe7\x9a\x84\xe4\xbb\x8e\xe5\xb7\xa6\xe5\x88\xb0\xe5\x8f\xb3\xef\xbc\x8c\xe5\x8d\xb3\xe2\x80\x9cO my luve is like a red red rose\xe2\x80\x9d\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe6\xaf\x8f\xe4\xb8\x80\xe8\xa1\x8c\xe4\xb8\xba\xe5\x8e\x9f\xe6\x9d\xa5\xe4\xbb\x8e\xe5\x8f\xb3\xe5\x90\x91\xe5\xb7\xa6\xe8\xaf\xbb\xe7\x9a\x84\xe8\xaf\x97\xe5\x8f\xa5S\xe3\x80\x82\xe8\xaf\xa5\xe8\xaf\x97\xe5\x8f\xa5\xe4\xb8\xad\xe4\xb8\x8d\xe5\x8c\x85\xe5\x90\xab\xe4\xbb\xbb\xe4\xbd\x95\xe6\xa0\x87\xe7\x82\xb9\xe7\xac\xa6\xe5\x8f\xb7\xef\xbc\x8c\xe5\x8d\x95\xe8\xaf\x8d\xe9\x97\xb4\xe4\xbb\xa5\xe7\xa9\xba\xe6\xa0\xbc\xe9\x9a\x94\xe5\xbc\x80\xe3\x80\x82\xe6\xaf\x8f\xe6\x9d\xa1\xe8\xaf\x97\xe5\x8f\xa5\xe6\x9c\x80\xe5\xa4\x9a\xe5\x8c\x85\xe5\x90\xab 50\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\xef\xbc\x8c\xe6\xaf\x8f\xe4\xb8\xaa\xe5\x8d\x95\xe8\xaf\x8d\xe6\x9c\x80\xe5\xa4\x9a\xe5\x8c\x85\xe5\x90\xab50\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe3\x80\x82\n\xe8\xbe\x93\xe5\x87\xba\n\xe6\xaf\x8f\xe4\xb8\x80\xe8\xa1\x8c\xe4\xb8\xba\xe6\xad\xa3\xe5\xb8\xb8\xe7\x9a\x84\xe4\xbb\x8e\xe5\xb7\xa6\xe5\x88\xb0\xe5\x8f\xb3\xe8\xaf\xbb\xe7\x9a\x84\xe8\xaf\x97\xe5\x8f\xa5\xe3\x80\x82\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\nrose red red a like is luve my O\r\nJune in sprung newly That\'s\r\nmelodie the like is luve my O\r\ntune in played sweetly That\'s\r\n\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\nO my luve is like a red red rose\r\nThat\'s newly sprung in June\r\nO my luve is like the melodie\r\nThat\'s sweetly played in tune\r\n\n\n*/\n\n#include<iostream>\nusing namespace std;\nchar str[3010];\nvoid find(int n)\n{\n\tint i=n-1;\n\tchar *p;\n\twhile(i>=0)\n\t{\n\t\tfor(;i>=0&&str[i]!=\' \';i--);\n\t\tp=&str[i+1];\n\t\tcout<<p<<" ";\n\t\tstr[i]=0;\n\t}\n\tcout<<endl;\n}\nint main()\n{\n\twhile(cin.getline(str,3000))\n\t{\n\t\tfind(strlen(str));\n\t}\n\treturn 0;\n}'
