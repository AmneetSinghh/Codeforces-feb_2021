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

map<ipair,int> mp;
int val;
int n;
int  query(int l,int r){
  if(mp.count({l,r}))return mp[{l,r}];
  if(l==r)return -1;// next vlaues;
  cout<<"? "<<l<<" "<<r<<endl;
  fflush(stdout);
  cin>>val;
  return mp[{l,r}]=val;
}

void answer(int x){
  cout << "! " << x << endl;
  exit(0);
}
void Not_Stable()
{
  // cout<<"lets start!";
 cin>>n;
 int cal=query(1,n);
 int ans=0;
 if(cal==query(1,cal)){
  int l=1,r=cal-1;// left of it baby;
  while(l<=r){
    int mid=(l+r)/2;
    if(query(mid,cal)==cal)ans=mid,l=mid+1;
    else r=mid-1;
  }
 }else{
  int l=cal+1,r=n; 
  while(l<=r){
    int mid=(l+r)/2;
    if(query(cal,mid)==cal)ans=mid,r=mid-1;
    else l=mid+1;
  }
 }
 answer(ans);
}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}