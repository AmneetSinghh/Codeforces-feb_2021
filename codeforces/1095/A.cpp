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

      int n;cin >>n;

    string s;cin>>s;
    string res="";
    int one=1;
    int i=0;
    while(i<s.size())
    {
        res+=s[i];
         i+=one;
          ++one;


    }


    cout<<res;
    tr;
   

    }  
 }

