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
	int n;
	cin>>n;
string s;
cin>>s;
int o_e=0,o_o=0,e_e=0,e_o=0;
for(int i=0;i<s.size();i++)
{
  if(i%2==0)
  {
  	if((s[i]-'0')%2==0)o_e++;
  	else o_o++;
  }
  else{
 
  	if((s[i]-'0')%2==0)e_e++;
  	else e_o++;
  }
}
 
if(n==1)
{
	if((s[0]-'0')%2==0)cout<<"2";
	else cout<<"1";
}
else{
    
    if(n%2==0)
    {
           if(e_e>0)cout<<"2";
           else cout<<"1";
    }
    else
    {
    	if(o_o>0)cout<<"1";
    	else cout<<"2";
    }
 
 
 
 
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
    int g;cin>>g;
    while (g--)Waheguru();
    return 0;
}