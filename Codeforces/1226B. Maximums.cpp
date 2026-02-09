#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll b[n],i;
    for(i=0;i<n;i++)cin>>b[i];
    ll x[n];
    x[0]=0;
    for(i=1;i<n;i++)
    {
        x[i]=b[i-1]+x[i-1];
        if(x[i]<x[i-1])x[i]=x[i-1];
    }
    for(i=0;i<n;i++)cout<<x[i]+b[i]<<" ";
    cout<<endl;
}
