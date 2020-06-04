#include <iostream>
using namespace std;
int m,ans[1001],f;
char s[11];
void dfs(int prev,int cr,int k)
{
	int i;
	if(f)return;
	if(k==m)
	{
		f=1;
		cout<<"YES"<<endl;
		for(i=1;i<=m;i++)cout<<ans[i]<<" ";
		cout<<endl;
		return;
	}
	for(i=cr+1;i<=10;i++)
	 if(s[i]=='1' && prev!=i)
	 {
	 	ans[k+1]=i;
	 	dfs(i,i-cr,k+1);
	 }
}
int main()
{
	cin>>s+1>>m;
	dfs(0,0,0);
	if(!f)cout<<"NO"<<endl;
	return 0;
}
