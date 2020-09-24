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
#define mod 998244353
using namespace std;
#define tr cout<<"\n" 
#define br break
#define N 1000000 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 

void Waheguru()
{

int n,q;
cin>>n>>q;
int a[n+1];
int mx=0;
F(i,n)cin>>a[i],mx=max(a[i],mx);
int flag=0,cur=0;
vector<int> vc;

if(n>=2  && a[1]>=a[2])cur=a[1];
for(int i=2;i<=n;i++)
{
   if(a[i]>a[i-1] && flag==0)cur=a[i];
   else if(a[i]<a[i-1] && flag==0)
   {
    if(cur>0){
      vc.pb(cur);
      flag=1;
      cur=a[i];
   }
  }
   else if(a[i]<a[i-1] && flag==1)cur=a[i];
   else if(a[i]>a[i-1] && flag==1)
   {
    flag=0;
    vc.pb(cur);
    cur=a[i];
    flag=0;
   }
   else continue;
}


if(vc.size()%2==0 && vc.size()>0 && cur!=vc[vc.size()-1])vc.pb(cur);
// for(auto sd:vc)cout<<sd<<" ";
//     tr;


int second=0;

if(vc.size()%2==0  && vc.size()>0)
{
    int flag=0;
    int second=vc[0];
    for(int i=1;i<vc.size()-1;i++)
    {
         if(flag==0)second-=vc[i],flag=1;
          else second+=vc[i],flag=0;
    }

    mx=max(second,mx);
}
else if(vc.size()>0 && vc.size()%2==1)
{
     int flag=0;
    int second=vc[0];
    for(int i=1;i<vc.size();i++)
    {
         if(flag==0)second-=vc[i],flag=1;
          else second+=vc[i],flag=0;
    }

    mx=max(second,mx);
}
cout<<mx;
tr;


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