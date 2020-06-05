#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define int long long
#define endl '\n'
#define maxn 500005

int32_t main()
{int t=1;while(t--){
	
int n;
cin>>n;
int a[n+1],b[n+1];
for(int i=1;i<=n;i++)
cin>>a[i];
for(int i=1;i<=n;i++)
cin>>b[i];
int f=0;
int l=0,w=0;
for(int i=1;i<=n;i++)
{
   if(b[i]==a[i])continue;
   else if(b[i]<a[i]) w+=(a[i]-b[i]);
   else l+=(b[i]-a[i]);
}
if(w<l)cout<<"NO\n";
else cout<<"YES\n";
}}

