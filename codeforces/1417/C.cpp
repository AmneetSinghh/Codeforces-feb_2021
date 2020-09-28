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
    int n,val=0;
    cin>>n;
    int a[n+1];
    set<int> pos[n+1];
    F(i,n)cin>>a[i],pos[a[i]].insert(i),val=max(a[i],val);
    int ans[n+1]={0};
    for(int i=1;i<=val;i++)
    {
           if(!pos[i].size())continue;
           pos[i].insert(0); pos[i].insert(n+1);
          int pre=0,mx=0;
          for(auto sd:pos[i])mx=max(sd-pre,mx),pre=sd;
          for(int j=mx;j<=n;j++)
          {
            if(ans[j]!=0)break;
            ans[j]=i;
          }
    }
    
    
   for(int i=1;i<=n;i++)
   {
    if(ans[i]==0)cout<<"-1 ";
    else cout<<ans[i]<<" ";
   }tr;

}




 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Waheguru();
    return 0;
}