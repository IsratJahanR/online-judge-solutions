#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,t,r,s,d; cin>>t; while(t--)
    {
        cin>>n;
        ll a[n],ans,p=1000000009,q=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>q)q=a[i],r=i;
            if(a[i]<p)p=a[i],d=i;
        }
        if(p==q)cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    if(a[i]==q && a[i]!=a[i+1]){ans=i+1; break;}
                }
                else if(i==n-1)
                {
                    if(a[i]==q && a[i]!=a[i-1]){ans=i+1; break;}
                }
                else
                {
                    if(a[i]==q)
                    {
                        if(a[i]!=a[i+1] || a[i]!=a[i-1]){ans=i+1; break; }
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}
