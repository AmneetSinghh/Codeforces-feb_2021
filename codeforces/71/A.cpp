#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
cin>>n;
for(int i=0;i<n;i++)
{
  string s;
  cin>>s;
  if(s.length()<=10)
  cout<<s<<"\n";
  else
  {
        string f="";
         std::string e = to_string((s.length()-2));
         f+=s[0]+e+s[s.length()-1];
         cout<<f<<"\n";
  }
  
}
}
