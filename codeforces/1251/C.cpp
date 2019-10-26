#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,s1,s2;
    while(t--)
    {
        s1="";
        s2="";
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]%2==0)
            s1+=s[i];
            else
            s2+=s[i];
        }
        //cout<<s<<"   "<<s1<<"  "<<s2<<endl;
        merge(s1.begin(),s1.end(),s2.begin(),s2.end(),s.begin());
        cout<<s<<"\n";
    }
    return 0;
}
