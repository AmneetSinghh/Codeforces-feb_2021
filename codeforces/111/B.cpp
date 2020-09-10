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
	int n;
	cin>>n;
    set<int> s[100005];
	F(i,n)
	{
         int x,y,ans=0,c=0;
         cin>>x>>y;
         set<int> m;
         for(int j=1;j<=sqrt(x);j++)
         {
         	if(x%j==0)
         	{
         		s[j].insert(i);
         		s[x/j].insert(i);
         		m.insert(j);
         		m.insert(x/j);
         		c+=2;
         		if(j*j==x)--c;
         	}
         }
         m.insert(x);
         s[x].insert(i);
         if(y==0)cout<<c;
         else
         {
              for(auto cur:m)
              {
              	if(s[cur].size()==0){++ans;continue;}
                auto lo=s[cur].lower_bound(i-y);
                if(lo==s[cur].end()){++ans;continue;}
                if(*lo>=i-y && *lo<=i-1)continue;
                
                ++ans;
              }
              cout<<ans;
         }
         tr;


	}
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