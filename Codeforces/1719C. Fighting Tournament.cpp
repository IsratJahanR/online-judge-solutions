
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define N 60



int main()
{

    int t=1,Case=1; cin>>t;
    while(t--)
    {
       ll n,ans=0,i=1,prd=1,x,m,q,k,rr;

        cin>>n>>q;
        map<ll,ll>mp;
        vector<ll>v[n+1];
        ll a[n],r[n-1];
        for(i=0;i<n;i++){
                cin>>a[i];
                if(i==1)
                {
                    rr=max(a[i],a[i-1]);
                    v[rr].pb(i);
                }
                else if(i>1){
                        rr=max(rr,a[i]);
                        v[rr].pb(i);
                }

        }
        for(i=0;i<q;i++)
        {
            cin>>x>>k;



              ans = upper_bound(v[a[x-1]].begin(),v[a[x-1]].end(),k)-v[a[x-1]].begin();

              if(k>=n-1 && a[x-1]==n)ans+=(k-n+1);
              cout<<ans<<endl;




        }

    }

}


