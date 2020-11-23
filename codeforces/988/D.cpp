/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int MAXN=2e9;
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {

//   a  b c    b to a pow t b to c then a to c is the same poer;
int n;
cin>>n;
int a[n+1];
set<int> s;

F(i,n)cin>>a[i],s.insert(a[i]);
// sort(a+1,a+1+n);


// // check for the three;
// std::vector<int> ans;
// for(int i=1;i<=n;i++)
// {
//      int val=a[i];
//      int flag=0;
//      for(int j=1;j<=62;j++)
//      {
//       int first=val-dp[j];
//       int second=val+dp[j];
//            //cout<<first<<" "<<second;tr;
//       if(s.find(first)!=s.end()   && s.find(second)!=s.end())
//       {
//         flag=1;ans.pb(val),ans.pb(first),ans.pb(second);break;
//       }
//      }
//      if(flag)break;
// }



// if(ans.size()==0)
// {
// for(int i=1;i<=n;i++)
// {
//      int val=a[i];
//      int flag=0;
//      for(int j=1;j<=62;j++)
//      {
//       int first=val-dp[j];
//       int second=val+dp[j];

//       if(s.find(first)!=s.end())
//       {
//         ans.pb(val);
//         ans.pb(first);
//         flag=1;
//         break;
//       }
//       else if(s.find(second)!=s.end())
//       {
//         ans.pb(val);
//         ans.pb(second);
//         flag=1;
//         break;
//       }
//      }
//      if(flag)break;
// }




// if(ans.size()==0)cout<<"1\n"<<a[1]<<"\n";
// else
// {
//   cout<<"2";tr;
//   for(auto sd:ans)cout<<sd<<" ";
//     tr;
// }
// }
// else
// {
//   cout<<"3";tr;
//   for(auto sd:ans)cout<<sd<<" ";
//     tr;
// }

int mx=0;
std::vector<int> ans;
for(int i=1;i<=MAXN;i*=2)
{
       F(j,n)
       {
        int count=0;
        auto first=s.find(a[j]-i);
        auto second=s.find(a[j]+i);
          if(first!=s.end())
                count++;
            if(second!=s.end())
                count++;
              if(count>mx)
              {
                mx=count;
                ans.clear();// new array;
                ans.pb(a[j]);
                if(first!=s.end())ans.pb(a[j]-i);
                if(second!=s.end())ans.pb(a[j]+i);
          
              }
       }
}


if(ans.size()==0){cout<<"1\n"<<a[1]<<"\n";continue;}
cout<<ans.size();
tr;
for(auto sd:ans)cout<<sd<<" ";


  tr;
















   }  
 }

