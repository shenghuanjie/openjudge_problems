b'/*\n2813: \xe7\x94\xbb\xe5\xae\xb6\xe9\x97\xae\xe9\xa2\x98\nhttp://bailian.openjudge.cn/practice/2813/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe6\xad\xa3\xe6\x96\xb9\xe5\xbd\xa2\xe7\x9a\x84\xe5\xa2\x99\xef\xbc\x8c\xe7\x94\xb1N*N\xe4\xb8\xaa\xe6\xad\xa3\xe6\x96\xb9\xe5\xbd\xa2\xe7\x9a\x84\xe7\xa0\x96\xe7\xbb\x84\xe6\x88\x90\xef\xbc\x8c\xe5\x85\xb6\xe4\xb8\xad\xe4\xb8\x80\xe4\xba\x9b\xe7\xa0\x96\xe6\x98\xaf\xe7\x99\xbd\xe8\x89\xb2\xe7\x9a\x84\xef\xbc\x8c\xe5\x8f\xa6\xe5\xa4\x96\xe4\xb8\x80\xe4\xba\x9b\xe7\xa0\x96\xe6\x98\xaf\xe9\xbb\x84\xe8\x89\xb2\xe7\x9a\x84\xe3\x80\x82Bob\xe6\x98\xaf\xe4\xb8\xaa\xe7\x94\xbb\xe5\xae\xb6\xef\xbc\x8c\xe6\x83\xb3\xe6\x8a\x8a\xe5\x85\xa8\xe9\x83\xa8\xe7\x9a\x84\xe7\xa0\x96\xe9\x83\xbd\xe6\xb6\x82\xe6\x88\x90\xe9\xbb\x84\xe8\x89\xb2\xe3\x80\x82\xe4\xbd\x86\xe4\xbb\x96\xe7\x9a\x84\xe7\x94\xbb\xe7\xac\x94\xe4\xb8\x8d\xe5\xa5\xbd\xe4\xbd\xbf\xe3\x80\x82\xe5\xbd\x93\xe4\xbb\x96\xe7\x94\xa8\xe7\x94\xbb\xe7\xac\x94\xe6\xb6\x82\xe7\x94\xbb\xe7\xac\xac(i, j)\xe4\xb8\xaa\xe4\xbd\x8d\xe7\xbd\xae\xe7\x9a\x84\xe7\xa0\x96\xe6\x97\xb6\xef\xbc\x8c \xe4\xbd\x8d\xe7\xbd\xae(i-1, j)\xe3\x80\x81 (i+1, j)\xe3\x80\x81 (i, j-1)\xe3\x80\x81 (i, j+1)\xe4\xb8\x8a\xe7\x9a\x84\xe7\xa0\x96\xe9\x83\xbd\xe4\xbc\x9a\xe6\x94\xb9\xe5\x8f\x98\xe9\xa2\x9c\xe8\x89\xb2\xe3\x80\x82\xe8\xaf\xb7\xe4\xbd\xa0\xe5\xb8\xae\xe5\x8a\xa9Bob\xe8\xae\xa1\xe7\xae\x97\xe5\x87\xba\xe6\x9c\x80\xe5\xb0\x91\xe9\x9c\x80\xe8\xa6\x81\xe6\xb6\x82\xe7\x94\xbb\xe5\xa4\x9a\xe5\xb0\x91\xe5\x9d\x97\xe7\xa0\x96\xef\xbc\x8c\xe6\x89\x8d\xe8\x83\xbd\xe4\xbd\xbf\xe6\x89\x80\xe6\x9c\x89\xe7\xa0\x96\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe9\x83\xbd\xe5\x8f\x98\xe6\x88\x90\xe9\xbb\x84\xe8\x89\xb2\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe7\xac\xac\xe4\xb8\x80\xe8\xa1\x8c\xe6\x98\xaf\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb4\xe6\x95\xb0n (1\xe2\x89\xa4n \xe2\x89\xa415)\xef\xbc\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xa2\x99\xe7\x9a\x84\xe5\xa4\xa7\xe5\xb0\x8f\xe3\x80\x82\xe6\x8e\xa5\xe4\xb8\x8b\xe6\x9d\xa5\xe7\x9a\x84n\xe8\xa1\x8c\xe8\xa1\xa8\xe7\xa4\xba\xe5\xa2\x99\xe7\x9a\x84\xe5\x88\x9d\xe5\xa7\x8b\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82\xe6\xaf\x8f\xe4\xb8\x80\xe8\xa1\x8c\xe5\x8c\x85\xe5\x90\xabn\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe3\x80\x82\xe7\xac\xaci\xe8\xa1\x8c\xe7\x9a\x84\xe7\xac\xacj\xe4\xb8\xaa\xe5\xad\x97\xe7\xac\xa6\xe8\xa1\xa8\xe7\xa4\xba\xe4\xbd\x8d\xe4\xba\x8e\xe4\xbd\x8d\xe7\xbd\xae(i,j)\xe4\xb8\x8a\xe7\x9a\x84\xe7\xa0\x96\xe7\x9a\x84\xe9\xa2\x9c\xe8\x89\xb2\xe3\x80\x82\xe2\x80\x9cw\xe2\x80\x9d\xe8\xa1\xa8\xe7\xa4\xba\xe7\x99\xbd\xe7\xa0\x96\xef\xbc\x8c\xe2\x80\x9cy\xe2\x80\x9d\xe8\xa1\xa8\xe7\xa4\xba\xe9\xbb\x84\xe7\xa0\x96\xe3\x80\x82\n\xe8\xbe\x93\xe5\x87\xba\n\xe4\xb8\x80\xe8\xa1\x8c\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9cBob\xe8\x83\xbd\xe5\xa4\x9f\xe5\xb0\x86\xe6\x89\x80\xe6\x9c\x89\xe7\x9a\x84\xe7\xa0\x96\xe9\x83\xbd\xe6\xb6\x82\xe6\x88\x90\xe9\xbb\x84\xe8\x89\xb2\xef\xbc\x8c\xe5\x88\x99\xe8\xbe\x93\xe5\x87\xba\xe6\x9c\x80\xe5\xb0\x91\xe9\x9c\x80\xe8\xa6\x81\xe6\xb6\x82\xe7\x94\xbb\xe7\x9a\x84\xe7\xa0\x96\xe6\x95\xb0\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe8\xbe\x93\xe5\x87\xba\xe2\x80\x9cinf\xe2\x80\x9d\xe3\x80\x82\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n5\r\nwwwww\r\nwwwww\r\nwwwww\r\nwwwww\r\nwwwww\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n15 \n\xe6\x9d\xa5\xe6\xba\x90\n1681\n\n*/\n\n/*\n\xe4\xb8\xbb\xe8\xa6\x81\xe8\xa7\xa3\xe9\xa2\x98\xe6\x80\x9d\xe8\xb7\xaf\n\xe7\xac\xac\xe4\xb8\x80\xe8\xa1\x8c\xe6\x9e\x9a\xe4\xb8\xbe2^n\xe7\xa7\x8d\xe6\x83\x85\xe5\x86\xb5\xef\xbc\x8c\xe7\x84\xb6\xe5\x90\x8e\xe4\xb9\x8b\xe5\x90\x8e\xe7\x9a\x84\xe6\xaf\x8f\xe4\xb8\x80\xe8\xa1\x8c\xe9\x83\xbd\xe6\xa0\xb9\xe6\x8d\xae\xe4\xb8\x8a\xe4\xb8\x80\xe8\xa1\x8c\xe4\xb8\x8d\xe6\x98\xaf\xe9\xbb\x84\xe7\x81\xaf\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe5\xb0\x86\xe4\xb8\x8a\xe4\xb8\x80\xe8\xa1\x8c\xe5\x85\xa8\xe9\x83\xa8\xe5\x8f\x98\xe4\xb8\xba\xe9\xbb\x84\xe7\x81\xaf\xef\xbc\x8c\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xef\xbc\x8c\xe7\x9c\x8b\xe6\x9c\x80\xe5\x90\x8e\xe4\xb8\x80\xe8\xa1\x8c\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\xa8\xe4\xb8\xba\xe9\xbb\x84\xe7\x81\xaf\n*/\n#include<iostream>\nusing namespace std;\nint n;//\xe7\x94\xa8\xe4\xba\x8e\xe4\xbf\x9d\xe5\xad\x98\xe5\xae\xbd\xe5\xba\xa6\nint num;//\xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\xb4\xe6\x97\xb6\xe5\xad\x98\xe6\x94\xbe\xe6\xad\xa5\xe9\xaa\xa4\xe6\x95\xb0\nint result=500;//\xe7\x94\xa8\xe4\xba\x8e\xe5\xad\x98\xe6\x94\xbe\xe6\x9c\x80\xe5\xb0\x91\xe7\x9a\x84\xe6\xad\xa5\xe9\xaa\xa4\xe6\x95\xb0\nint paint[20][20];//\xe7\x94\xa8\xe4\xba\x8e\xe8\xae\xb0\xe5\xbd\x95\xe6\x94\xb9\xe5\x8f\x98\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe6\x96\xb9\xe4\xbe\xbf\xe5\x9b\x9e\xe6\xba\xaf\nvoid f(int range[][20],int x)\n{\n\tint i,j;\n\tint k=0;//\xe4\xbb\xa3\xe8\xa1\xa8\xe4\xb8\xa4\xe7\xa7\x8d\xe6\x83\x85\xe5\x86\xb5\xef\xbc\x8c0\xe4\xbb\xa3\xe8\xa1\xa8\xe8\xbf\x99\xe4\xb8\xaa\xe5\xbc\x80\xe5\x85\xb3\xe4\xb8\x8d\xe8\xa2\xab\xe6\x8c\x89\xe4\xb8\x8b\xef\xbc\x8c1\xe4\xbb\xa3\xe8\xa1\xa8\xe8\xa2\xab\xe6\x8c\x89\xe4\xb8\x8b\n\t//\xe5\x85\x88\xe8\xa6\x81\xe6\x9e\x9a\xe4\xb8\xbe\xe7\xac\xac\xe4\xb8\x80\xe8\xa1\x8c\xe7\x9a\x84\xe6\x83\x85\xe5\x86\xb5\n\tfor(;k<2;k++)\n\t{\n\t\tif(k)//\xe6\x8c\x89\xe4\xb8\x8b\xe6\x97\xb6\xe6\x94\xb9\xe5\x8f\x98\xe7\x8a\xb6\xe6\x80\x81\n\t\t{\n\t\trange[1][x]=1-range[1][x];\n\t\trange[1][x-1]=1-range[1][x-1];\n\t\trange[1][x+1]=1-range[1][x+1];\n\t\trange[2][x]=1-range[2][x];\n\t\tnum++;\n\t\t}\n\t\tif(x==n)goto jump;//\xe5\xbd\x93\xe6\x9e\x9a\xe4\xb8\xbe\xe5\x88\xb0\xe8\xbe\xb9\xe7\x95\x8c\xe6\x97\xb6\xe5\x81\x9c\xe6\xad\xa2\xe9\x80\x92\xe5\xbd\x92\n\t\tf(range,x+1);\n\t\t//\xe4\xb8\x8b\xe8\xbe\xb9\xe5\x88\xa4\xe6\x96\xad\xe4\xbd\x99\xe4\xb8\x8b\xe7\x9a\x84\xe8\xa1\x8c\xe6\x8c\x89\xe7\x85\xa7\xe8\xa7\x84\xe5\x88\x99\xe6\x8c\x89\xe4\xb8\x8b\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe6\x9e\x84\xe6\x88\x90\xe5\x8f\xaf\xe8\xa1\x8c\xe6\x96\xb9\xe6\xa1\x88\njump:\tmemset(paint,0,sizeof(paint));\n\t\tfor(i=1;i<n;i++)\n\t\t{\n\t\t\tfor(j=1;j<=n;j++)\n\t\t\t{\n\t\t\t\tif(range[i][j]==0)\n\t\t\t\t{\n\t\t\t\t\tpaint[i][j]=1;\n\t\t\t\t\trange[i+1][j]=1-range[i+1][j];\n\t\t\t\t\trange[i][j]=1-range[i][j];\n\t\t\t\t\trange[i+2][j]=1-range[i+2][j];\n\t\t\t\t\trange[i+1][j-1]=1-range[i+1][j-1];\n\t\t\t\t\trange[i+1][j+1]=1-range[i+1][j+1];\n\t\t\t\t\tnum++;\n\t\t\t\t}\n\t\t\t}\n\t\t}\n\n\n\t\t\tfor(j=1;j<=n;j++)\n\t\t\t{\n\t\t\t\tif(range[n][j]!=1)//\xe6\x96\xb9\xe6\xa1\x88\xe4\xb8\x8d\xe5\x8f\xaf\xe8\xa1\x8c\xef\xbc\x8c\xe5\x9b\x9e\xe6\xba\xaf\n\t\t\t\t{\n\t\t\t\t\tfor(i=1;i<n;i++)\n\t\t\t\t\t{\n\t\t\t\t\t\tfor(j=1;j<=n;j++)\n\t\t\t\t\t\t{\n\t\t\t\t\t\t\tif(paint[i][j]==1)\n\t\t\t\t\t\t\t{\n\t\t\t\t\t\t\t\trange[i+1][j]=1-range[i+1][j];\n\t\t\t\t\t\t\t\trange[i][j]=1-range[i][j];\n\t\t\t\t\t\t\t\trange[i+2][j]=1-range[i+2][j];\n\t\t\t\t\t\t\t\trange[i+1][j-1]=1-range[i+1][j-1];\n\t\t\t\t\t\t\t\trange[i+1][j+1]=1-range[i+1][j+1];\n\t\t\t\t\t\t\t\tnum--;\n\t\t\t\t\t\t\t}\n\t\t\t\t\t\t}\n\t\t\t\t\t}\n\t\t\t\t\t\n\t\t\t\t\tgoto next;\n\t\t\t\t}\n\t\t\t}\n\t\t\tif(num<result)//\xe6\x96\xb9\xe6\xa1\x88\xe5\x8f\xaf\xe8\xa1\x8c\xef\xbc\x8c\xe7\x9c\x8b\xe6\xad\xa5\xe9\xaa\xa4\xe6\x98\xaf\xe5\x90\xa6\xe6\x9b\xb4\xe5\xb0\x91\n\t\t\t{\n\t\t\t\tresult=num;\n\t\t\t\treturn;\n\t\t\t}\n\n\t\t\n\t\tnext:;\n\t\tif(k)//\xe5\x9b\x9e\xe6\xba\xaf\n\t\t{\n\t\trange[1][x]=1-range[1][x];\n\t\trange[1][x-1]=1-range[1][x-1];\n\t\trange[1][x+1]=1-range[1][x+1];\n\t\trange[2][x]=1-range[2][x];\n\t\tnum--;\n\t\t}\n\t}\n\treturn;\n}\nint main()\n{\n\tchar str[20];//\xe8\xaf\xbb\xe5\x85\xa5\xe4\xb8\x80\xe8\xa1\x8c\xe5\xad\x97\xe7\xac\xa6\xe4\xb8\xb2\n\tint t;//\xe9\x97\xae\xe9\xa2\x98\xe7\xbb\x84\xe6\x95\xb0\n\tint range[20][20];//\xe7\x94\xa8\xe4\xba\x8e\xe5\xad\x98\xe6\x94\xbe\xe8\xbe\x93\xe5\x85\xa5\xe6\x95\xb0\xe6\x8d\xae\n\tint i=0,j=0;//\xe7\x94\xa8\xe4\xba\x8e\xe5\xbe\xaa\xe7\x8e\xaf\n\tcin>>t;\n\tfor(;t>0;t--)\n\t{\n\t\tresult=500;//\xe5\xb0\x86\xe6\xad\xa5\xe9\xaa\xa4\xe5\xad\x98\xe6\x88\x90\xe5\xbe\x88\xe5\xa4\xa7\xe7\x9a\x84\xe6\x95\xb0\n\t\tmemset(range,-1,sizeof(range));//\xe5\xb0\x86range\xe6\xb8\x85\xe7\xa9\xba\n\t\tcin>>n;//\xe8\xbe\x93\xe5\x85\xa5\xe6\x95\xb0\xe6\x8d\xae\n\t\tfor(i=1;i<=n;i++)\n\t\t{\n\t\t\tcin>>str;\n\t\t\tfor(j=0;j<n;j++)\n\t\t\t{\n\t\t\t\tif(str[j]==\'y\')\n\t\t\t\trange[i][j+1]=1;\n\t\t\t\telse if(str[j]==\'w\')\n\t\t\t\trange[i][j+1]=0;\n\t\t\t}\t\t\n\t\t}\n\t\tnum=0;\n\t\tmemset(paint,0,sizeof(paint));\n\t\t//\xe9\x80\x92\xe5\xbd\x92\xe8\xb0\x83\xe7\x94\xa8\xe6\x9e\x9a\xe4\xb8\xbe\xe5\x87\xbd\xe6\x95\xb0\n\t\tf(range,1);\n\t\t//\xe8\xbe\x93\xe5\x87\xba\xe7\xbb\x93\xe6\x9e\x9c\n\t\tif(result==500)\n\t\t\tcout<<"inf"<<endl;\n\t\telse\n\t\t\tcout<<result<<endl;\n\n\t\t\n\t}\n\treturn 0;\n}\n'
