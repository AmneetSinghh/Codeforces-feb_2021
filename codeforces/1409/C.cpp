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
const int N = 2*1e5+7;
int inf=1e17;


void Waheguru()
{

int n,x,y;
cin>>n>>x>>y;
vector<int> vc;
int mi=y-x;
int ind=-1;
for(int i=n-1;i>=1;i--)
{
  if(mi%i==0)
  {

    int start=x;
    ind=i;
    while(start<=y)
    {
      vc.pb(start);
      start+=(mi/i);
    }
    break;
  }
}

while(vc.size()<n  && x-(mi/ind)>=1)
{
  vc.pb(x-(mi/ind));
  x-=(mi/ind);
}

while(vc.size()<n)
{
  vc.pb(y+(mi/ind));
  y+=(mi/ind);
}
for(auto sd:vc)cout<<sd<<" ";
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