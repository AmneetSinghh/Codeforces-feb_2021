// upsolve with Dukkha, coached by rainboy
#include <algorithm>
#include <iostream>
 
using namespace std;
 
const int N = 500000, A = 10000000;
 
int pp[A + 1], aa[N], bb[N];
 
int main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    for (int a = 2; a <= A; a++) {
        if (pp[a])
            continue;
        for (int b = a + a; b <= A; b += a)
            if (!pp[b])
                pp[b] = a;
    }
    int n; cin >> n;
    fill(aa, aa + n, -1);// filled with -1 all baby
    fill(bb, bb + n, -1);

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        int p = pp[a];
            if(p){
            while (a % p == 0)
                a /= p;
            if (a > 1) {
                aa[i] = p;
                bb[i] = a;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
        cout << aa[i] << ' ';
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << bb[i] << ' ';
    cout << '\n';
    return 0;
}