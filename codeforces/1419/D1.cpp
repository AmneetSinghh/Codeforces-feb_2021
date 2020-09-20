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
int n,val;
vector<int> a,b;
cin>>n;
F(i,n)cin>>val,a.pb(val),b.pb(val);
int dp[n+1]={0};
int flag=0;
sort(a.begin(),a.end());
sort(b.begin(),b.end(),greater<int>());
int first=0,second=0;
for(int i=1;i<=n;i++)
{
	if(!flag)dp[i]=b[first],first++;
	else dp[i]=a[second],++second;
	flag^=1;
}

int c=0;
for(int i=1;i<=n;i++)
	if(i>1 && i<n  && dp[i]<dp[i-1] && dp[i]<dp[i+1])++c;

cout<<c;
tr;
F(i,n)cout<<dp[i]<<" ";
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