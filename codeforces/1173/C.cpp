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
    while (t--)
    {
     int n;
     cin>>n;
     int a[n+1],b[n+1];
                F(i,n)cin>>a[i];   
                F(i,n)cin>>b[i];

     int c=0;
        F(i,n)
        {
          if(a[i]==0)c++;
        }

int dp[n+1]={0};
int cost=0;
int mx=0;
int cur=1;
int flag=0;
int save=-1;
for(int i=1;i<=n;i++)
{

  if(b[i]==cur)
  {
    if(cur==1)save=i;
    ++cur;
  }
  else{
    if(cur==1)continue;
    else {flag=1;break;}
  }
}

int cut=0;
int range=n;
if(flag==0)
{
  if(save==-1)range=n;
  else  range=save-1,cut=(n+1)-save;
}
else
{
  range=n;
}


// cout<<range<<" "<<save<<" "<<cut;tr;

    for(int i=1;i<=range;i++)// 1 2
    {
      if(b[i]==0)continue;
      int val=b[i]-cut;// 2
      int actual=val-1;///10
      if(i>=val)
      {
      // cout<<val<<" "<<time<<" "<<actual;tr;
         mx=max(mx,i-actual);
      }
    }


    if(cut==0)cout<<mx+n;
    else
    {
      if(mx==0)cout<<n-cut;
      else 
      {
        cout<<save+n;
      }
    }
    tr;

    }  
 }