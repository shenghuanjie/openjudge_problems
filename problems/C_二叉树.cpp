b'/*\nC: \xe4\xba\x8c\xe5\x8f\x89\xe6\xa0\x91\nhttp://cxsjsx.openjudge.cn/contest1788/C/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe5\xa6\x82\xe4\xb8\x8a\xe5\x9b\xbe\xe6\x89\x80\xe7\xa4\xba\xef\xbc\x8c\xe7\x94\xb1\xe6\xad\xa3\xe6\x95\xb4\xe6\x95\xb01\xef\xbc\x8c2\xef\xbc\x8c3\xe2\x80\xa6\xe2\x80\xa6\xe7\xbb\x84\xe6\x88\x90\xe4\xba\x86\xe4\xb8\x80\xe9\xa2\x97\xe4\xba\x8c\xe5\x8f\x89\xe6\xa0\x91\xe3\x80\x82\xe6\x88\x91\xe4\xbb\xac\xe5\xb7\xb2\xe7\x9f\xa5\xe8\xbf\x99\xe4\xb8\xaa\xe4\xba\x8c\xe5\x8f\x89\xe6\xa0\x91\xe7\x9a\x84\xe6\x9c\x80\xe5\x90\x8e\xe4\xb8\x80\xe4\xb8\xaa\xe7\xbb\x93\xe7\x82\xb9\xe6\x98\xafn\xe3\x80\x82\xe7\x8e\xb0\xe5\x9c\xa8\xe7\x9a\x84\xe9\x97\xae\xe9\xa2\x98\xe6\x98\xaf\xef\xbc\x8c\xe7\xbb\x93\xe7\x82\xb9m\xe6\x89\x80\xe5\x9c\xa8\xe7\x9a\x84\xe5\xad\x90\xe6\xa0\x91\xe4\xb8\xad\xe4\xb8\x80\xe5\x85\xb1\xe5\x8c\x85\xe6\x8b\xac\xe5\xa4\x9a\xe5\xb0\x91\xe4\xb8\xaa\xe7\xbb\x93\xe7\x82\xb9\xe3\x80\x82\xe6\xaf\x94\xe5\xa6\x82\xef\xbc\x8cn = 12\xef\xbc\x8cm = 3\xe9\x82\xa3\xe4\xb9\x88\xe4\xb8\x8a\xe5\x9b\xbe\xe4\xb8\xad\xe7\x9a\x84\xe7\xbb\x93\xe7\x82\xb913\xef\xbc\x8c14\xef\xbc\x8c15\xe4\xbb\xa5\xe5\x8f\x8a\xe5\x90\x8e\xe9\x9d\xa2\xe7\x9a\x84\xe7\xbb\x93\xe7\x82\xb9\xe9\x83\xbd\xe6\x98\xaf\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xef\xbc\x8c\xe7\xbb\x93\xe7\x82\xb9m\xe6\x89\x80\xe5\x9c\xa8\xe5\xad\x90\xe6\xa0\x91\xe4\xb8\xad\xe5\x8c\x85\xe6\x8b\xac\xe7\x9a\x84\xe7\xbb\x93\xe7\x82\xb9\xe6\x9c\x893\xef\xbc\x8c6\xef\xbc\x8c7\xef\xbc\x8c12\xef\xbc\x8c\xe5\x9b\xa0\xe6\xad\xa4\xe7\xbb\x93\xe7\x82\xb9m\xe7\x9a\x84\xe6\x89\x80\xe5\x9c\xa8\xe5\xad\x90\xe6\xa0\x91\xe4\xb8\xad\xe5\x85\xb1\xe6\x9c\x894\xe4\xb8\xaa\xe7\xbb\x93\xe7\x82\xb9\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe8\xbe\x93\xe5\x85\xa5\xe6\x95\xb0\xe6\x8d\xae\xe5\x8c\x85\xe6\x8b\xac\xe5\xa4\x9a\xe8\xa1\x8c\xef\xbc\x8c\xe6\xaf\x8f\xe8\xa1\x8c\xe7\xbb\x99\xe5\x87\xba\xe4\xb8\x80\xe7\xbb\x84\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe5\x8c\x85\xe6\x8b\xac\xe4\xb8\xa4\xe4\xb8\xaa\xe6\x95\xb4\xe6\x95\xb0m\xef\xbc\x8cn (1 <= m <= n <= 1000000000)\xe3\x80\x82\xe6\x9c\x80\xe5\x90\x8e\xe4\xb8\x80\xe7\xbb\x84\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xe4\xb8\xad\xe5\x8c\x85\xe6\x8b\xac\xe4\xb8\xa4\xe4\xb8\xaa0\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe8\xbe\x93\xe5\x85\xa5\xe7\x9a\x84\xe7\xbb\x93\xe6\x9d\x9f\xef\xbc\x8c\xe8\xbf\x99\xe7\xbb\x84\xe6\x95\xb0\xe6\x8d\xae\xe4\xb8\x8d\xe7\x94\xa8\xe5\xa4\x84\xe7\x90\x86\xe3\x80\x82\n\xe8\xbe\x93\xe5\x87\xba\n\xe5\xaf\xb9\xe4\xba\x8e\xe6\xaf\x8f\xe4\xb8\x80\xe7\xbb\x84\xe6\xb5\x8b\xe8\xaf\x95\xe6\x95\xb0\xe6\x8d\xae\xef\xbc\x8c\xe8\xbe\x93\xe5\x87\xba\xe4\xb8\x80\xe8\xa1\x8c\xef\xbc\x8c\xe8\xaf\xa5\xe8\xa1\x8c\xe5\x8c\x85\xe5\x90\xab\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb4\xe6\x95\xb0\xef\xbc\x8c\xe7\xbb\x99\xe5\x87\xba\xe7\xbb\x93\xe7\x82\xb9m\xe6\x89\x80\xe5\x9c\xa8\xe5\xad\x90\xe6\xa0\x91\xe4\xb8\xad\xe5\x8c\x85\xe6\x8b\xac\xe7\x9a\x84\xe7\xbb\x93\xe7\x82\xb9\xe7\x9a\x84\xe6\x95\xb0\xe7\x9b\xae\xe3\x80\x82\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n3 12\r\n0 0\r\n\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n4\n\n*/\n\n#include<iostream>\r\n#include<cmath>\r\nusing namespace std;\r\nint main()\r\n{\r\nint m,n;\r\nwhile(cin>>m>>n)\r\n{\r\n\r\nif(m==0&&n==0)\r\nbreak;\r\nint i=1;\r\nint start=m,end=m;\r\nint ans;\r\nwhile(1)\r\n{\r\nstart=2*start;\r\nend=2*end+1;\r\ni=i*2;\r\nif(end>=n)\r\n{\r\nif(start<=n)\r\nans=i+n-start;\r\nelse\r\nans=i-1;\r\nbreak;\r\n}\r\n}\r\ncout<<ans<<endl;\r\n}\r\nreturn 0;\r\n}'
