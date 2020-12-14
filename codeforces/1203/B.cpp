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
    io;
   int t;cin>>t;
    while (t--){
   int n;
   int val;
   cin>>n;
   std::vector<int> vc;
   for(int i=1;i<=n*4;i++)cin>>val,vc.pb(val);
  sort(all(vc));

int j=vc.size()-1;
int sum=-1;
int flag=0;
  for(int i=0;i<vc.size()/2;i+=2)
  {
    int ff=vc[i];
    int ss=vc[i+1];
    int ff1=vc[j];
    int ff2=vc[j-1];

    j-=2;

    if(sum==-1)
    {
      if(ff2!=ff1 || ss!=ff)flag=1;
      else sum=ff*ff1;
    }
    else
    {
      if(ff2!=ff1 || ss!=ff)flag=1;
      else 
      {
        if(ff*ff1!=sum)flag=1;
      }
    }
  }




if(flag)cout<<"NO";
else cout<<"YES";


tr;

 
    }  
 }
