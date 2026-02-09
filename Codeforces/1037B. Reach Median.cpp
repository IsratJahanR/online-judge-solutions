
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int         N   = (int) 2e5 + 5;

int main()
{

    int t=1,Case=1; //cin>>t;
    while(t--)
    {
       ll n,ans=0,i=0,prd=1,x,y,m,q=0,k,mx=0,p=0,mn=1000000009,r=0,s;
        cin>>n>>s;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);
        x=n/2;
        if(a[x]<s)
        {

            for(i=x;a[i]<s && i<n;i++)
            {
                ans+=(s-a[i]);
            }
        }
        else if(a[x]>s)
        {
            for(i=x;a[i]>s && i>=0;i--)
            {
                ans+=abs(s-a[i]);
            }
        }
        cout<<ans<<endl;


    }

}


