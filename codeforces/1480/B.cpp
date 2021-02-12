/* not_stable but Believer */

#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
 
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009
using namespace std;
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;
 
void Not_Stable()
{
 
 int A,B,n;
 cin>>A>>B>>n;
 int a[n+1],b[n+1];
 std::vector<ipair> vc;
 for(int i=1;i<=n;i++)cin>>a[i];
 for(int i=1;i<=n;i++)cin>>b[i],vc.pb({a[i],b[i]});

sort(vc.begin(),vc.end());
for(int i=0;i<vc.size();i++){
  a[i+1]=vc[i].first;
  b[i+1]=vc[i].second;
}
  // smallest health master
 
  int flag=0;
 for(int i=1;i<=n;i++)
 {

  if(i==n){
  // hero is dead or not after killing the last master;
    if(b[i]%A==0){
    b[i]/=A;
    int make=(b[i]-1)*a[i];
    B-=make;
    if(B<=0){flag=1;break;}
   }
   else
   {
    b[i]/=A;++b[i];
    int make=(b[i]-1)*a[i];
    B-=make;
    if(B<=0){flag=1;break;}
  }
    
   

   break;
  }

   if(b[i]%A==0){
    b[i]/=A;
    B-=(b[i]*a[i]);
   }
   else
   {
    b[i]/=A;// matches he we survive.
    ++b[i];
    B-=(b[i]*a[i]);
   }

   if(B<=0){flag=1;break;}
 }


 if(flag==1)cout<<"NO";
 else cout<<"YES";
 tr;
}
 
 
int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}