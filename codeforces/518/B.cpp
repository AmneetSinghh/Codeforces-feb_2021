#include<bits/stdc++.h>
#include<string>
using namespace std;
string a,b;
int cnt[256],ans,x;
char f(char c)
{
	if (c>='a'&&c<='z') return c-'a'+'A';
	else return c-'A'+'a';
}
int main()
{
	cin>>a>>b;
	for (int i=0;i<b.size();i++)
		cnt[b[i]]++;
	for (int i=0;i<a.size();i++)
		if (cnt[a[i]])cnt[a[i]]--,ans++,a[i]=233;
	cout<<ans;
	ans=0;
	for (int i=0;i<a.size();i++)
		if (a[i]!=233&&cnt[f(a[i])]) cnt[f(a[i])]--,ans++;
	cout<<' '<<ans;
}
