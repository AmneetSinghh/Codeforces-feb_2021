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
const int MAXN=100004;

bool comp(ipair &a,ipair &b)
{
  if(a.first>b.first)return true;

  return false;
}
int n,k,s;
int check(int first,int left)
{
  int ans=-1;
  int l=1,r=n-1;
  while(l<=r)
    {
      int mid=(l+r)/2;
      if(mid+left==s){ans=mid;break;}
      if(mid+left<s)l=mid+1;
      else r=mid-1;
    }
    return ans;
}
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {

cin>>n>>k>>s;
if(s<k || s>(n-1)*k)cout<<"NO";
else
{
    cout<<"YES";tr;
    int first=1;
    int second=n;
    int left=k;
    int cur=1;
    for(int i=1;i<=k;i++)
    {
      int mx_move=abs(first-second);
      if(mx_move+(left-1)<=s)
      {
        if(cur==second)cur=first;
        else cur=second;
        cout<<cur<<" ";
        --left;
        s-=mx_move;
      }
      else
      {
        int l=1,r=n-1,val=0;
        int ans=check(cur,left-1); --left;
        if(cur==1)val=1+ans;
        else if(cur==n)val=n-ans;
        int mk=0;
        cout<<val<<" ";

        if(val+1<=n)second=val+1;
        else second=val-1;
        // break;
        while(left--)
        {
            if(!(mk&1))cout<<second<<" ";
            else cout<<val<<" ";
            ++mk; 
        }
        break;
      }
    }
}




}
 }

