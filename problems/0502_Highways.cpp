b"/*\n0502: Highways\nhttp://dsb.openjudge.cn/5/0502/\n\n\n\xe6\x8f\x8f\xe8\xbf\xb0\nThe island nation of Flatopia is perfectly flat. Unfortunately, Flatopia has a very poor system of public highways. The Flatopian government is aware of this problem and has already constructed a number of highways connecting some of the most important towns. However, there are still some towns that you can't reach via a highway. It is necessary to build more highways so that it will be possible to drive between any pair of towns without leaving the highway system. Flatopian towns are numbered from 1 to N and town i has a position given by the Cartesian coordinates (xi, yi). Each highway connects exaclty two towns. All highways (both the original ones and the ones that are to be built) follow straight lines, and thus their length is equal to Cartesian distance between towns. All highways can be used in both directions. Highways can freely cross each other, but a driver can only switch between highways at a town that is located at the end of both highways. The Flatopian government wants to minimize the cost of building new highways. However, they want to guarantee that every town is highway-reachable from every other town. Since Flatopia is so flat, the cost of a highway is always proportional to its length. Thus, the least expensive highway system will be the one that minimizes the total highways length. \n\xe8\xbe\x93\xe5\x85\xa5\nThe input consists of two parts. The first part describes all towns in the country, and the second part describes all of the highways that have already been built. The first line of the input file contains a single integer N (1 <= N <= 750), representing the number of towns. The next N lines each contain two integers, xi and yi separated by a space. These values give the coordinates of ith town (for i from 1 to N). Coordinates will have an absolute value no greater than 10000. Every town has a unique location. The next line contains a single integer M (0 <= M <= 1000), representing the number of existing highways. The next M lines each contain a pair of integers separated by a space. These two integers give a pair of town numbers which are already connected by a highway. Each pair of towns is connected by at most one highway.\n\xe8\xbe\x93\xe5\x87\xba\nWrite to the output a single line for each new highway that should be built in order to connect all towns with minimal possible total length of new highways. Each highway should be presented by printing town numbers that this highway connects, separated by a space. If no new highways need to be built (all towns are already connected), then the output file should be created but it should be empty.\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x85\xa5\n9\n1 5\n0 0 \n3 2\n4 5\n5 1\n0 4\n5 2\n1 2\n5 3\n3\n1 3\n9 7\n1 2\n\xe6\xa0\xb7\xe4\xbe\x8b\xe8\xbe\x93\xe5\x87\xba\n1 6\n3 7\n4 9\n5 7\n8 3\n\n*/\n\n#include<iostream>\nusing namespace std;\nint main()\n{return 0;}"
