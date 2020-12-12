#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 998244353
#define inf 1000000000000
using namespace std;


int32_t main() {
   int t=1;
    while (t--){
    	
int n;cin>>n;
int a[n+1];
map<int,int> m;
F(i,n)cin>>a[i],m[a[i]]=i;
int c=0;


for(int i=1;i<=n;i++)
{
	int j=i;
     if(i==1)c=1;
     else
     {
     	c=(c*2)%mod;
     }

	int pos=m[a[i]];
	while(j<=pos)
	{
      pos=max(m[a[j]],pos);
      ++j;
	}

// cout<<"-> "<<j;tr;
	i=j;
	--i;
}




cout<<c;
tr;




 }
  }

