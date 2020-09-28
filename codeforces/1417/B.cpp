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
#define tr cout<<"\n" 
#define br break
#define all(v) v.begin(),v.end()
#define inf 100005
#define ff first
#define ss second
#define br break
using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 
 
void Waheguru()
{
int n,t;
cin>>n>>t;
std::vector<int> aa,bb;
int a[n+1];
F(i,n)cin>>a[i];
int vala=0,flag=0;
// shit case
if(t==0)
{
    int c=0;
    F(i,n)if(a[i]==0)++c;
    c=(c+1)/2;
    int as[n+1]={0};
    F(i,n)if(a[i]==0 && c )--c,as[i]=1;
    F(i,n)cout<<as[i]<<" ";
    tr;
    return;
}
 
 
 
F(i,n)if(t%2==0 && a[i]==t/2)vala++;
// big
for(int i=n;i>=1;i--)if(a[i]>=t)aa.pb(a[i]);
// zeros
for(int i=n;i>=1;i--)if(a[i]==0)bb.pb(a[i]);
// if it this case.
if(vala>1)
{
for(int i=n;i>=1;i--)
{
    if(flag==0){if(t%2==0 && a[i]==t/2){aa.pb(a[i]);flag=1;}}
    else if(flag==1){if(t%2==0 && a[i]==t/2){bb.pb(a[i]);flag=0;}}
}
}
 
 
map<int,int> vis,total;
F(i,n)total[a[i]]++;
for(auto sd:aa)total[sd]--;
for(auto sd:bb)total[sd]--;
for(auto c:total)
{
    if(!vis[c.first])
    {
        vis[c.first]++;
        F(i,c.second)aa.pb(c.first);// this is the first value;
        if(!vis[t-c.first]   && total[t-c.first])
        {
            F(i,total[t-c.first])bb.pb(t-c.first);
            vis[t-c.first]++;
        }
    }
}
 
 
int to[n+1]={0};
map<int,int> bbb;
for(auto sd:bb)bbb[sd]++;
for(int i=1;i<=n;i++)
if(bbb[a[i]])bbb[a[i]]--,to[i]=1;
 
 
F(i,n)cout<<to[i]<<" ";
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