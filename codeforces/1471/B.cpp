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


    	int n,x;
    cin>>n>>x;
    int a[n+1];
    std::vector<int> vc;
           std::vector<int> dp;

       F(i,n)cin>>a[i],vc.pb(a[i]),dp.pb(1);
       int sum=0;
     for(int i=0;i<vc.size();i++)
     {

     	// cout<<vc[i]<<" "<<dp[i];tr;
     	if(vc[i]%x==0)
     	{
          vc.pb(vc[i]/x);
          dp.pb(dp[i]*x);
     	}
     	else
     	{
     		break;
     	}
     }


for(int i=0;i<vc.size();i++)
{
	if(i>=n)sum+=((dp[i])*vc[i]);
	else sum+=(dp[i]*vc[i]);
}

     cout<<sum;tr;
}
}







