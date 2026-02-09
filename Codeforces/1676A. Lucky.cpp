#include <bits/stdc++.h>
#define ll long long

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
        ll a[n],n1=0,n2=0;
        for(i=0;i<6;i++)
        {
           if(i<3)n1+=s[i]-'0';
           else n2+=s[i]-'0';
        }

        if(n1==n2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
