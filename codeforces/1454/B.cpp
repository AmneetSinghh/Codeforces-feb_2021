/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=200005;
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
 
    int n;cin>>n;
    map<int,int> mp;
    int a[n+1]; 
       F(i,n)cin>>a[i],mp[a[i]]++;
       int ans=-1;
       for(auto sd:mp)
       {
        if(sd.second==1){ans=sd.first;break;}
       }

       if(ans==-1)cout<<ans;
       else
       {
           F(i,n)
           {
            if(a[i]==ans)cout<<i<<" ";
           }
       }

       tr;

 
 
 
 }
 }