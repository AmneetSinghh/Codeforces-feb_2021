/* Coding is love */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 100000000000009;
using namespace std;



int32_t main() 
{
    io;
  int g;cin>>g;
    while (g--){


    	int n,x;

    cin>>n>>x;
    int a[n+1];
       F(i,n)cin>>a[i];
       int sum=0;
       int v=0;
       for(int i=1;i<=n;i++)
       {
       	sum+=a[i];
        if(a[i]%x==0)v+=a[i]/x;
        else v+=((a[i])/x)+1;

       }
       if(sum%x==0)sum=sum/x;
        else sum=(sum/x)+1;
       cout<<sum<<" "<<v;tr;
}
}
