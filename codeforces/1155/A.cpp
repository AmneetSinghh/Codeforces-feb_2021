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

int n;cin>>n;
string s;cin>>s;
char mi='z';
int l=-1,r=-1;
for(int i=0;i<n;i++)
{
  if(i==0)mi=s[i],l=i;
  else
  {
    if(s[i]<mi)
    {
      r=i;break;
    }

    if(s[i]>mi)mi=s[i],l=i;
    
  }
}


if(l!=-1 && r!=-1)cout<<"YES\n"<<l+1<<" "<<r+1;
else cout<<"NO";


tr;


}
}