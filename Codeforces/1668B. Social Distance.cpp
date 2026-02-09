#include <bits/stdc++.h>
#define ll long long
#include<stdio.h>
using namespace std;

int main()
{
    int t,kk=1;   cin>>t;
    while(t--)
    {
        ll n,m,ans=0,i;
        cin>>n>>m;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
          //ans++;
          ans+=(a[i]+1);
        }
        ans+=(a[n-1]-a[0]);

        //cout<<ans<<endl;
        if(ans<=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}


