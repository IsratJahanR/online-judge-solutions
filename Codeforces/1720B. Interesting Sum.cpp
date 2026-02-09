
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mn 1e9+7;



int main()
{

    int t=1,Case=1; cin>>t;
    while(t--)
    {
       ll n,ans=0,i=1,prd=1,x,m,q,k,mx=0;

        cin>>n;
        map<ll,ll>mp;

        ll a[n];
        for(i=0;i<n;i++){
                cin>>a[i];

        }
        sort(a,a+n);
        cout<<a[n-1]+a[n-2]-a[0]-a[1]<<endl;

    }

}

