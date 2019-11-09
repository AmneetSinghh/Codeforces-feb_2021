//NITTROAD - Roads of NITT.

/*

so simple spproach is come into my mind, first disconnect the edges, then find the disconnected nodes,
but this task is not a simple task, its very complex to thimking and execute,

we can do it in the backword fashion, first we add the edges,
as we know total no of edgres are  n*n-1/2,
as we are adding then we are caclulating.. total- no_of_connected= no_of_disconnected.

*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 vector<int> graph[150000];
 set<int> s;
 int visited[150000];
 int n,m,u,v;
 cin>>n>>m;
 for(int i=1;i<=m;i++)
 {
 	cin>>u>>v;
 	graph[u].push_back(v);
 	graph[v].push_back(u);
 }
 for(int i=1;i<=n;i++)
 s.insert(i);
 int ans=0;
 for(int i=1;i<=n;i++)
 {
 	if(!visited[i])
 	{
 		ans++;
 		queue<int> q;
 		q.push(i);
 		while(!q.empty())
 		{
 			int tp=q.front();
 			visited[tp]=1;
 			q.pop();
 			set<int> st=s;// check for the zero edgres bro
 			for(auto first:graph[tp])st.erase(first);
 			for(auto second:st)q.push(second),s.erase(second);
 		}
 	}
 }
 cout<<ans-1<<endl;
 
}
