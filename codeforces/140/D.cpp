#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	int total=10,p=0,pel=0;
	for(int i=1;i<=n;i++)
	{
		total+=a[i];
		if(total>720)break;
		if(total<=360){++p;continue;}
		else
			pel+=abs(total-360);
			
			
		++p;
		
	}
	cout<<p<<" "<<pel<<"\n";

	return 0;
}
