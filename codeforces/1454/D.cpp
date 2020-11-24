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
const int maxn=200001;







void count_div(int n)
{
    int cnt = 0;
    std::vector<int> vc;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
              int first=i;
              int second=n/i;
              int last=n;
              std::vector<int> temp;
              int pre=last;
              while(last%first==0)
              {
                int to;
                if(last%first==0)to=last/first;
                else break;
                if(to%first==0)last/=first,temp.pb(first);
                else {temp.pb(last);break;}
              }
              if(temp.size()>vc.size())
              {
                vc.clear();
                for(auto sd:temp)vc.pb(sd);
              }



              }
              


        }
    






  if(vc.size()==0)cout<<"1\n"<<n<<"\n";
  else
  {
    cout<<vc.size();tr;
    for(auto sd:vc)cout<<sd<<" ";
    tr;
  }
 
    
}
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t;cin>>t;
    while (t--)
    {
 
  int n;
  cin>>n;
  count_div(n);
 
 
 }
 }