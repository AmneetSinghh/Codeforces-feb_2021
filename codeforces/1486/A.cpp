/* It's Practice time */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 1000000000000000000
#define inf 1000000000009
using namespace std;

//                  Make your segment tree library;// for all the basic operations;
/*
**Learnings** while solving 250:

1: s=a+b=(a^b)+(a&b)*2;
(a&b)=((a+b)-(a^b))/2;
*/



void Not_Stable()
{
  // cout<<"lets start!";
int n;
cin>>n;
int a[n+2];
F(i,n)cin>>a[i];
int value=0;
int take=0;
int flag=0;
F(i,n){

  if(a[i]<value){
    if(a[i]+take<value){flag=1;break;}
    int temp=value;
    temp-=a[i];
    take-=temp;
  }
  else{
    take+=(a[i]-value);
  }

  ++value;


}
if(flag)cout<<"NO";
else cout<<"YES";

tr;
}



int32_t main() {
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}