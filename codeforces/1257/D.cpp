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
 
 // smae color nad the differne tcolor


void Waheguru()
{
 int n;
 cin>>n;
 int a[n+2];
 F(i,n)cin>>a[i];
 int h;
 cin>>h;
 int kill[n+2]={0};
 F(i,h)
 {
 	int p,s;
 	cin>>p>>s;
 	kill[s]=max(kill[s],p);// at a particular enduarance what is the max monsters we can kill penchod
 }
 for(int i=n;i>=0;i--)
 kill[i]=max(kill[i],kill[i+1]);

int possible=true;
int ans=0;
F(i,n)
{
 int start=i;
 int monster=a[start];
 int v=1;
 // cout<<i<<" "<<start<<" "<<monster;
 // tr;
 while(start<=n && kill[v]>=monster)
 {
 	++start,++v;
 	monster=max(a[start],monster);
 }
 if(start==i){possible=false;break;}
 else i=start-1,ans++;
}

if(possible==false)cout<<"-1";
else cout<<ans;
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