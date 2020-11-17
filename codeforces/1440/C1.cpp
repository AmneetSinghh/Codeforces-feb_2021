// Time for the Linked-List



#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back

#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009

using namespace std;
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;


void Not_Stable()
{
 int n,mm;cin>>n>>mm;
 char a[n+1][mm+1];
 F(i,n)F(j,mm)cin>>a[i][j];

 // 2 2 blocks;
 std::vector<std::vector<int> > v;
 for(int i=1;i<=n-1;i++)
 {
   for(int j=2;j<=mm;j++)
   {
     // no zero;
   	int l=a[i][j-1]-'0';// 11
   	int r=a[i][j]-'0';//12
   	int l1=a[i+1][j-1]-'0';//21
   	int l2=a[i+1][j]-'0';//22
   	int c=0;
   	if(l==0)c++;	if(l1==0)c++;	if(l2==0)c++;	if(r==0)c++;

   	if(c==0)
   	{
       std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j);v.pb(m);//l l1 l2
       m.clear();
       m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j);v.pb(m);//l r l2
 m.clear();       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);// l l1 r
 m.clear();       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r

   	}// only one zero;
   	else if(c==1)
   	{
        if(l==1 && l1==1 &&r==1)
        { std::vector<int> m;
       m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
        else if(l==1 && l2==1 &&r==1)
        {
        	std::vector<int> m;
       m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
        else if(l==1 && l1==1 &&l2==1)
        {
               std::vector<int> m;
       m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1);v.pb(m);//l2 l1 r
        }
        else if(l1==1 && l2==1 &&r==1)
        {
         std::vector<int> m;
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
   	}
   	else if(c==3)
   	{
   		// 3 zeros;// convert to one then go for the one baby
   		 if(l==0 && l1==0 &&r==0)
        { std::vector<int> m;
       m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
        else if(l==0 && l2==0 &&r==0)
        {
        	std::vector<int> m;
       m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }
        else if(l==0 && l1==0 &&l2==0)
        {
               std::vector<int> m;
       m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1);v.pb(m);//l2 l1 r
        }
        else if(l1==0 && l2==0 &&r==0)
        {
         std::vector<int> m;
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        }


        std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j);v.pb(m);//l l1 l2
       m.clear();
       m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j);v.pb(m);//l r l2
 m.clear();       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);// l l1 r
 m.clear();       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r



   	}
   	else if(c==2)
   	{
   		// 6 cases;
   		if(l==0 && l2==0)
   		{
   			std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1);v.pb(m);//l2 l1 r
   		}
   		else if(l1==0 && r==0)
   		{
   			std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
        m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
   		}
   		else if(l==0 && r==0)
   		{
   		std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i+1),m.pb(j);v.pb(m);//l2 l1 r
        m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j),m.pb(i),m.pb(j-1);v.pb(m);//l2 l1 r
   		}
   		else if(l1==0 && l2==0)
   		{
   			std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
   		}


   		else if(l1==0 && l==0)
   		{
         std::vector<int> m;
       m.pb(i),m.pb(j-1),m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i),m.pb(j-1),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
   		}
   		else if(r==0 && l2==0)
   		{
       std::vector<int> m;
       m.pb(i),m.pb(j),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j-1);v.pb(m);//l2 l1 r
       m.clear();
       m.pb(i+1),m.pb(j-1),m.pb(i+1),m.pb(j),m.pb(i),m.pb(j);v.pb(m);//l2 l1 r
   		}
   	}


   	   	a[i][j]='0',a[i][j-1]='0',a[i+1][j-1]='0',a[i+1][j]='0';


   }
 }

cout<<v.size();
tr;
 for(int i=0;i<v.size();i++)
 {
 	for(auto sd:v[i])cout<<sd<<" ";
 		tr;
 }




}


int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}