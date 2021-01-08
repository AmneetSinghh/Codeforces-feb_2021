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


   int n;
   cin>>n;
   if(n==1)cout<<"9";
   else if(n==2)cout<<"98";
   else if(n==3)cout<<"989";
   else
   {
    int c=0;
    string s;
      for(int i=1;i<=n-3;i++)
        {
          s+=(to_string(c));
          ++c;
          if(c==10)c=0;
        }
        cout<<"989"<<s;
   }

tr;
    	





}
}