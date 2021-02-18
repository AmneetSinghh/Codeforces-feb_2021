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

bool cmp(ipair &a,ipair &b){
  if(a.first>b.first)return true;
  return false;
}

void Not_Stable()
{
   
   int n,m,val,as,ii=0,jj=0,pre=-1,index=0;
   cin>>n>>m;
    std::vector<int> asc;// ascending
    std::vector<int> dsc;// descnding
    std::vector<ipair> vc;// for managers;
   int a[n+1],hash[n+1]={0},rip[n+1]={0};
   F(i,n)cin>>a[i];
   F(i,m){
    cin>>as>>val;
    hash[val]=as;
    rip[val]=i;
  }

   for(int i=n;i>=1;i--){
   if(!hash[i])continue;
   if(pre==-1){
   F(j,i)asc.pb(a[j]),dsc.pb(a[j]);
   sort(all(asc));
   sort(all(dsc));
   reverse(all(dsc));
    pre=hash[i];
    val=i;
    index=val;//      1 2 3 4 5 6 7 8 9 10
    }
    else{
      int range=val-i;// check this is before it or after it pencho;
      if(rip[i]<rip[val])continue;
      while(range){
        if(pre==2){a[index]=asc[ii],++ii;}
        if(pre==1){a[index]=dsc[jj],++jj;}
        --index;
        --range;
      }

      pre=hash[i];
      val=i;
    }
   }
        int range=val;
        while(range){
        if(pre==2){a[index]=asc[ii],++ii;}
        if(pre==1){a[index]=dsc[jj],++jj;}
        --index;
        --range;
      }

     F(i,n)cout<<a[i]<<" ";
     tr;
}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}