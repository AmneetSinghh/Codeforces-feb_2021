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
#define N 100005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */

bool good[N];
int a[N],pre[N],nex[N];
queue<int> q;
vector<int> ans;
void Waheguru()
{
int n;
cin>>n;
F(i,n)cin>>a[i];
F(i,n)good[i]=true,pre[i]=i-1,nex[i]=i+1;
F(i,n-1)if(a[i]>a[i+1])q.push(i);// index;
pre[1]=1;
int c=0;

while(!q.empty())
{
	++c;
	ans.resize(0);
	while(!q.empty())
	{
		int cur=q.front();
		good[nex[cur]]=false;
		ans.pb(nex[cur]);
		q.pop();
	}


	for(auto s:ans)
	{
		int l=pre[s];
	    int r=nex[s];
	    pre[r]=l;
	    nex[l]=r;
	    // Updated the pointers;
	    if(good[l] && good[r] && a[l]>a[r])q.push(l);
	}
}
cout<<c;
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