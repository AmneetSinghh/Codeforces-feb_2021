
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
const int MAXN=200005;


int let_count(int x){
  int ans=0;
  while(x % 3 == 0){
    ans++;
    x /= 3;
  }
  return ans;
}
bool cmp(ipair &a,ipair &b)
{
	if(a.first>b.first)return true;
	else if(a.first==b.first)
	{
          if(a.second<b.second)return true;
          else return false;
	}
	return false;
}





int  n,m;
vector<int> G[MAXN] ;
bool vis[MAXN] ;
vector<int> comp ;
int ans=0;
void dfs(int s,int p)
{
    vis[s]=true;
    comp.pb(s);
    for(auto c:G[s]) 
    {
        if(!vis[c])
        	{
        		dfs(c,s);
        	}

        	// else if(c!=p)return true;
    }
    // return false;
}

void compo(){
   for(int i=1;i<=n;i++)vis[i]=false;
   for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
        	dfs(i,0);
            // for(auto sd:comp)cout<<sd<<" ";tr;

            // just we have to cehck the dgerr
            	int pos=0;
            for(auto sd:comp)
            {
            	if(G[sd].size()!=2)pos=-1;
            }
            if(pos==0)ans++;
            comp.clear();


        }
    }
    cout<<ans;tr;
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
    int n;cin>> n;
    int a[n+1];
    F(i,n)cin>>a[i];
     map<int,int> m;
     map<int,int> pm;
int mx=0,start=0;
    F(i,n)
    {
      int v=a[i];
      m[v]=m[v-1]+1;
      if(mx<m[v])mx=m[v],start=v;
    }
    vector<int> res;
	for (int i = n; i >= 1; i--) {
		if (a[i] == start) {
			res.push_back(i);
			--start;
		}
	}
	reverse(res.begin(), res.end());
	
	cout<<mx;tr;
	for (auto it : res)cout<<it<<" ";
		tr;




    }

}