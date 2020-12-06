#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;
 
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
   int t;cin>>t;
    while (t--)
    {
 int n,k;cin>>n>>k;
int flag=0;
int x[n+1],y[n+1];
F(i,n)
    cin>>x[i]>>y[i];
int tom=0;
int mx=0;

    for(int i=1;i<=n;i++)
    {
    	int c=0;
    	for(int j=1;j<=n;j++)
    	{
             if(abs(x[i]-x[j])+abs(y[i]-y[j])<=k)++c;
           
    		
    	}

    mx=max(mx,c);
    }


if(mx==n)cout<<1;
else cout<<"-1";
tr;

      
 
    }  
 }
