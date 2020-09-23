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
string s;
cin>>s;
int q;
cin>>q;
set<int> store[100005];
for(int i=0;i<s.size();i++)
store[s[i]-'a'].insert(i);
while(q--)
{
	int t;
	cin>>t;
	if(t==1)
	{
          int pos;string c;
          cin>>pos>>c;
          --pos;
          for(int i=0;i<26;i++)
          {
          	if(store[i].size()){
          	auto v=store[i].find(pos);
          	if(v!=store[i].end()){store[i].erase(v);break;}
          	}
          }
          store[c[0]-'0'-49].insert(pos);// hehheheh
	}
	else
	{
		int lo,ro;cin>>lo>>ro;--lo,--ro;
		// count the lower and the upper pencho
		
		// cout<<"************************************************";
		// tr;
		// for(auto sd:store[0])cout<<sd<<" ";
		// tr;
		// 	for(auto sd:store[1])cout<<sd<<" ";
		// tr;
		// 	for(auto sd:store[2])cout<<sd<<" ";
		// tr;
		int sum=0;
		for(int i=0;i<26;i++)
		{
			if(store[i].size()){
			auto l=store[i].lower_bound(lo);// equal to greater
			auto r=store[i].upper_bound(ro);// equal to greater
			--r;
			
			// cout<<*l<<" "<<*r;
			// tr;
			if(*l>=lo && *r<=ro   &&  *r>=*l)++sum;
			
			// cout<<sum;
			// tr;
			}
		}
		cout<<sum;
		tr;
	}
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