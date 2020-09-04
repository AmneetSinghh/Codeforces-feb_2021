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
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
const int N = 2*1e5+7;
int inf=0x3f3f3f3f;
 
// struct cmp {
//     bool operator() (const ipair& lhs, const ipair& rhs) const{
//         if(lhs.first < rhs.first) return true;
//         return false;
//     }
// };
long long l[1005],h[1005];
long long a[1000005],b[1000005];
priority_queue<int> hang;
priority_queue<int> lie;
void Waheguru()
{
	int ans=-inf*inf;
	int n,m,k,p,shu;
	cin>>n>>m>>k>>p;
	F(i,n)F(j,m)
	{
		cin>>shu;
		l[i]+=shu;
		h[j]+=shu;
	}
	F(i,n)hang.push(l[i]);
	F(i,m)lie.push(h[i]);

	F(i,k)
	{
		int o=hang.top();
		hang.pop();
		a[i]=a[i-1]+o;
		hang.push(o-p*m);
	}
	F(i,k)
	{
		int o=lie.top();
		lie.pop();
		b[i]=b[i-1]+o;
		lie.push(o-p*n);
	}
	f(i,k+1)ans=max(a[i]+b[k-i]-(k-i)*i*p,ans); 
	cout<<ans<<endl;
	tr;

	
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