
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ins insert
#define sb substr
#define con continue
#define ub upper_bound
#define lb lower_bound
#define sp fixed<<setprecision
#define bp __builtin_popcount
#define pll pair<ll,ll>
#define pld pair<ld,ld>
#define mod 1000000007
using namespace std;


  
// driver code 
int main() 
{ 
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]=='w' || s[i]=='m'){
    	flag=1;
    	break;}
    }
    if(flag==1)
    cout<<"0\n";
    else
    {
    	 
    int n=s.length();
   int dp[n+3];
   dp[0]=1;
   dp[1]=1;
   for(int i=2;i<=n;i++)
   {
   	dp[i]=dp[i-1];
   	if(s[i-1]==s[i-2] && (s[i-1]=='u'|| s[i-1]=='n'))
   	dp[i]=(dp[i]+dp[i-2])%mod;
   }
   cout<<dp[n]<<endl;
    }
   
}
    
   

