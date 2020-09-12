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


void Waheguru()
{
 
  int n;
  cin>>n;
  int a[n+1];
  int hash[101]={0};
  F(i,n)cin>>a[i],hash[a[i]]++;
  vector<int> first,second;
  for(int i=0;i<=100;i++)
  {
    if(hash[i])
    {
       first.pb(i);
       hash[i]--;
       if(hash[i])second.pb(i);
    }
  }

  int ans=0;
  int c=-1;
  for(int i=0;i<first.size();i++){
    if(i!=first[i]){c=i;break;}}
  if(c==-1)ans+=first.size();
  else ans+=c;
    c=-1;
     for(int i=0;i<second.size();i++){
    if(i!=second[i]){c=i;break;}}
  if(c==-1)ans+=second.size();
  else ans+=c;
    c=-1;

    cout<<ans;
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