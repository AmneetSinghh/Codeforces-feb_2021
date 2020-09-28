/*
Name                     : Harry Singh (:)
Age                      : 20 (:)
College                  : Lovely Professional University (:)
Email                    : harryamneet600@gmail.com (:)
Hobbies                  : Coding and Typeracer (:)
Goal                     : Long term is fixed and Short term is changing everyday (:)
Relatoinship Status      : Single (:)
Phone no                 : 91-********77 (:)
Waheguru Ji ka Khalsa, Waheguru Ji ki Fateh;
*/
 
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define double double
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n;i>=0;i--)
#define F(i,n) for(int i=1;i<=n;i++)
#define f_a(a,i,n) for(int i=a;i<=n;i++)
#define f_b(a,i,b) for(int i=a;i<=b;i++)
#define FO(i,n) for(int i=n;i>=1;i--)
#define tr cout<<"\n" 
#define br break
#define all(v) v.begin(),v.end()
#define inf 1000000000000009
#define ff first
#define ss second
#define br break
using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
int n;
vector<int> a, b;
inline void read() {
	cin >> n;
	a.resize(3);
	b.resize(3);
	f(i,3)cin >> a[i];
	f(i,3)cin >> b[i];
}
void Waheguru()
{
	int mi=inf,mx=0;
	read();
	std::vector<ipair> order;
    order.pb({0, 0});
	order.pb({0, 2});
	order.pb({1, 1});
	order.pb({1, 0});
	order.pb({2, 2});
	order.pb({2, 1});
	sort(all(order));
	do {
		vector<int> a1 = a, b1 = b;
		for (int i = 0; i < order.size(); i++) {
			int cnt = min(a1[order[i].ff], b1[order[i].ss]);
			a1[order[i].ff] -= cnt;
			b1[order[i].ss] -= cnt;			
		}
		int cur = min(a1[0], b1[1]) + min(a1[1], b1[2]) + min(a1[2], b1[0]);
		mi = min(mi, cur);
	} while(next_permutation(all(order)));
	 mx = min(a[0], b[1]) + min(a[1], b[2]) + min(a[2], b[0]);
	cout << mi << ' ' << mx << endl;
}
 
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g=1;
    while (g--)Waheguru();
    return 0;
}