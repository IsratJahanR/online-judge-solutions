///submitted by: "ISRAT JAHAN RESHMA"
///From: BSMRSTU(SHIICT)

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,s=0,k;
        cin>>n>>k;
        ll a[n],i,j;
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n,greater<int>());
        for(i=0;i<=k;i++)
        {
         s+=a[i];
        }
        cout<<s<<endl;
    }
}
