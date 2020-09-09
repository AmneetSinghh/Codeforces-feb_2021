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
 
bool decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
    int i = 0; 
    while (n > 0) { 
          binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
 
    int ans=0;
    int one=0,zero=0;
    int flag=0;
 
      for (int j = i - 1; j >= 0; j--)   
        {
           if(binaryNum[j]==1)one++;
           else if(binaryNum[j]==0)
           {
           	       // check
                 	zero=0;
           	      for(int k=j;k>=0;k--)
           	      {
           	      	if(binaryNum[k]==0)zero++;
           	      	else break;
           	      }
           	      break;
           }
        }
 
 
int count=0;
 for (int j = i - 1; j >= 0; j--) 
 ++count;
 
if(count==one+zero && zero+1==one)return true;
 
return false;
} 
   int vis[100005]={0};
	vector<int> G[100005];
	   int a[100005];
	   int mi=inf;
void dfs(int s)
{
   vis[s]=1;
   mi=min(a[s],mi);
   for(auto c:G[s])
   {
       if(vis[c]==1)continue;
       dfs(c);
   }
}
void Waheguru()
{
 
 
   int n,m;
   cin>>n>>m;
   F(i,n)cin>>a[i];
   F(i,m)
   {
   	int u,v;
   	cin>>u>>v;
   	G[u].pb(v),G[v].pb(u);
   }
   int s=0;
   for(int i=1;i<=n;i++)
   {
     mi=inf;
   	 if(!vis[i])dfs(i),s+=mi;
   }
 
 
   cout<<s;tr;
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