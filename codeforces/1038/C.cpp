#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define int long long
#define endl '\n'
#define maxn 500005

int32_t main(){

	int n;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	cin>>b[i];
	
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	
	int y=0,x=0;
	int s=n,t=n;
	int f=0;
	// cout<<a[s]<<" "<<b[t]<<"\n";
	
	while(true)
	{
		if(f==0)
		{
			
			if(s<=0 && t<=0)break;
			else if(s<=0 && t>=1){--t;f=1;continue;}
			else if(s>=1 && t<=0){y+=a[s];--s;f=1;continue;}
			
			
			
			if(a[s]>=b[t])
			{y+=a[s];--s;f=1;}
			else
			{
				--t;
				f=1;
			}

		}
		else
		{
			// cout<<x<<" "<<y<<"\n";
			if(t<=0 && s<=0)break;
			else if(t<=0 && s>=1){--s;f=0;continue;}
			else if(t>=1 && s<=0){x+=b[t];--t;f=0;continue;}
			
			
			if(b[t]>=a[s])
			{x+=b[t];--t;f=0;}
			else
			{
				--s;
				f=0;
			}
			

		}
	}
	
	cout<<(y-x)<<"\n";
}


	
	
	
	

