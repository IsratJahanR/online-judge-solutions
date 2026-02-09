
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,m,i,s=0,r,q,ans;
    cin>>n>>k>>m;
    ll a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(m*n<=s){cout<<0<<endl; return 0;}
    ans=m*n-s;
    if(ans>k){cout<<-1<<endl;}
    else cout<<ans<<endl;



}
