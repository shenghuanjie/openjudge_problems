b'/*\n2737: \xe5\xa4\xa7\xe6\x95\xb4\xe6\x95\xb0\xe9\x99\xa4\xe6\xb3\x95\nhttp://bailian.openjudge.cn/practice/2737/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\n\xe6\xb1\x82\xe4\xb8\xa4\xe4\xb8\xaa\xe5\xa4\xa7\xe7\x9a\x84\xe6\xad\xa3\xe6\x95\xb4\xe6\x95\xb0\xe7\x9b\xb8\xe9\x99\xa4\xe7\x9a\x84\xe5\x95\x86\xe3\x80\x82\n\xe8\xbe\x93\xe5\x85\xa5\n\xe7\xac\xac1\xe8\xa1\x8c\xe6\x98\xaf\xe8\xa2\xab\xe9\x99\xa4\xe6\x95\xb0\xef\xbc\x8c\xe7\xac\xac2\xe8\xa1\x8c\xe6\x98\xaf\xe9\x99\xa4\xe6\x95\xb0\xe3\x80\x82\xe6\xaf\x8f\xe4\xb8\xaa\xe6\x95\xb0\xe5\x9d\x87\xe4\xb8\x8d\xe8\xb6\x85\xe8\xbf\x87100\xe4\xbd\x8d\xe3\x80\x82\n\xe8\xbe\x93\xe5\x87\xba\n\xe4\xb8\x80\xe8\xa1\x8c\xef\xbc\x8c\xe7\x9b\xb8\xe5\xba\x94\xe7\x9a\x84\xe5\x95\x86\xe7\x9a\x84\xe6\x95\xb4\xe6\x95\xb0\xe9\x83\xa8\xe5\x88\x86\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n2376\r\n24\r\n\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n99\n\n*/\n\n#include <string>\n#include <iostream>\nusing namespace std;\n\n#define MAX 200\n\nint num1[MAX+10];\nint num2[MAX+10];\nunsigned int total[MAX+10];\n\nint Sub(int a,int b)\n{\n    if (b>=a)\n    {\n        if (a==b)\n            return 0;\n        else\n            return -1;\n    }\n    int i = 0;\n    for (;a>b;i++)\n    {\n        b++;\n    }\n    return i;\n}\n\nint main()\n{\n    int n;\n    cin>>n;\n    while(n--)\n    {\n        memset(num1,0,sizeof(num1));\n        memset(num2,0,sizeof(num2));\n        memset(total,0,sizeof(total));\n        string str1,str2;\n        cin>>str1>>str2;\n        int len,index;\n        len = str1.length();\n        index = 0;\n\t\tint i;\n        for (i=len-1;i>=0;i--)\n        {\n            num1[index++] = str1[i]-\'0\';\n        }\n        len = str2.length();\n        index = 0;\n        for (i=len-1;i>=0;i--)\n        {\n            num2[index++] = str2[i]-\'0\';\n        }\n\n        if (str2.length()>str1.length())\n        {\n            cout<<"0"<<endl;\n            continue;\n        }\n        int len1,len2,length;\n        len1 = str1.length();\n        len2 = str2.length();\n        length = Sub(len1,len2);\n        while (1)\n        {\n            for (i=len1-1;i>=0;i--)\n            {\n                if (num1[i])\n                {\n                    len1 = i+1;\n                    break;\n                }\n            }\n            len = Sub(len1,len2);\n\n            int index = 0;\n            bool flag = false;\n            for (i=len1-1;i>=len;i--)\n            {\n                if (num1[i]<num2[i-len])\n                {\n                    flag = true;\n                    break;\n                }\n                if (num1[i]>num2[i-len])\n                {\n                    break;\n                }\n\n            }\n            if (flag)\n                len--;\n            if (len==-1)\n                break;\n            while (++index)\n            {\n                bool flag = false;\n                for (i=len1-1;i>=len;i--)\n                {\n                    if (num1[i]<num2[i-len])\n                    {\n                        flag = true;\n                        break;\n                    }\n                    if (num1[i]>num2[i-len])\n                    {\n                        break;\n                    }\n\n                }\n                if (flag)\n                {\n                    index--;\n                    break;\n                }\n                for (i=len;i<len1;i++)\n                {\n                    num1[i] -= num2[i-len];\n                    if (num1[i]<0)\n                    {\n                        num1[i] += 10;\n                        num1[i+1]--;\n                    }\n                }\n            }\n            if (index==0)\n                break;\n            else\n                total[len] = index;\n        }\n        bool flag = false;\n        for (i=length;i>=0;i--)\n        {\n            if (flag||total[i])\n            {\n                flag = true;\n                cout<<total[i];\n            }\n        }\n        if (!flag)\n        {\n            cout<<"0";\n        }\n        cout<<endl;\n    }\n\treturn 0;\n}'
