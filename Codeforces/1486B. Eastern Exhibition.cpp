#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,t,i,sum,s2,f,ans,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x[n],y[n];
        for(i=0;i<n;i++)cin>>x[i]>>y[i];
        if(n%2==1)ans=1;
        else
        {
            sort(x,x+n);
            sort(y,y+n);
            r=n/2;
            l=n/2-1;
            ans=(x[r]-x[l]+1)*(y[r]-y[l]+1);

        }
        cout<<ans<<endl;
    }
}
