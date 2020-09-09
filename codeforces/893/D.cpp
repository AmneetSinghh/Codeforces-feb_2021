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
#define N 300005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 
 
void Waheguru()
{
int n,d;
cin>>n>>d;
int a[n+1];
F(i,n)cin>>a[i];
 
 
int sum=0,days=0,flag=0;
int pre[n+5]={0};
int pre_mx[n+5]={0};
pre_mx[n+1]=-inf;
 
for(int i=1;i<=n;i++)
pre[i]=pre[i-1]+a[i];
 
for(int i=n;i>=1;i--)
pre_mx[i]=max(pre[i],pre_mx[i+1]);	

int minus=0;
for(int i=1;i<=n;i++)
{
	sum+=a[i];
	pre_mx[i]+=minus;
	if(a[i]==0 && sum<0)
	{
    int add=abs(sum);
    if(d>pre_mx[i])add=max(add,d-pre_mx[i]);
    
    sum+=add;
    days++;
    minus+=add;
 
	}
 
	if(sum>d  ||  (sum<0 && a[i]==0)){flag=1;break;}
 
}
 
 
if(flag)cout<<"-1";
else cout<<days;
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