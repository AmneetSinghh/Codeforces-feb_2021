#include <bits/stdc++.h>
using namespace std;
 #define pb push_back
#define int long long
#define endl '\n'
#define maxn 500005

int32_t main()
{
	int n;cin>>n;
	
	int temp=n%4;
	if(temp==1)cout<<"0 A\n";
	else if(temp==0)cout<<"1 A\n";
	else if(temp==2)cout<<"1 B\n";
	else if(temp==3)cout<<"2 A\n";
}

