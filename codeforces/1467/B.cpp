/* Coding is love */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 100000000000009;
using namespace std;



int32_t main() 
{
    io;
  int g;cin>>g;
    while (g--){

/*
 
 **FUCKED UP**




 The mistake of yours in this contest is, you take this B problem only a easy problem,
 but the truth is its a good implementation problem, so you underestimate the problem, 
 thats why u fucked up, The most important thing, don't make so shitty code  
 also the big mistake is u think in the wrong direction than u made the logic that is at most 100 lines+ so you wasted the time, writting the wrong logic code.




 LEARNING IS -> MAKE EASY UNDERSTANDABLE AND LITTLE OPTIMISED LOGIC, AND ALSO NEVER NEVER NEVER UNDERESTIMATE THE PROBELM;


*/

int n;cin>>n;
int a[n+1];
int dp[n+1];
memset(dp,0,sizeof dp);
int total=0;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=1;i<n-1;i++)
{
 if(a[i]<a[i+1] && a[i]<a[i-1])dp[i]=1;
 if(a[i]>a[i+1] && a[i]>a[i-1])dp[i]=1;
 total+=dp[i];

}

int ans=total;// we have to minimize it bro;
for(int i=1;i<n-1;i++)
{
     int save_it=a[i];
     // just take this value, you have to chances to change either to previous either to next of it ;
     for(int j=-1;j<=1;j++)
     {
         if(j==0)continue;// it means no change; bro;
         int lowes=total;
         a[i]=a[i+j];// chenge it;
         for(int k=i-1;k<=i+1;k++)
         {
          if(k==0)continue;//no previous of it
          if(k==n-1)continue;// no next of it
          lowes-=dp[k];// minus it now check it;
          if(a[k]<a[k+1] && a[k]<a[k-1])++lowes;
          if(a[k]>a[k+1] && a[k]>a[k-1])++lowes;
         }


          ans=min(ans,lowes);
     }
     a[i]=save_it;// make it original bro;
}




cout<<ans;
tr;


}
}