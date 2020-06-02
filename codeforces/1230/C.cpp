#include<cstring>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<cstdio>
#include<stack>
#include<cmath>
#include<iostream>
#define ll long long
#define lowbit(x) x&(-x)
#define inf 0x3f3f3f3f
using namespace std;
int n,m;
int x,y,ans;
int a[8][8];
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        ans=1000;
        memset(a,0,sizeof a);
        for(int i=1;i<=m;i++)
        {
            scanf("%d%d",&x,&y);
            a[x][y]=a[y][x]=1;
        }
        if(n<=6)
            printf("%d\n",m);
        else
        {
            for(int i=1;i<7;i++)
            {
                for(int j=i+1;j<=7;j++)
                {
                    int cnt=0;
                    for(int k=1;k<=7;k++)
                    {
                        if(a[i][k]&&a[j][k])
                        {
                            cnt++;
                        }
                    }
                    ans=min(cnt,ans);
                }
            }
            printf("%d\n",m-ans);
        }
    }
}
