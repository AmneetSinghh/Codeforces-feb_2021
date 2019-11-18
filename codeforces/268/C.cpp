#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i=-1,m,n;
	scanf("%d %d",&m,&n);
	printf("%d\n",(m=(m>n)?n:m)+1);
	while(i<m) printf("%d %d\n",++i,m-i-1);
}

