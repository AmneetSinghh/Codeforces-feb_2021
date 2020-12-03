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
const int maxn=1000005;
const int N = 2e5 + 5;
int a[maxn];
int leave[maxn]={0};
set<int> ss;

//dfs
int dp[maxn];
std::vector<int> G[maxn];
void dfs(int s,int p)
{
  int flag=0;
    for(auto c:G[s])
    {
        if(c!=p)
         {
          dfs(c,s);
          dp[s]*=dp[c];
         }
    }




    if(leave[s]==1)
    {
     if(dp[s])ss.insert(s);
    }
    else
    {
      if(dp[s]==1)ss.insert(s);
    }

    dp[s]=a[s];


   
}


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("big.txt","w",stdout);
#endif
    io;
   int t=1;
    while (t--)
    {
      
   int n;cin>>n;
   int root=0;

   F(i,n)
   {
    int x;
    cin>>x>>a[i];
    if(x==-1)root=i;
    else G[x].pb(i);// x is parent;
   }

   for(int i=1;i<=n;i++)
   {
    dp[i]=a[i];
   }


for(int i=1;i<=n;i++)
{
  if(G[i].size()==0)leave[i]=1;
}

   dfs(root,0);

   if(ss.size()==0)cout<<"-1";
   else
   {
    for(auto sd:ss)cout<<sd<<" ";
      tr;
   }

    }  
 }