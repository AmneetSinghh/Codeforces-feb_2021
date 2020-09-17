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
#define N 200005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */



void Waheguru()
{
   int n,m;
   cin>>n>>m;
   int a[m+1],sum=0;
   F(i,m)cin>>a[i],sum+=a[i];
   int prev=1,next=1;
   // These after oone posiiont fill the next can't be the value whcih will fill this value penchod
   for(int i=0;i<m;i++){
   	if(a[i+1]>n-i){cout<<"-1";return;}
   }
   if(sum<n || m>n)cout<<"-1\n";
   else
   {
     for(int i=1;i<=m;i++)
     {
         	cout<<next<<" ";
         	sum-=a[i];
         	if(sum<n-next)next=next+1+((n-next)-sum);
         	else next=prev+1;
       

       prev=next;
     }
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