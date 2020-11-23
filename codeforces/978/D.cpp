/*     not_stable    */
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 1000000000000009
using namespace std;
const int MAXN=2000;
int a[MAXN];
int n,w;
int pos=0;
bool check(int mid)
{

F(i,n)
{
	mid+=a[i];
	if(mid<0){pos=0;return false;}
	if(mid>w){pos=1;return false;}
}
return true;

}

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int t=1;
    while (t--)
    {

//            An arthemetic progression is defiend by first two terms;
    	int n;
    	cin>>n;
    	int a[n+1];
    for(int i=0;i< n;i++)cin>>a[i];
    	   if(n<=2){cout<<"0";tr;continue;}

    	int mi=inf;

    	   for(int i=-1;i<=1;i++)
    	   	{
    	   		for(int j=-1;j<=1;j++)
    	   		{
    	   int 	d = a[1] + j - a[0] - i;
			int s = abs(i);
			int k;
			for (k = 1; k<n; k++)
			{
			int x = abs(a[k] - (a[0] + i + k * d));
				if (x>1) break;
					s += x;
			}
			if (k == n)
				mi = min(mi, s);
    	   }
    	}


    	   if(mi==inf)cout<<"-1";
    	   else cout<<mi;

    	   tr;




    }

}