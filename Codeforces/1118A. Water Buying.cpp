#include<bits/stdc++.h>
#include<stdio.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll a,b,n,p,q,ans;
        cin>>n>>a>>b;
        p=n/2;
        q=n%2;
        if(a*2<=b)
        {
            ans=p*a*2;
        }
        else ans=p*b;
        ans+=q*a;
        cout<<ans<<endl;
    }


}
