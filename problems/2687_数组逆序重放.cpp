b'/*\n2687: \xe6\x95\xb0\xe7\xbb\x84\xe9\x80\x86\xe5\xba\x8f\xe9\x87\x8d\xe6\x94\xbe\nhttp://bailian.openjudge.cn/practice/2687/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe5\xb0\x86\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad\xe7\x9a\x84\xe5\x80\xbc\xe6\x8c\x89\xe9\x80\x86\xe5\xba\x8f\xe9\x87\x8d\xe6\x96\xb0\xe5\xad\x98\xe6\x94\xbe\xe3\x80\x82\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x8c\xe5\x8e\x9f\xe6\x9d\xa5\xe7\x9a\x84\xe9\xa1\xba\xe5\xba\x8f\xe4\xb8\xba8,6,5,4,1\xe3\x80\x82\xe8\xa6\x81\xe6\xb1\x82\xe6\x94\xb9\xe4\xb8\xba1,4,5,6,8\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe8\xbe\x93\xe5\x85\xa5\xe4\xb8\xba\xe4\xb8\xa4\xe8\xa1\x8c\xef\xbc\x9a\xe7\xac\xac\xe4\xb8\x80\xe8\xa1\x8c\xe6\x95\xb0\xe7\xbb\x84\xe4\xb8\xad\xe5\x85\x83\xe7\xb4\xa0\xe7\x9a\x84\xe4\xb8\xaa\xe6\x95\xb0n\xef\xbc\x881<n<100)\xef\xbc\x8c\xe7\xac\xac\xe4\xba\x8c\xe8\xa1\x8c\xe6\x98\xafn\xe4\xb8\xaa\xe6\x95\xb4\xe6\x95\xb0\xef\xbc\x8c\xe6\xaf\x8f\xe4\xb8\xa4\xe4\xb8\xaa\xe6\x95\xb4\xe6\x95\xb0\xe4\xb9\x8b\xe9\x97\xb4\xe7\x94\xa8\xe7\xa9\xba\xe6\xa0\xbc\xe5\x88\x86\xe9\x9a\x94\xe3\x80\x82\n\xe8\xbe\x93\xe5\x87\xba\n\xe8\xbe\x93\xe5\x87\xba\xe4\xb8\xba\xe4\xb8\x80\xe8\xa1\x8c\xef\xbc\x9a\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x86\xe5\xba\x8f\xe5\x90\x8e\xe6\x95\xb0\xe7\xbb\x84\xe7\x9a\x84\xe6\x95\xb4\xe6\x95\xb0\xef\xbc\x8c\xe6\xaf\x8f\xe4\xb8\xa4\xe4\xb8\xaa\xe6\x95\xb4\xe6\x95\xb0\xe4\xb9\x8b\xe9\x97\xb4\xe7\x94\xa8\xe7\xa9\xba\xe6\xa0\xbc\xe5\x88\x86\xe9\x9a\x94\xe3\x80\x82\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n5\r\n8 6 5 4 1\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n1 4 5 6 8\n\xe6\x9d\xa5\xe6\xba\x90\n\xe8\xae\xa1\xe7\xae\x97\xe6\xa6\x82\xe8\xae\xba05\n\n*/\n\n#include <iostream>\n#include <bitset>\nusing namespace std;\nint main()\n{\n    int a[100],n;\n\tint i,temp;\n\tcin>>n;\n\tfor(i=0;i<n;i++)\n\t{\n\t\tcin>>a[i];\n\t}\n\tfor(i=0;i<=(n-1)/2;i++)\n\t{\n\t\ttemp=a[n-1-i];\n\t\ta[n-i-1]=a[i];\n\t\ta[i]=temp;\n\t}\n\tfor(i=0;i<n;i++)\n\t\tcout<<a[i]<<" ";\n\tcout<<endl;\nreturn 0;\n}'
