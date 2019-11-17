#include <bits/stdc++.h>
using namespace std;
#define N 200007
int par[N], R[N];
 
int find(int x) { return par[x] = (par[x]==x?x:find(par[x])); }
void un(int u, int v) 
{
    u = find(u); v = find(v);
    par[v] = u;
    R[u] = max(R[u], R[v]);
}
 
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<N;i++) par[i] = i, R[i] = i;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        un(u,v);
    }
 

 
    int cnt = 0;
    for(int i=1;i<n;i++) 
    {
        if (find(i) != find(i+1) && R[find(i)] > i+1) 
        {
            un(i,i+1);
            cnt++;
        }
    }
    cout << cnt << endl;
}
