/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/
 
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define tr cout<<"\n" 
#define br break
#define all(v) v.begin(),v.end()
#define inf 100005
#define ff first
#define ss second
#define br break
using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */

void Waheguru()
{
  int n,w,h,x,y;
  cin>>n>>h>>w;
  std::vector<pair<ipair,int>> en;
  f(i,n)
  {
    cin>>x>>y;
    if(x>h && y>w)en.pb({{x,y},i+1});
}
if(en.size()==0){cout<<"0";return;}
  sort(all(en));

    int dp[n+1];
  int parent[n+1]={0};
  f(i,n+1)parent[i]=i;
    f(i,en.size())dp[i]=1;

   for(int i=0;i<en.size();i++){
    for(int j=0;j<i;j++){
        if(en[i].ff.ff>en[j].ff.ff && en[i].ff.ss>en[j].ff.ss   && dp[i]<dp[j]+1)
            dp[i]=dp[j]+1,parent[i]=j;
    }
  }


int  mx=0,id=-1;
n=en.size();
f(i,en.size())if(dp[i]>=mx)mx=dp[i],id=i;
vector<int> vc;
while(true){
    if(parent[id]!=id){
        vc.pb(en[id].ss);
        id=parent[id];
    }
    else
    {
       vc.pb(en[id].ss);
       break;
    }
}
reverse(all(vc));
cout<<mx;
tr;
for(auto sd:vc)cout<<sd<<" ";
    tr;





}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}