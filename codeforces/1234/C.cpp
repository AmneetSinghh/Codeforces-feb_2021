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
string a,b;
cin>>a;
cin>>b;
int i=0;
int me=0;
int flag=0;
int now=0;
while(true){

	int aa=a[i]-'0';
	int bb=b[i]-'0';
    if(me==0)
    {
    	if(now==1)
          {
          	if(aa<=2){flag=1;break;}
          	++i,me=0,now=0;
          }
          else
          {
             if(aa<=2)me=0,++i,now=0;
             else me=1,now=1;
          }
    } 

    if(me==1)
    {
          if(now==1)
          {
          	if(bb<=2){flag=1;break;}
          	++i,me=1,now=0;
          }
          else
          {
          	if(bb<=2)me=1,++i,now=0;
          	else me=0,now=1;
          }
    }

    if(i==n && me==1)break;
    if(i==n && me==0){flag=1;break;}
}
if(flag==1)cout<<"NO";
else cout<<"YES";
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