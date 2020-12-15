#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000
using namespace std;

int32_t main() {
 
    io;
  int g=1;
    while (g--){

map<char,int> h;
     for(char i='a';i<='z';i++)
     {
      int u;
      cin>>u;
      h[i]=u;
     }
     string s;cin>>s;
     int total=0;
     int n=s.size();

     int pre[n+12]={0};
     for(int i=0;i<n;i++)
     {
          if(i==0)pre[i]=h[s[i]];
          else pre[i]=pre[i-1]+h[s[i]];
     }

     for(char i='a';i<='z';i++)
     {
      int mx=0;
      unordered_map<int,int> m;
      for(int j=0;j<n;j++)
      {
        if(s[j]==i)
        {
           mx+=m[pre[j-1]];
           m[pre[j]]++;
        }
      }
     total+=mx;
     }

     cout<<total;
     tr;
         
 
}
}