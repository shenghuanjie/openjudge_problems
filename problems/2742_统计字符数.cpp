b'/*\n2742: \xe7\xbb\x9f\xe8\xae\xa1\xe5\xad\x97\xe7\xac\xa6\xe6\x95\xb0\nhttp://bailian.openjudge.cn/practice/2742/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe5\x88\xa4\xe6\x96\xad\xe4\xb8\x80\xe4\xb8\xaa\xe7\x94\xb1a-z\xe8\xbf\x9926\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe7\xbb\x84\xe6\x88\x90\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe4\xb8\xad\xe5\x93\xaa\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe5\x87\xba\xe7\x8e\xb0\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\xe6\x9c\x80\xe5\xa4\x9a\n\xe8\xbe\x93\xe5\x85\xa5\n\xe7\xac\xac1\xe8\xa1\x8c\xe6\x98\xaf\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xe7\x9a\x84\xe7\xbb\x84\xe6\x95\xb0n\xef\xbc\x8c\xe6\xaf\x8f\xe7\xbb\x84\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xe5\x8d\xa01\xe8\xa1\x8c\xef\xbc\x8c\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe7\x94\xb1a-z\xe8\xbf\x9926\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe7\xbb\x84\xe6\x88\x90\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\xe6\xaf\x8f\xe7\xbb\x84\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xe4\xb9\x8b\xe9\x97\xb4\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe7\xa9\xba\xe8\xa1\x8c\xef\xbc\x8c\xe6\xaf\x8f\xe8\xa1\x8c\xe6\x95\xb0\xe6\x8d\xae\xe4\xb8\x8d\xe8\xb6\x85\xe8\xbf\x871000\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\x94\xe9\x9d\x9e\xe7\xa9\xba\n\xe8\xbe\x93\xe5\x87\xba\nn\xe8\xa1\x8c\xef\xbc\x8c\xe6\xaf\x8f\xe8\xa1\x8c\xe8\xbe\x93\xe5\x87\xba\xe5\xaf\xb9\xe5\xba\x94\xe4\xb8\x80\xe4\xb8\xaa\xe8\xbe\x93\xe5\x85\xa5\xe3\x80\x82\xe4\xb8\x80\xe8\xa1\x8c\xe8\xbe\x93\xe5\x87\xba\xe5\x8c\x85\xe6\x8b\xac\xe5\x87\xba\xe7\x8e\xb0\xe6\xac\xa1\xe6\x95\xb0\xe6\x9c\x80\xe5\xa4\x9a\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6\xe5\x92\x8c\xe8\xaf\xa5\xe5\xad\x97\xe7\xac\xa6\xe5\x87\xba\xe7\x8e\xb0\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\xef\xbc\x8c\xe4\xb8\xad\xe9\x97\xb4\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe7\xa9\xba\xe6\xa0\xbc\xe3\x80\x82\xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe5\x87\xba\xe7\x8e\xb0\xe7\x9a\x84\xe6\xac\xa1\xe6\x95\xb0\xe7\x9b\xb8\xe5\x90\x8c\xe4\xb8\x94\xe6\x9c\x80\xe5\xa4\x9a\xef\xbc\x8c\xe9\x82\xa3\xe4\xb9\x88\xe8\xbe\x93\xe5\x87\xbaascii\xe7\xa0\x81\xe6\x9c\x80\xe5\xb0\x8f\xe7\x9a\x84\xe9\x82\xa3\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n2\r\nabbccc\r\n\r\nadfadffasdf\r\n\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\nc 3\r\nf 4\n\n*/\n\n#include<iostream>\nusing namespace std;\nint main()\n{\n\tchar input[1000],word[26]={\'a\',\'b\',\'c\',\'d\',\'e\',\'f\',\'g\',\'h\',\'i\',\'j\',\'k\',\'l\',\'m\',\'n\',\'o\',\'p\',\'q\',\'r\',\'s\',\'t\',\'u\',\'v\',\'w\',\'x\',\'y\',\'z\'};\n\tint num[1000],n,k,i,j;\n\tcin>>n;\n\tfor(k=0;k<n;k++)\n\t{\n\t\tmemset(num,0,sizeof(num));\n\tcin>>input;\n\tfor(i=0;i<strlen(input);i++)\n\t{\n\t\tfor(j=0;j<26;j++)\n\t\t{\n\t\t    if(input[i]==word[j])\n\t\t\t{num[j]++;break;}\n\t\t}\n\t}\n\ti=0;\n\tfor(j=0;j<26;j++)\n\t{\n\t\tif(num[j]>num[i])\n\t\t\ti=j;\n\t}\n\tcout<<word[i]<<" "<<num[i]<<endl;\n\t}\n\treturn 0;\n}'
