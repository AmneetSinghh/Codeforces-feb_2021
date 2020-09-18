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
#define mod 1000000007
using namespace std;
#define tr cout<<"\n" 
#define br break
#define N 200005 
#define inf 10000000000000009
#define br break
/*  I know I have that Ability, I can do anything, 
I'll be The _Candidate Master_ 
(Patience and Practice)  */
 

// set is  {1,X}, {2,3,X},  {4,5,6,7,X}  <- X means not choose any
vector<int> val, def, cd;
int onlyAttacks() {
    sort(val.begin(), val.end());
    sort(cd.rbegin(), cd.rend());
    int ans = 0, add = 0;
    for (int i = 0; i < min(val.size(), cd.size()); i++){
        if (cd[i] >= val[i])ans += cd[i] - val[i];
        else add++;
    }
    return ans;
}

int everything() {
    vector<int> vis(cd.size());
    sort(cd.begin(), cd.end());
    sort(def.begin(), def.end());
    sort(val.begin(), val.end());
 
    if (cd.size() < val.size() + def.size())return 0;
    int id = 0, done = 0;
    for (int i = 0; i < def.size() and id < cd.size(); i++) {
        while (id < cd.size() and def[i] >= cd[id])id++;
        if (id == cd.size())break;
        vis[id] = 1;
        id++, done++;
    }
    if (done != def.size())return 0;
    vector<int> some;
    for (int i = 0; i < cd.size(); i++)if (!vis[i])some.push_back(cd[i]);
    sort(some.begin(), some.end());
    id = 0, done = 0;
    for (int i = 0; i < val.size(); i++) {
        while (id < some.size() and val[i] > some[id])id++;// just delete the first smaller baby
        if (id == some.size())return 0;
        id++, done++;
    }

    // this is like shote to baada baby
    if(done != val.size())return 0;
    return accumulate(some.begin(), some.end(), 0ll) - accumulate(val.begin(), val.end(), 0ll);
}


void Waheguru()
{
   int n, m;
    cin >> n >> m;
 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int tp;
        cin >> tp;
        if (s[0] == 'A')val.push_back(tp);
        else def.push_back(tp);
    }
    cd = vector<int>(m);
    for (int i = 0; i < m; ++i) cin >> cd[i];
    cout << max(everything(), onlyAttacks()) << endl;



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