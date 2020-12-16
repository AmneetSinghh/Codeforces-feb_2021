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
int left=n-11;
int c=0;
for(int i=0;i<=left;i++)if(s[i]=='8')++c;

// cout<<c<<" "<<left;tr;
if(left%2==0)left/=2;
else left/=2,--left;




if(c>left)
{
    cout<<"YES";
}
else cout<<"NO";


tr;


}
}