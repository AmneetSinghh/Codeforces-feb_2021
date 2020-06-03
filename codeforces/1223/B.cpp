#include<bits/stdc++.h>
using namespace std;
int main(){
	int q; cin>>q;
	string s,t;
	while(q--)
    {
		cin>>s>>t;
		bool flag=0;
		for(int i=0;i<s.size();i++)
			for(int j=0;j<s.size();j++)
				if(s[i]==t[j])
                    flag=1;
		cout<<(flag?"YES":"NO")<<endl;
	}
}
