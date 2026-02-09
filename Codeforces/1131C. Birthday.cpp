#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    vector<ll > x,y;
    ll a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)y.push_back(a[i]);
        else x.push_back(a[i]);
    }
    //x.push_back(a[n-1]);
    for(i=y.size()-1;i>=0;i--)cout<<y[i]<<" ";
    for(i=0;i<x.size();i++)cout<<x[i]<<" ";



}
