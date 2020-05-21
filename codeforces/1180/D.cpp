#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    // int t;cin>>t;while(t--){
    	
    int n,m;cin>>n>>m;
    int x=1,y=1,x1=n,y1=m,f=0;//5*5

	for(int i=1;i<=n/2;i++)
	{
		 x=i,y=1,x1=n-i+1,y1=m;//5*5
		for(int j=1;j<=m;j++)
		printf("%d %d\n%d %d\n",x,y++,x1,y1--);
		
	}
    
    ///for the odd case
    if(n%2==1)
	{
		for(int j=1;j<=m/2;++j)
			printf("%d %d\n%d %d\n",n/2+1,j,n/2+1,m-j+1);
		if(m%2==1)// center vala element form all babby
			printf("%d %d\n",n/2+1,m/2+1);
	}

}
