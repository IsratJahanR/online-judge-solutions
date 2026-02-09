#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 200000
#define pb push_back
int main()
{
    int IJR=1,tc=0;  cin>>IJR;
    while(IJR--)
    {
        ll n,k,ans=0,c=0,c1=0,i,x=3,j;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='L')ans+=i;
            else ans+=(n-1)-i;
        }
        i=0;
        j=(n+1)/2;
        vector<int>v;
        while(i<n/2 && j<n)
        {
            if(s[i]=='L')v.pb((n-1)-2*i);
            i++;
            if(s[j]=='R')v.pb(2*j-(n-1));
            j++;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
            {
                ans+=v[i];
                cout<<ans<<" ";
            }
         for(;i<n;i++)cout<<ans<<" ";
         cout<<endl;
    }

    return 0;
}

