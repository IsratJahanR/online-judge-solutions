#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t; while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],ans=0;
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a,a+n,greater<>());
        set<ll >b,s;
        /*for(ll i=0;i<n;i++)
        {
            if(a[i]%2==0)b.insert(a[i]);
        }*/
        for(ll i=0;i<n;i++)
        {
            while(a[i]%2==0)
            {
                s.insert(a[i]);
                a[i]/=2;
            }
        }
        cout<<s.size()<<endl;
        }

}


