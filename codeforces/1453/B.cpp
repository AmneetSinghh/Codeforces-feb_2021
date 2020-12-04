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

      int n;
      cin>>n;
      int a[n+1];
      F(i,n)cin>>a[i];
int sum=0;
      for(int i=2;i<=n;i++)sum+=(abs(a[i]-a[i-1]));

        int cut=max(abs(a[1]-a[2]),abs(a[n]-a[n-1]));
    for(int i=2;i<=n-1;i++)cut=max(cut,(abs(a[i]-a[i-1])+abs(a[i]-a[i+1]) )  -   abs(a[i-1]-a[i+1]));
cout<<sum-cut;
tr;


    }  
 }