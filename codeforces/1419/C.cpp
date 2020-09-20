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
 
void Waheguru()
{
int n,x,first=0,second=0,c=0;
cin>>n>>x;
int a[n+1];
F(i,n)cin>>a[i];
int flag=0;
//if the current at least any onen account is infected then it doesnot 
//matter we decrase it or not,  it can't be healed.
// This is the mistake, so always remember read the statement clearly.
// You and rawatds bro, made the same logic, but after getting wa rawatds bro
// readed the statement again, but harry singh going on the wrong
// directoin of thingking.
for(int i=1;i<=n;i++)
{
    if(a[i]<x)first+=(x-a[i]);
    else if(a[i]>x) second+=(a[i]-x);
    else c++;
}
if(c==n)cout<<"0";
else if(first==second || c>=1)cout<<"1";
else cout<<"2";
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