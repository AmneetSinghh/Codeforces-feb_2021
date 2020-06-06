#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define int long long
#define endl '\n'
#define maxn 500005

int32_t main(){
int N;cin>>N;
int a[N+1];
for(int i=1;i<=N;i++)
cin>>a[i];
int p=0,n=0,sum=0,z=0,mi=10000000009;
for(int i=1;i<=N;i++)
{
	if(a[i]>0)p=1;
	if(a[i]<0)n=1;
	if(a[i]==0)z=1;
	
	mi=min(abs(a[i]),mi);
	sum+=abs(a[i]);
}
    if(N==1)cout<<a[1]<<"\n";
	else if(p==1 && n==1)cout<<sum<<"\n";
	else if(p==1 || n==1)
	{
		if(z==1)cout<<sum<<"\n";
		else
		cout<<sum-(mi*2)<<"\n";
	}
	else
	cout<<"0\n";

}

	
	
	
	

