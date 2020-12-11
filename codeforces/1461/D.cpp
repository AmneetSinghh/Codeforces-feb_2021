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

const int maxn=1000006;
map<int,int> h;
int pre[maxn+12]={0};
int a[maxn+12];
int dp[maxn+12];
int dp1[maxn+12];
int mi=inf,mx=0;
void calc(int l,int r)
{
  l=dp[l];
  r=dp1[r];// dp1[r] is the max till index
  if(l>r)return;
  h[pre[r]-pre[l-1]]++;
  if(l==r)return;
  int mid=(l+r)/2;
  int first=pre[mid]-pre[l-1];
  int second=pre[r]-pre[mid];///    3 3 3      5 5
  if(first!=0)
  {
      h[first]++;
      calc(l,mid);
  }
  if(second!=0)
  {
      h[second]++;
      calc(mid+1,r);
  }

}



int32_t main() {

#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outputt.txt","w",stdout);

#endif
    io;
   int t;cin>>t;
    while (t--){

int n,k;
cin>>n>>k;
mi=inf,mx=0;
int sum=0;
int tom[maxn]={0};
for(int i=1;i<=n;i++)cin>>a[i],pre[a[i]]+=a[i],mi=min(a[i],mi),mx=max(a[i],mx),sum+=a[i],tom[a[i]]++;
for(int i=1;i<=maxn;i++)pre[i]+=pre[i-1];
for(int i=maxn;i>=1;i--)
{
  if(tom[i])dp[i]=i;
  else dp[i]=dp[i+1];
}
for(int i=1;i<=maxn;i++)
{
  if(tom[i])dp1[i]=i;
  else dp1[i]=dp1[i-1];
}
calc(mi,mx);
while(k--){
  int val;
  cin>>val;
  if(val>sum)cout<<"No";
  else if(h[val])cout<<"Yes";
  else cout<<"No";
  tr;
}

h.clear();
F(i,maxn)pre[i]=0;

    }  
 }

