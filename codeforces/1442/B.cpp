#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod  998244353
#define inf 1000000000000
using namespace std;


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("outputt.txt","w",stdout);
#endif
    io;
   int t;cin>>t;
    while (t--)
    {

    int n,k;
    cin>>n>>k;
    int a[n+23],b[n+23];
    int vis[n+23]={0};
    int place[n+23]={0};
    for(int i=1;i<=n;i++)
    {
      cin>>a[i];
      place[a[i]]=i;
    }
    F(i,k)cin>>b[i],vis[place[b[i]]]=1;


    // for(int i=1;i<=n;i++)cout<<vis[i]<<" ";
    //   tr;

    int cost=0;
    for(int i=1;i<=k;i++)
    {
       int val=b[i];
       int ind=place[b[i]];

       int flag=0;
       // cout<<ind-1<<" "<<ind+1<<" "<<vis[ind-1]<<" "<<vis[ind+1];tr;
       if(ind-1>=1  && vis[place[a[ind-1]]]==0)flag++;
       if(ind+1<=n  && vis[place[a[ind+1]]]==0)flag++;


       // cout<<flag<<" "<<cost;tr;
       if(flag==0){cost=0;break;}
       if(flag==1)
       {
        if(cost==0)cost=1;
       }
       if(flag==2){if(cost==0)cost=2; else cost=(cost*2)%mod;}

       vis[ind]=0;//  now we can delte it

       // cout<<ind;tr;

    }




cout<<cost;tr;
    }  
 }