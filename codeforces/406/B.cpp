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
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
#define N 1000000 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 

// set is  {1,X}, {2,3,X},  {4,5,6,7,X}  <- X means not choose any


void Waheguru()
{
  
// This question is all about the symetry of the number pencho
   int n,x;cin>>n;
   int vis[1000006]={0};
   F(i,n)cin>>x,vis[x]++;
   cout<<n;tr;
   int left=0;
   F(i,N)
   {
   	if(vis[i] && !vis[1000001-i])cout<<1000001-i<<" ";
   	else if(vis[i] && vis[1000001-i])++left;
   }
   F(i,N)
   {
     if(!vis[i]  && !vis[1000001-i]  && left>0)cout<<i<<" "<<1000001-i<<" ",     left-=2;
   }
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