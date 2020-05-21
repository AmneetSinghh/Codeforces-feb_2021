#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
    int n,ti;cin>>n;
    string s,x;
    map<string,set<string>> mp;
    for(int i=1;i<=n;i++)
    {
    	cin>>s>>ti;
    	for(int i=1;i<=ti;i++)
    	{
    		cin>>x;
    		mp[s].insert(x);
    	}
    	
    }
    cout<<mp.size()<<endl;// values in map how manhy
    for(auto name:mp)
    {
    	// take the second set in some set
    	set<string> tmp=name.second;
    	for(auto number:tmp)
    	{
    		for(int i=1;i<number.size();i++)
    		{
    			if(tmp.count(string(number.begin()+i,number.end())))/// 786    86 8
    			tmp.erase(string(number.begin()+i,number.end()));
    		}
    	}
    	cout<<name.first<<" "<<tmp.size()<<" ";
		for(auto x:tmp)
		cout<<x<<" ";
		cout<<"\n";
    }
	return 0;
} 
