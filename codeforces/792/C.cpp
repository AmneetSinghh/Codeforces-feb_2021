/*
|********************************************** Not_Stable *********************************************************|                                                                |
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
|Keep it Simple!                                                                                                    |
|********************************************** Not_Stable ********************************************************* 
*/
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
#define f(i,n) for(int i=0;i<n;i++)
#define F(i,n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define inf 1000000000000009
using namespace std;
const int maxn=200005;
int a[maxn];


int find(string s,int in,int mod)
{
	in=-1;
	for(int i=0;i<=s.size();i++)
	    {
	    	int val=s[i]-'0';
	    	if(val%3==mod)in=i;
	    }
	    return in;
}
string remove1(string s,int in)
{
	string res="";
	for(int i=0;i<s.size();i++){if(i!=in)res+=s[i];}
		return res;
}

string remove_zeros(string s)
{
	while(s[0]=='0')
 {
    if(s.size()>1)s.erase(s.begin());
   else break;
  }
   return s;
}
void Not_Stable()
{
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.size();i++)
		ans+=(s[i]-'0');
	if(ans%3==0)cout<<s;
	else if(ans%3==1)
	{
	   int in=-1;
	   in=find(s,in,1);
	   string res=remove1(s,in);
       if(in!=-1)res=remove_zeros(res);
       //***************************for making 2
        int in1=-1;
	    in1=find(s,in1,2);
	    if(in1==-1)
	    {
	    	if(in==-1){cout<<"-1";tr;return;}
	    	if(res.size()==0)cout<<"-1";
                	else cout<<res;

         return;
	    }
	    else
	    {
	    	string ss=remove1(s,in1);
	    	in1=-1;
	        in1=find(ss,in1,2);
	        if(in1==-1)
	        {
	    	if(in==-1){cout<<"-1";tr;return;}
	    	if(res.size()==0)cout<<"-1";
                	else cout<<res;

                	return;
	         }
	         s="";
	         string s=remove1(ss,in1);
	         s=remove_zeros(s);
              if(in!=-1)
	         {
	         	if(res.size()>s.size())cout<<res;
                else
                {
                	if(s.size()==0)cout<<"-1";
                	else cout<<s;
                }
                tr;
	         }
	         else
	         {
	         		if(s.size()==0)cout<<"-1";
                	else cout<<s;
	         }

	    }
	}
	    else
	    {
	    	
       int in=-1;
	   in=find(s,in,2);
	   string res=remove1(s,in);
       if(in!=-1)res=remove_zeros(res);
       //***************************for making 1
       
        int in1=-1;
	    in1=find(s,in1,1);
	    if(in1==-1)
	    {
	    	if(in==-1){cout<<"-1";tr;return;}
	    	if(res.size()==0)cout<<"-1";
                	else cout<<res;

                	return;
	    }
	    else
	    {
	    	string ss=remove1(s,in1);
	    	in1=-1;
	        in1=find(ss,in1,1);
	        if(in1==-1)
	        {
	    	if(in==-1){cout<<"-1";tr;return;}
	    	if(res.size()==0)cout<<"-1";
                	else cout<<res;

                	return;
	         }
	         s="";
	         string s=remove1(ss,in1);
	         s=remove_zeros(s);
	         
	         if(in!=-1)
	         {
	         	if(res.size()>s.size())cout<<res;
                else
                {
                	if(s.size()==0)cout<<"-1";
                	else cout<<s;
                }
                tr;
	         }
	         else
	         {
	         		if(s.size()==0)cout<<"-1";
                	else cout<<s;
	         }
             
	    }
	}

}


 
 
int32_t main()
{     
   cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit);
    int g=1;
    while (g--)Not_Stable();
    return 0;
}