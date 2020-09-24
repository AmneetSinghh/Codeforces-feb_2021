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
int pre[1000006]={0};
int p[1000006]={0};
void update_prefix_trick(int l,int r,int value)
{
	if(l>r)return;
	pre[l]+=value;//   add it from here
	pre[r+1]-=value;// cut it from here
}
void Waheguru()
{
int n,m;
cin>>n>>m;
F(i,m)cin>>p[i];
for(int i=2;i<=m;i++)
{
  int l=min(p[i],p[i-1]);
  int r=max(p[i],p[i-1]);
  // Do further updations baby
  if(l==r)continue;// this means, we not have to add anything
  update_prefix_trick(1,l-1,r-l);
  update_prefix_trick(l,l,r-1);
  update_prefix_trick(r+1,n,r-l);
  update_prefix_trick(r,r,l);
  update_prefix_trick(l+1,r-1,r-l-1);// in a range

}
F(i,n){
	pre[i]+=pre[i-1];
	cout<<pre[i]<<" ";
}
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