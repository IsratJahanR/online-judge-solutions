#include <bits/stdc++.h>
#define ll long long
#include<stdio.h>
using namespace std;

int main()
{
    int t;   cin>>t;
    while(t--)
    {
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);
    if(n==1)
    {
        cout<<0<<endl;
        continue;
    }
    ll temp=1,mx=0;
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])temp++;
        else
        {
            mx=max(mx,temp);
            temp=1;
        }
    }

    mx=max(mx,temp);
    ll m=n-mx;
    ll ans=0,n1=m;
    while(n1!=0)
    {
        //if(n1==m)break;
        ans++;
        if(mx<=n1)
        {
            ans+=mx;
            n1-=mx;
            mx*=2;
        }
        else
        {
          ans+=n1;
          n1=0;
        }

    }


    cout<<ans<<endl;
    }

}

