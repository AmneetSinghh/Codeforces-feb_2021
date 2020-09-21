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
 bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} 
void Waheguru()
{
int n;
cin>>n;
// cout<<"->  "<<n;tr;
set<int> s;
for(int i=2;i<=sqrt(n);i++)if(n%i==0)s.insert(i),s.insert(n/i); 	
if(s.size()<=0){cout<<n<<"\n"<<"0\n";}
else if(s.size()<=1){cout<<sqrt(n)<<" "<<n<<"\n"<<"0\n";}
else if(s.size()<=2)
{
auto first=*s.begin();
auto temp=s.begin();
++temp;
auto second=*temp;

int gm=__gcd(__gcd(first,second),first*second);
if(gm!=1) cout<<first<<" "<<second<<" "<<first*second<<"\n"<<"0\n";
else      cout<<first<<" "<<second<<" "<<first*second<<"\n"<<"1\n";
}
else if(s.size()>=3)
{


       s.insert(n);
       vector<int> prime;
       for(auto sd:s)if(isPrime(sd))prime.pb(sd);
       	if(prime.size()<=1)
       	{
       		for(auto sd:s)cout<<sd<<" ";
       			tr;
       		cout<<"0";
       		tr;
       		return;
       	}
       std::vector<int> v[20];
       int j=1;
       v[j].pb(prime[0]);
       v[j].pb(prime[0]*prime[1]);
       v[j].pb(prime[1]);
       ++j;
       s.erase(prime[0]);
       s.erase(prime[0]*prime[1]);
       s.erase(prime[1]);
      
       for(int k=2;k<prime.size();k++)
       {
       	 v[j].pb(prime[k]*prime[0]);
       	 v[j].pb(prime[k]);
       	 v[j].pb(prime[k]*prime[1]);
       	 ++j;
         s.erase(prime[k]);
         s.erase(prime[k]*prime[1]);
         s.erase(prime[k]*prime[0]);
       }

       for(auto cur:s)
       {
        int id=0;
        for(int k=0;k<prime.size();k++)
      	{
      		if(cur%prime[k]==0){id=k;break;}
      	}
      	if(id==0)v[1].insert(v[1].begin(),cur);
      	else if(id==1)v[1].pb(cur);
      	else v[id].insert(v[id].begin()+1,cur);
       }
       int flag=0;
       for(int k=2;k<j;k++)
       {
       	  if(!flag)
       	  {
       	  	for(int t=v[k].size()-1;t>=0;t--)v[1].pb(v[k][t]);// 3-> 2
       	  }
          else
          {
          	for(auto sd:v[k])v[1].pb(sd);// 3-> 2
          }
          flag^=1;
       }

       for(auto sd:v[1])cout<<sd<<" ";
       	tr;
     cout<<"0";
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