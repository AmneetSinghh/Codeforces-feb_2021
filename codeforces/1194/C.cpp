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
	string s,t,p;
	cin>>s>>t>>p;
	int flag=0;
	int start=0;
	int has[27]={0},has1[27]={0};
for(int i=0;i<s.size();i++)has[s[i]-'a']++;
for(int i=0;i<t.size();i++)has1[t[i]-'a']++;
 
	for(int i=0;i<27;i++)
	{
		if(has[i]>has1[i])flag=1;
	}
 
 
 
	for(int i=0;i<s.size();i++)
	{
		int tom=0;
 
         for(int j=start;j<t.size();j++)
         {
           if(t[j]==s[i]){tom=1;start=j+1;break;}
         }
         if(tom==0){flag=1;break;}
	}  
 
	if(flag==1)cout<<"NO\n";
	else
	{
       int b[27]={0};
       for(int i=0;i<27;i++)has1[i]-=has[i];
       string res="";
       	 for(int g=0;g<p.size();g++)b[p[g]-'a']++;
 
 
       	 flag=0;
 
       for(int i=0;i<26;i++)
       {
           if(has1[i]>b[i])flag=1;
       }
       if(flag==1)cout<<"NO";
       else cout<<"YES";
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
    int g;cin>>g;
    while (g--)Waheguru();
    return 0;
}