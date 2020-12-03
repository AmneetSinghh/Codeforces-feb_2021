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
const int maxn=505;
#define print(s) cout<<s;
const int N = 2e5 + 5;
int a[maxn];
int n,x;
bool not_sorted()
{
 for(int i=2;i<=n;i++)
 {
  if(a[i]<a[i-1])return false;
 }
return true;
}

int get_index()
{
 for(int i=2;i<=n;i++)
 {
  if(a[i]<a[i-1])return i-1;
 }
return -1;
}

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("big.txt","w",stdout);
#endif
    io;
   int t;cin>>t;

    while (t--)
    {
   int c=0;
   int flag=0;
      cin>>n>>x;
    F(i,n)cin>>a[i];
    while(!not_sorted())// this means that this is not sorted;
    {
      int ind=get_index();
      int done=0;
      for(int i=1;i<=ind;i++)
      {
        if(a[i]>x){swap(a[i],x),++c;done=1;}
      }

      if(c>500 || done==0)break;
    }





    for(int i=2;i<=n;i++){
      if(a[i]<a[i-1])flag=1;
    }
    if(flag)cout<<"-1";else cout<<c;
    tr;

    }  
 }