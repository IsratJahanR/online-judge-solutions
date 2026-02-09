#include<bits/stdc++.h>




using namespace std;

#define N 1e7+2
#define ll long long


int main()
{
    //sieve();
    int tc=1,Case=1; cin>>tc;
    while(tc--)
     {

       long long  n,x=0,y=0,z,p=0,w,k,i,q;
       cin>>n;
       string s,ans="";
       cin>>s;
       string s1="aabcdefghijklmnopqrstuvwxyz";
       for(i=n-1;i>=0;i--)
       {
           int x= s[i]-'0';
           if(s[i]>='1' && s[i]<='9')ans+=s1[x];
           else
           {
              x=(s[i-2]-'0')*10+s[i-1]-'0';
              ans+=s1[x];
              i-=2;
           }
       }
       reverse(ans.begin(),ans.end());
       cout<<ans<<endl;


    }


}
