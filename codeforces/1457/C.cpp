/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=100005;
#define print(s) cout<<s;
const int N = 2e5 + 5;
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
                  int n,p,k;
                  cin>>n>>p>>k;
                  string s;cin>>s;
                  int x,y;
                  cin>>x>>y;
                  string res="f";
                  res+=s;
                 int dp[n*2+10]={0};
                 // precomputation
                 for(int i=n;i>=1;i--)
                 {
                      int val=0;
                      if(i+k<=n)val=dp[i+k];
                      if(res[i]=='0')++val;
                      dp[i]=val;
                 }
int mi=inf;
                 for(int i=p;i<=n;i++)
                 {
                  int first=(i-p)*y;
                  int second=dp[i]*x;

                  // cout<<first<<" "<<second;tr;
                  mi=min(first+second,mi);

                 }

cout<<mi;
tr;
                  

    }
 
 }