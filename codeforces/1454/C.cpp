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
const int maxn=200001;
std::vector<int> vc[maxn];
    int a[maxn];

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
 
    int n;cin>> n;
F(i,n)cin>>a[i],vc[a[i]].pb(i);
int mi=inf;
       for(int i=1;i<=n;i++)
       {
          if(vc[i].size()==0)continue;
          int pre=-1;
          int ans=0;
          for(auto sd:vc[i])
          {
              if(pre==-1)
              {
                if(sd!=1)++ans;
              }
              else
              {
                if(sd!=pre+1)ans++;
              }
            pre=sd;
          }
          if(pre!=n)ans++;
          mi=min(ans,mi);
       }


       cout<<mi;
       tr;



for(int i=1;i<=n;i++)vc[i].clear();


 
 
 }
 }