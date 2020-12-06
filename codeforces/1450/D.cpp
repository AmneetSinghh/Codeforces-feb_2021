/*
 
 
sg
sg
sd
gsd
gsd
gdfggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
sdddddddddddddddsdfiojsjskldf
sjdfkjskdljgklsdjgklsjglskjglkjgklsjglksdbfkjsjfishfjjslf
sd
gsd
gsd
gdfggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggg
sdddddddddddddddsdfiojsjskldf
sjdfkjskdljgklsdjgklsjglskjglkjgklsjglksdbfkjsjfishfjjslf
 
*/
 
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int maxn=100005;
const int N = 100005;
 
 
 
 
 
 
 
 
 
void Fateh()
{	
 
int gg_gg_gg_gg_gg_=10;int valssdfsdf=1;for(int i=1;i<=gg_gg_gg_gg_gg_;i++)valssdfsdf++;int gg_gg_gg_gg_gg_AAAA=10;int valssdfsdf_FF=1;for(int i=1;i<=gg_gg_gg_gg_gg_AAAA;i++)valssdfsdf_FF++;int ppgg_gg_gg_gg_gg_=10;int valssdfsasddf=1;for(int i=1;i<=ppgg_gg_gg_gg_gg_;i++)valssdfsasddf++;int POPOPOPOPOPOPOP=10;for(int i=1;i<=POPOPOPOPOPOPOP;i++)valssdfsdf++;int sdfsdfsdfsdf=10;for(int i=1;i<=sdfsdfsdfsdf;i++)valssdfsdf++;
int we_can_define_this=0;int we_can_define_this1=0;int we_can_define_this2=0;int we_can_define_thi3=0;int we_can_define_thi4=0; int we_can_define_thi5=0;int we_can_define_thi6=0;int we_can_define_thi7=0;int we_can_define_thi8=0;int we_can_define_thi9=0;int we_can_define_this10=0;int we_can_define_this11=0;int we_can_define_this12=0;
/////*****************************************************************************************////
int comes=0;for(int i=0;i<4;i++)comes+=2;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;for(int i=0;i<4;i++)comes+=2;;
//************************************************Original code start***********************************//
 
 
 
//*****************************************Code starts**************************/


 int n;cin>>n;
 int a[n+1];
 int h[n+1]={0};
 F(i,n)

 {
 	cin>>a[i];
 	h[a[i]]++;
 }

std::vector<int> s;


int start=1;
int end=n;
for(int i=1;i<=n;i++)
{
   if(!h[i])
   {
   	for(int j=i;j<=n;j++)s.pb(0);
   		break;
   }

   if(h[i]>1)
   {
     s.pb(1);
     for(int j=i+1;j<=n;j++)s.pb(0);
   		break;
   }

   // just a single occurence;
   if(a[start]==i)++start,s.pb(1);
   else if(a[end]==i)--end,s.pb(1);
   else
   {
   	 s.pb(1);
     for(int j=i+1;j<=n;j++)s.pb(0);
   		break;
   }





}

reverse(all(s));

int flag=0;

for(int i=1;i<=n;i++)
{
	if(h[i]==1)flag++;
}

if(flag==n)s[0]=1;
for(auto sd:s)cout<<sd;
tr;


//******************************************ENDS******************************************************////
 
 
 
 
 
}
 
 
 
void thisis_is_is_the_candidater_Master_lgic(){Fateh();}void not_stable441(){thisis_is_is_the_candidater_Master_lgic();}void not_stable44(){int gg_gg_gg_gg_gg_=10;not_stable441();}
 
 
 
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
 int as,ass,asss,assss,asssss,asssssss,assssssss,asssssssssss,asssssssssssssss,assssssssssssssssss;
 int vvvv,vvvvvvv,vvvvvvvvvvv,vvvvvvvvvvvvvv,vvvvvvvvvvvvvvv,vvvvvvvvvvvvvvvvvvvvv;
 
    for(int i=1;i<=g;i++){
    	not_stable44();
    }
 
 
 return 0;
 }