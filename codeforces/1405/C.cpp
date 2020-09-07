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


// Waheguru aaj vadia kra dai contest.
void Waheguru()
{
	int n,k;
	cin>>n>>k;
   string s;
   cin>>s;
   int one=0,zero=0;
   int c1=0,c2=0;
   bool imp=true;
   f(i,k)
   {
   	one=0,zero=0;// if all the ?'s then we can count mere baby
   	for(int j=i;j<n;j+=k)
   	{
   		if(s[j]=='1')one=1;
   		if(s[j]=='0')zero=1;
   	}
   	if(one+zero==2){imp=false;break;}
   	if(one==1)c1++;
   	else if(zero==1)c2++;
   }

  one=c1;
  zero=c2;
  if(zero>k/2 || one>k/2)imp=false;// Both are less than k/2
  int first=k-(one+zero);// left all that are the ?'s
  if(one<k/2)one=one+((k/2)-one),  first-=(((k/2)-one));
  if(first<0)imp=false;

  if(zero<k/2)zero=zero+((k/2)-zero),first-=(((k/2)-zero));
  if(first<0)imp=false;
  if(imp==true)cout<<"YES\n";
  else cout<<"NO\n";

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