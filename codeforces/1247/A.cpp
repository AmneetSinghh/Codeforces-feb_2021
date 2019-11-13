#include <vector>
#include <string>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    cin>>a>>b;
    
    if(b-a==1)
    cout<<a<<"9"<<" "<<b<<"0"<<endl;
    else if(b==a)
    cout<<a<<"1"<<" "<<b<<"2\n";
    else if(a==9 && b==1)
    cout<<"9 10\n";
    else
    cout<<"-1\n";
}
