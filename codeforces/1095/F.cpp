#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,pair<int,int>>
#define pb push_back
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<endl;
#define mod 1000000007
#define inf 10000000000000001
using namespace std;

std::vector<pair<int,pair<int,int> > > edges;
int parent[200005]={0};
int rnk[200005]={0};
int find(int u) 
    { 
        if (u != parent[u]) 
            parent[u] = find(parent[u]); 
        return parent[u]; 
    } 

    void merge(int x, int y) 
    { 
        x = find(x), y = find(y); 
        if (rnk[x] > rnk[y]) 
            parent[y] = x; 
        else
            parent[x] = y; 
        if (rnk[x] == rnk[y]) 
            rnk[y]++; 
    } 
int kruskalMST() 
{ 
    int mst_wt = 0;
    sort(all(edges));
    vector< pair<int, pair<int,int> > >::iterator it; 
    for (it=edges.begin(); it!=edges.end(); it++) 
    { 
        int u = it->second.first; 
        int v = it->second.second; 
        int set_u = find(u); 
        int set_v = find(v); 
        if (set_u != set_v) 
        { 
            mst_wt += it->first; 
            merge(set_u, set_v); 
        } 
    } 
    return mst_wt; 
} 

int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);

#endif
    io;
   int t=1;
    while (t--){
    int n,m;
    cin>>n>>m;
    int a[n+1];
    int mi=inf,ind=-1;
   F(i,n)
   {
    cin>>a[i];
    if(a[i]<mi)mi=a[i],ind=i;
   }
   F(i,200000)parent[i]=i;


 
   for(int i=1;i<=n;i++)
   {
    if(i!=ind)edges.pb({a[i]+mi,{ind,i}});
   }


   F(i,m)
   {
    int u,v,w;
    cin>>u>>v>>w;
    edges.pb({w,{u,v}});
   }



  cout<<kruskalMST();
  tr;




 }
}