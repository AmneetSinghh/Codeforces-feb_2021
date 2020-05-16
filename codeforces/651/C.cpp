#include<iostream>
#include<map>
using namespace std;
int main(){
	long long i,j,t,ans=0,a,b;
	map<pair<int,int>,int>same;
	map<int,int>x;
	map<int,int>y;
	cin>>t;
	while(t--){
		cin>>a>>b;
		ans+=x[a];
		x[a]++;
		ans+=y[b];
		y[b]++;
		ans-=same[make_pair(a,b)]++;
		
	}
	cout<<ans;
	return 0;
}
