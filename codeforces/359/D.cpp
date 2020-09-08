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
#define N 300005 
#define inf 10000000009
int n;
int a[N*5];
// Segment tree
int tree[N*5],tree1[N*5+5];
inline int func(int aa,int bb)
{
	if(aa == 0 || bb == 0)
		return aa+bb;
    return __gcd(aa,bb);
}
void build(int node, int start, int end)
{
    if(start == end)
        tree[node] = a[start];
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = func(tree[2*node],tree[2*node+1]);
    }
}
 
int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        return 0;
    }
    if(l <= start and end <= r)
        return tree[node];
    int mid = (start + end) / 2;
    int px1 = query(2*node, start, mid, l, r);
    int px2 = query(2*node+1, mid+1, end, l, r);
    return func(px1,px2);
}


set<int> dp;
int front[N+1],back[N];
void Waheguru()
{
	// After so much time , Its the time to implement segment_tree with binary search
	cin>>n;
	f(i,n)cin>>a[i],front[i]=i,back[i]=i;
    build(1,0,n-1);
    int  j=0;
	f(i,n){
		while(j<n-1)
		{
			int p = query(1,0,n-1,i,j+1);// gcd == current value
			if(p == a[i]) j++;
			else break;
		}
		front[i] = j;
	}

	j= n-1;
	for(int i= n-1; i>=0 ; i--)
	{
		while(j>0)
		{
			int p = query(1,0,n-1,j-1,i);
			if(p == a[i])
				j--;
			else
				break;
		}
		back[i] = j;
	}
   int val = 0;
	for(int i=0; i<n; i++)
	{
		if(val < front[i] - back[i])
		{
			val = front[i]-back[i];
			dp.clear();
			dp.insert(back[i]);
		}
		else if(val == front[i] - back[i])
		{
			dp.insert(back[i]);
		}
	}
	cout<<dp.size()<<" "<<val<<endl;
	for(int sd : dp)cout<<sd+1<<" ";
	
	
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