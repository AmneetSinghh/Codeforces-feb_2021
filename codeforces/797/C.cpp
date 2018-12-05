#include<bits/stdc++.h>
using namespace std;
const int Maxn=1e5+7;
string s;
char c[Maxn];
stack <char> st;
int main()
{
	cin>>s;
	c[(int)s.size()]='z';
	for(int i=s.size()-1;i>=0;i--)
		c[i]=min(c[i+1],s[i]);
		
	for(int i=0;i<(int)s.size();i++){
		while(!st.empty() && st.top()<=c[i])
			cout<<st.top(),st.pop();
		st.push(s[i]);
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}
