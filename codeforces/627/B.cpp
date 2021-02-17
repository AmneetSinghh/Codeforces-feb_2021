/* It's Practice time */
#include<bits/stdc++.h>
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define pre(i,a,b) for(int i=a;i>=b;i--)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 1000000000000000000
#define inf 1000000000009
using namespace std;

//                  Make your segment tree library;// for all the basic operations;
/*
**Learnings** while solving 250:

1: s=a+b=(a^b)+(a&b)*2;
(a&b)=((a+b)-(a^b))/2;
*/

vector<int> t1, t2;
int a,b,n,k,q,day,val,p,t;

void update1(int i, int l, int r, int qi, int qx){
    if (l + 1== r) {
        t1[i] += qx;
        t1[i] = min (t1[i], a);// for the less than a;
        return;
    }
    int m = (r + l) >> 1;
    if (qi < m) {
        update1(2 * i + 1, l, m, qi, qx);
    } else {
        update1(2 * i + 2, m, r, qi, qx);
 
    }
    t1[i] = t1[2 * i + 1] + t1[2 * i + 2];
}


void update2(int i, int l, int r, int qi, int qx){
    if (l + 1== r) {
        t2[i] += qx;
        t2[i] = min (t2[i], b);
        return;
    }
    int m = (r + l) >> 1;
    if (qi < m) {
        update2(2 * i + 1, l, m, qi, qx);
    } else {
        update2(2 * i + 2, m, r, qi, qx);
 
    }
    t2[i] = t2[2 * i + 1] + t2[2 * i + 2];
 
}


int get1 (int i, int l, int r, int ql, int qr){
    if (r <= ql || qr <= l) {
        return 0;
    }
    if (ql <= l && r <= qr ) {
        return t1[i];
    }
    int m = (r + l) /2;
    return get1(2 * i + 1, l, m, ql, qr) +
              get1(2 * i + 2, m, r, ql, qr);
}


int get2 (int i, int l, int r, int ql, int qr){
    if (r <= ql || qr <= l) {
        return 0;
    }
    if (ql <= l && r <= qr ) {
        return t2[i];
    }
    int m = (r + l) /2;
    return get2(2 * i + 1, l, m, ql, qr) +get2(2 * i + 2, m, r, ql, qr);
}


void Not_Stable()
{
    cin >> n >> k >> a >> b >> q;
    t1.resize(4 * n);
    t2.resize(4 * n);
    int x, y, z;
    for (int i = 0; i < q; i ++) {
        cin >> x >> y;
        if (x == 1) {
            cin >> z;
            update1(0, 0, n, y - 1, z);
            update2(0, 0, n, y - 1, z);
        } else {
            cout << get2(0, 0, n, 0, y - 1 ) + get1(0, 0, n, y - 1 + k, n) << endl;
        }
    }
}



int32_t main() {
    io;
    int g=1;
    while (g--)Not_Stable();
    return 0;
    
}