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
 freopen("outputt.txt","w",stdout);

#endif
    io;
   int t=1;
    while (t--){

      int n;cin>>n;
      int a[n+1];
      F(i,n)cin>>a[i];

sort(a+1,a+1+n);

cout<<min(a[n-1]-a[1],a[n]-a[2]);
tr;


    }  
 }

