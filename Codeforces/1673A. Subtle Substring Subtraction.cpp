#include <bits/stdc++.h>
#define ll long long
#include<stdio.h>
using namespace std;


int main()
{
    int tc,kk=1;
    cin>>tc;
    while(tc--)
    {
        ll n,m,ans=0,i,j,k,l,b=0;
        string s;
        cin>>s;
        l=s.size();
        for(i=0;i<l;i++)
        {
           k=s[i]-96;
           //cout<<k;
           ans+=k;
        }
       // cout<<ans<<endl;
        if(l%2==1)
        {
            if(s[0]<s[l-1])ans-=(s[0]-96),b=s[0]-96;
            else ans-=(s[l-1]-96),b=s[l-1]-96;
        }
        if(ans>=b)cout<<"Alice "<<ans-b<<endl;
        else cout<<"Bob "<<b-ans<<endl;

    }

}

