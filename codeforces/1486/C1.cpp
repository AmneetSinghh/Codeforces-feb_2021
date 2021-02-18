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


int  query(int l,int r){
  int val;
  cout<<"? "<<l<<" "<<r<<endl;
  fflush(stdout);
  cin>>val;
  return val;
}
void Not_Stable()
{
  // cout<<"lets start!";
  int n;
  cin>>n;
  int l=1;
  int r=n;
  int ans=0;
  map<ipair,int> mp;
  while(l<r){
    int mid=(l+r)/2;
    int first;
    if(!mp[{l,r}])first=query(l,r),mp[{l,r}]=first;
    else first=mp[{l,r}];

    if(r-l+1==3){
      int temp=0;
      if(first==l){
        temp=query(l+1,r);
        if(l+1==temp){l=r;break;}
        else {++l;break;}
      }
      else if(l+1==first){
        temp=query(l+1,r);
        if(l+1==temp){l=r;break;}
        else {break;}
      }
      else if(r==first){
         temp=query(l,r-1);
        if(l+1==temp){break;}
        else {++l;break;}
      }
    }

    if(r-l+1==2){
      if(first==l){l=r;break;}
      else break;
    }



    int second=0,flag=0;
    if(first>=l && first<=mid)
      {
        if(!mp[{l,mid}])second=query(l,mid),flag=1,mp[{l,mid}]=second;
        else second=mp[{l,mid}],flag=1;
      }
    else 
      {
        if(!mp[{mid+1,r}])second=query(mid+1,r),flag=2,mp[{mid+1,r}]=second;
        else second=mp[{mid+1,r}],flag=2;
      }
    
    if(first==second){
      if(flag==1)r=mid;// find till mid;
      else l=mid+1;
    }else{// first!=second;
      if(flag==1)l=mid+1;
      else r=mid;
    }


    // cout<<l<<" "<<r;tr;
  }

  cout<<"! "<<l<<endl;

}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}