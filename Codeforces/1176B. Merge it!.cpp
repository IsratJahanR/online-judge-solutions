#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n],ans,a1=0,a2=0;
        ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%3==0)ans++;
            else if(a[i]%3==1)a1++;
            else if(a[i]%3==2)a2++;
        }
        if(a1==a2)ans+=a1;
        else
        {
            ll p,q;
            p=max(a1,a2);
            q=min(a1,a2);
            ans+=q+(p-q)/3;
        }
        cout<<ans<<endl;
    }

}
