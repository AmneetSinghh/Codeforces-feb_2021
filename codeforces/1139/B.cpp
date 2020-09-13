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
#define N 100005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 
//* ************************************************* Think Simple **********************************************************//
//************************************************HINTS******************************************************//
/* 
1. If we have to make Xor of 3 elements -> X, 3 elements will be Unique, ans->    (z^x^y)^y^z;  this will give us X
2. 
*/
 
 
 
void Waheguru()
{
 
  int n;
  cin>>n;
  int a[n+1];
  F(i,n)cin>>a[i];
 
int c=a[n];
int cur=a[n];
  for(int i=n-1;i>=1;i--)
  {
       --cur;
       if(cur<=0)break;
       if(a[i]<=cur)c+=a[i],cur=a[i];
       else c+=cur;
  }
  cout<<c;
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