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
 
int n,k;
cin>>n>>k;
// if(n==0)cout<<"Bob";
// else if(n>=k)
// {
// 	if(n%k==0 || n-1==0 || n-2==0)cout<<"Alice";
// 	else 
// 	{
//          // this case
// 		// k<n
// 		int flag=0;
// 		int cast=((k+1)-2);
// 		if(cast%3==0)flag=1;
// 		else flag=0;// this is hte losing position penchod
// 		if(flag==0)
// 		{
// 			int ans=n-(k+1);
// 			if(ans%3==0 || (ans-k)%3==0)cout<<"Bob";
// 			else cout<<"Alice";
// 		}
// 		else
// 		{
// 			// this is alice/; it means
// 			if(k+1==n)cout<<"Alice\n";
// 			else if(k+2==n)
// 			{
// 				int cast=((k+2)-2);
// 				flag=0;
// 		        if(cast%3==0)flag=1;
// 		        else flag=0;
// 		        if(flag==0)
// 		       {
// 			int ans=n-(k+2);
// 			if(ans%3==0 || (ans-k)%3==0)cout<<"Bob";
// 			else cout<<"Alice";
// 		       }
 
 
// 			}
// 			else
// 			{
//             int ans=n-(k+3);
// 			if(ans%3==0 || (ans-k)%3==0)cout<<"Bob";
// 			else cout<<"Alice";
// 			}
// 		}
 
// 	}
// }
// else 
// {
//      // When alise will win baby
// 	   // k>n;
// 	if(n%3==0)cout<<"Bob";
// 	else cout<<"Alice";
 
 
 
// }
 
 
 
if(k%3==0)
{
     // W L W W L W W L
     /// this is the cycle k+1
	int ans=n%(k+1);
	if(ans%3==0 && ans!=k)cout<<"Bob";
	else cout<<"Alice";
 
}
else
{
	if(n%3==0)cout<<"Bob";
	else cout<<"Alice";
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