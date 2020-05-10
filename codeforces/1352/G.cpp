#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--){
		int n;cin>>n;
		if(n==2 || n==3){
		cout<<"-1\n";continue;}
		else if(n==4){
		cout<<"3 1 4 2\n";continue;}
		else{
		    deque<int> a; 
		    deque<int> b; 
		    a.push_front(3);b.push_back(4); b.push_back(2);
		    for(int i=5;i<=n;i++)
		    {
		    	if(a.size()==b.size()) 
		    	b.push_back(i);
		    	else a.push_front(i);
		    }
		    
		    for(auto sd:a)
		    cout<<sd<<" ";
		    cout<<"1 ";
		    for(auto sd:b)
		    cout<<sd<<" ";
		    cout<<endl;
}
		    

		
	}
}
