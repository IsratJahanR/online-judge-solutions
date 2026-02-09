#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,l,r,k,q,i,j;
int main()
{
    cin>>n;
    ll a[n];
    for(i=1;i<=n;i++)cin>>a[i];
    cin>>q;
    for(j=0;j<q;j++)
    {
        ll p=0,c=0;
        cin>>l>>r>>k;
        for(i=r;i>=l;i--)
        {
        c+=a[i];
        if(c>k)break;
        p++;
        }
        cout<<p<<endl;

    }


}
