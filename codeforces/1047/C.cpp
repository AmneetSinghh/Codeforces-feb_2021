#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int MAXN = 3e5+5;
const int MAX = 1.5e7+5;
int A[MAXN], cnt[MAX];
bool visit[MAX];
 
int gcd(int a, int b)
{
    return b==0?a:gcd(b, a%b);
}
 
int Max(const int a, const int b)
{
    return a>b?a:b;
}
 
 
int main()
{
    int N;
    while(~scanf("%d", &N))
    {
        int G, ans;
        scanf("%d", &A[0]);
        G = A[0];
        for(int i = 1; i < N; i++)
        {
            scanf("%d", &A[i]);
            G = gcd(G, A[i]);
        }
 
        memset(cnt, 0, sizeof(cnt));
        memset(visit, true, sizeof(visit));
 
        for(int i = 0; i < N; i++)
            cnt[A[i]/G]++;
 
        visit[0] = visit[1] = false;
        ans = 0;
        for(int i = 2; i < MAX; i++)
        {
            int res = cnt[i];
            if(visit[i])
            {
                for(int j = 2*i; j < MAX; j+=i)
                {
                    visit[j] = false;
                    res += cnt[j];
                }
            }
            ans = Max(ans, res);
        }
        printf("%d\n", ans==0?-1:N-ans);
    }
    return 0;
}
