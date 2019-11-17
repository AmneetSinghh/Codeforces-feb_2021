#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[100005];
int main(){
	ll n,m,ans=0,jj=0,rr=0;
	cin>>n;
	set<int> ac;
	bool fl =true;
	vector<int> yue;
	for(int y=0;y<n;y++){
		cin>>jj;
		if(!ac.count(jj))ac.insert(jj);
		else fl=false;
		if(jj<0 and !ac.count(jj*(-1)))fl=false;
		
		
		if(jj>0)
		ans++;
		else
		ans--;
		if(ans==0){
			yue.push_back(y+1-rr);
			rr=y+1;
			ac.clear();
		}
	}
	if(!fl or ans!=0)puts("-1");
	else{
		// if(yue.size()>1)yue.pop_back();
		cout<<yue.size()<<'\n';
		for(auto& v:yue)cout<<v<<' ';
		cout<<'\n';
	}
	return 0;
}

