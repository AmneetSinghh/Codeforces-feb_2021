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
    string s;cin>>s;
    int dp[n+1][3];
    memset(dp,0,sizeof dp);
    for(int i=n-1;i>=0;i--)
    {
     int open=0,close=0;
     if(s[i]==')')close++;
     else open++;
     if(close)//)
     {
           dp[i][0]=dp[i+1][0];
           dp[i][1]=dp[i+1][1]+1;
     }
     else//   (
     {
           if(dp[i+1][1]>=1)
           {
            dp[i][0]=dp[i+1][0];
            dp[i][1]=dp[i+1][1]-1;// cut )
           }
           else
           {
            dp[i][0]=dp[i+1][0]+1;
            dp[i][1]=dp[i+1][1];
           }
     }
     
    }

    // for(int i=0;i<=n-1;i++)cout<<dp[i][0]<<" "<<dp[i][1]<<"\n";
    int open=0;
    int close=0;
    int val=0;
    for(int i=0;i<n;i++)
    {
         int o=0,c=0;
         if(s[i]==')')++c;
         else o++;


// cout<<val<<" "<<open<<" "<<close<<" "<<i;tr;

         if(o)//   )
         {
             int one=open;//  2
             int two=close;// 2
             if(one>=1)--one;
             else goto g;
             if(one==dp[i+1][1]   && dp[i+1][0]==0)++val;
         }
         else
            { //(
             int one=dp[i+1][0];// open
             int two=dp[i+1][1];// close
             if(two>=1)--two;
             else goto g;
             if(two==open && one==0)++val;
            }



 g:
 if(o)
 {
    ++open;
 }
 else
 {
    if(open)--open;
    else break;
 }

}
    cout<<val;
    tr;

  


    }  
 }

