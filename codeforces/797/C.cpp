#include <bits/stdc++.h>

using namespace std;

string s;
char temp[100100];
stack<char> stak;
int main () {
    cin>>s;
    temp[s.size()]='z'+1;
    for (int i=s.size()-1; i>=0; i--) 
        temp[i]=min(temp[i+1], s[i]);

        

        
    int j=0;
    for (int i=0; i<(int)s.size(); i++) {
        stak.push(s[i]);
        while (!stak.empty() &&stak.top()<=temp[i+1]){ 
            cout<<stak.top();stak.pop();}
    }
    return 0;
}
