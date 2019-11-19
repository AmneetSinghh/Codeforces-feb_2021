#include <bits/stdc++.h>
using namespace std;

 #define ll long long
#define MX 1000000001
#define MN LONG_MIN
#define SZ 5001
#define REP(i, s, e) for(int i = (s); i <= (e); ++i)
#define FOR(i, s, n) for(int i = (s); i < (n); ++i)
#define FORALL(i, n) for(int i = 0; i < (n); ++i)
#define ZERO(box) memset(box, 0, sizeof(box))
#define pushb push_back
#define MOD 1000000007
int main()
{
	
int t;
cin>>t;
while(t--)
{
	ll a,b;
	cin>>a>>b;
	ll count=0;
	if(a==b)
	cout<<"0\n";
	else
	{
		if(a>b)
		swap(b,a);
		ll value=b-a;
		
		ll d=value/5;
		ll re=value%5;
		
		count+=d;
		if(re==0)
		b=b;
		else if(re==1 || re==2)
		count+=1;
		else
		count+=2;
		
		
	
	cout<<count<<endl;
	
	
}

}

}
