#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define int int
#define endl '\n'
#define maxn 500005
int tp[maxn];
vector<int> vc[maxn];
pair<int,int> topics[maxn];
bool freq[maxn];

int32_t main()
{
	int n,m,a,b;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
	cin>>a>>b;
	vc[a].push_back(b);
	vc[b].push_back(a);}
	
	for(int i=1;i<=n;i++){
		cin>>a;
		tp[i]=a;
		topics[i]={a,i};
	}
	
	sort(topics+1,topics+1+n);
	int f=0;
	// visied each node
	for(int i=1;i<=n;i++)
	{
		int differ=0;
		int node=topics[i].second;
        // cout<<node<<"\n";
		for(auto s:vc[node])
		{
			if(tp[s]==tp[node])f=1;
			if(tp[s]<tp[node])
			if(!freq[tp[s]])differ++;
			freq[tp[s]]=true;
			
		}
		
		// cout<<differ<<"  "<<tp[node]<<"\n";
		if(f==1 || differ!=tp[node]-1){
		cout<<"-1\n";
		return 0;
			
		}
		
		for(auto s:vc[node])
		freq[tp[s]]=false;
	}
	

	for(int i=1;i<=n;i++)
	cout<<topics[i].second<<" ";
	cout<<"\n";
	
}

