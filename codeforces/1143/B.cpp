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
       if(n<=9){cout<<n;tr;continue;}
       string s=to_string(n);
       int mx=1;
       for(int i=0;i<s.size();i++)
       {
          int pro=1;
          if(s[i]!='0')
          {
            for(int j=0;j<i;j++)pro=pro* (s[j]-'0');
            int val=s[i]-'0';
            --val;
          if(val==0);
          else pro*=val;
          for(int j=i+1;j<s.size();j++)pro*=9;

          }
          else continue;
          mx=max(pro,mx);
       }
       int pro=1;
       for(int i=0;i<s.size();i++)pro=pro*(s[i]-'0');
        mx=max(pro,mx);

       cout<<mx;
       tr;





    }  
 }