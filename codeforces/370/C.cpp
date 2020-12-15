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
vector<char> vc[200005];
map<int,int> h;
string res="";
 
 
int32_t main() {
 
    io;
  int g=1;
    while (g--){
int n,m;
cin>>n>>m;
int u;
std::vector<int> a,b;
for(int i=1;i<=n;i++)cin>>u,a.pb(u),b.pb(u);
sort(all(a));
sort(all(b));reverse(all(b));
int c=0;

for(int i=0;i<n;i++)
{
       if(a[i]==b[i])
       {
              for(int j=0;j<n;j++)
              {
                     if(b[j]!=b[i] && a[j]!=b[i]){
                            swap(b[j],b[i]);break;}
               }
       }
}


for(int i=0;i<n;i++)if(a[i]!=b[i])++c;
 
cout<<c;
tr;
for(int i=0;i<n;i++)
cout<<a[i]<<" "<<b[i]<<"\n";
 
 
 
 
}
}