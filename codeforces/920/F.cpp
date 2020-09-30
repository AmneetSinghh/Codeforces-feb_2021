/*
|********************************************** Not_Stable *********************************************************|                                                                |
|As I always say Let's not Make it complicated, baby                                                                |
|   **     *   *******  *********                                                                                   |
|   * *    *  *      *      *                                                                                       |
|   *  *   *  *      *      *                                                                                       |
|   *   *  *  *      *      *                                                                                       |
|   *    * *  *      *      *                                                                                       |
|   *     **   ******       *                                                                                       |
|                            ******    **********   ******    ******  *         *******                             |
|                            *             *       *      *  *    *   *         *                                   |
|                             ******       *       *      *  *  **    *         *******                             |
|                                  *       *       * **** *  *    *   *         *                                   |
|                                 *        *       *      *  *     *  *         *                                   |
|                            *****         *       *      *   ******   *******  *******                             |
|Keep it Simple baby!                                                                                               |
|Rules are meant for breaking,baby                                                                                  |
|Let's Not make it complicated.                                                                                     |
|********************************************** Not_Stable ********************************************************* 
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
#define mod 1000000007
#define ss second
#define br break
#define maxn 1000010

using namespace std;
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 
/*****************************************Things to remember in Contests*******************************************
          set->  find ,insert,erase   is logn;                 All the things are ordered 
          map-> searching in map is O(1) and others are log(n);   All the things are ordered by values smallest to largest
unordered_set->  find ,insert,erase     O(1);
unordered_map->   find,insert,erase     O(1);
So we have to find fast like in O(1) use the unordered_set or unordered_map
*/  
//
int dp[maxn], ar[maxn];
pair<int, int> tree[4 * maxn];
 
pair<int, int> doit(pair<int, int> a, pair<int, int> b) {
    pair<int, int> ans;
    ans.first = a.first + b.first;
    ans.second = max(a.second, b.second);
    return ans;
}
 
void build(int start, int end, int index = 1) {
    if (start == end) {
        tree[index] = {ar[start], ar[start]};
        return;
    }
    int mid = start + end >> 1;
    build(start, mid, 2 * index);
    build(mid + 1, end, 2 * index + 1);
    tree[index] = doit(tree[2 * index], tree[2 * index + 1]);
}
pair<int, int> queryTree(int start, int end, int l, int r, int index = 1) {
    if (r < start or l > end) return {0, 0};
    if (l <= start and r >= end)return tree[index];
    int mid = start + end >> 1;
    return doit(queryTree(start, mid, l, r, 2 * index), queryTree(mid + 1, end, l, r, 2 * index + 1));
}
void update(int start, int end, int l, int r, int index) {
    if (r < start or l > end)return;
    if (start == end) {
        tree[index] = {dp[tree[index].first], dp[tree[index].first]};
        return;
    }
    int mid = start + end >> 1;
    if (tree[2 * index].second > 2)
        update(start, mid, l, r, 2 * index);
    if (tree[2 * index + 1].second > 2)
        update(mid + 1, end, l, r, 2 * index + 1);
    tree[index] = doit(tree[2 * index], tree[2 * index + 1]);
}
void Not_Stable() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> ar[i];
    build(0, n - 1);
    for (int i = 0; i < m; i++) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)update(0, n - 1, l - 1, r - 1, 1);
        else cout << queryTree(0, n - 1, l - 1, r - 1, 1).first << endl;
    }
}
 
 
int32_t main()
{
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
for (int i = 1; i <= maxn - 10; i++)
        for (int j = i; j <= maxn - 10; j += i)
            dp[j]++;
            
            
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
}