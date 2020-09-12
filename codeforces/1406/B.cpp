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
#define inf 100000000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
void Waheguru()
{
int n;
cin>>n;
vector<int> a,b,c;
 F(i,n)
 {
  int v;
  cin>>v;
  if(v>=0)a.pb(v);
  else b.pb(v),c.pb(v);
 }

 sort(a.begin(),a.end(),greater<int>());
 sort(b.begin(),b.end());
 sort(c.begin(),c.end(),greater<int>());
 vector<int> final,final2,final3;
 int five=5;
 for(int i=0;i<a.size();i++)
 {
  if(i>4)break;
  final.pb(a[i]),final2.pb(a[i]);
 }


  for(int i=0;i<b.size();i++)
  {
  if(i>4)break;
  final.pb(b[i]);
  }

  for(int i=0;i<c.size();i++)
  {
  if(i>4)break;
  final2.pb(c[i]);
  }


for(int i=0,j=b.size()-1;i<b.size();i++,j--)
  {
     if(j==i){final3.pb(b[i]);break;}
     else if(j<i)break;
     else final3.pb(b[i]),final3.pb(b[j]);

     if(final3.size()>=10)break;
  }
  

int mx=-inf;
 for(int i=0;i<final.size();i++)
  for(int j=i+1;j<final.size();j++)
    for(int k=j+1;k<final.size();k++)
      for(int l=k+1;l<final.size();l++)
        for(int m=l+1;m<final.size();m++)
          mx=max(mx,final[i]*final[j]*final[k]*final[l]*final[m]);


 for(int i=0;i<final2.size();i++)
  for(int j=i+1;j<final2.size();j++)
    for(int k=j+1;k<final2.size();k++)
      for(int l=k+1;l<final2.size();l++)
        for(int m=l+1;m<final2.size();m++)
          mx=max(mx,final2[i]*final2[j]*final2[k]*final2[l]*final2[m]);




for(int i=0;i<final3.size();i++)
  for(int j=i+1;j<final3.size();j++)
    for(int k=j+1;k<final3.size();k++)
      for(int l=k+1;l<final3.size();l++)
        for(int m=l+1;m<final3.size();m++)
          mx=max(mx,final3[i]*final3[j]*final3[k]*final3[l]*final3[m]);




        cout<<mx;
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