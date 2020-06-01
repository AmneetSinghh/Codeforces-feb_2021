#include <bits/stdc++.h>
using namespace std;
 
const int N = 100005;
map<int, int> A;
struct tup{int x, y, z;};
priority_queue< pair<int, int> > Q;
vector<tup> ans;
int n;
 
 
int main(){
	
	cin >> n;
	
	for(int x, i = 0; i < n; ++i){
		cin >> x;			
		A[x]++;
	}
 
	for(auto v : A){
		Q.push({v.second, v.first});
	}
 
	int r = 0;
	int qx[5];
	while(Q.size()>=3){
		auto a = Q.top(); Q.pop();
		auto b = Q.top(); Q.pop();
		auto c = Q.top(); Q.pop();
 
		qx[0] = a.second;
		qx[1] = b.second;	
		qx[2] = c.second;
		
		sort(qx, qx+3);
		ans.push_back({qx[2], qx[1], qx[0]});
 
		r++;
		c.first--;
		a.first--;
		b.first--;
		
		if(c.first) Q.push(c);
		if(a.first) Q.push(a);
		if(b.first) Q.push(b);
	}
 
 
	
 
	cout << r << endl;
	for(auto v : ans)
		cout << v.x << " " << v.y << " " << v.z << endl;
 
 
	return 0;
}
