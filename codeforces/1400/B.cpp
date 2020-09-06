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
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
int inf=1e17;

int can(int sword,int war,int price_s,int price_w,int have)
{
int count=0;
 int left=min(have/price_s,sword);
 have-=(left*price_s);
 count+=left;

 if(have>0)
 {
    left=min(have/price_w,war);
    have-=(left*price_w);
    count+=left;
 }
 return count;

}


void Waheguru()
{
int p,f,cnts,cntw,s,w;
cin>>p>>f>>cnts>>cntw>>s>>w;
int mx=0;
for(int take=0;take<=cnts;take++)
{
   if(take*s<=p)
   {
      int P=p;
      int em=min(((P-(take*s))/w),cntw);
      mx=max(mx,take+em+max(can(cnts-take,cntw-em,s,w,f),can(cntw-em,cnts-take,w,s,f)));

   }
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