#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int         MxN = (int) 1e6 + 6;


using namespace std;

int main()
{
    //fastio();

    int tc=1,Case=1; cin>>tc;
    while(tc--)
    {
    ll n,i,j,k,p,x,y,H,M,mn=1000000,q,kk,sum=0;
       cin>>n;
     ll a[n+1];
   vector<pair<ll,ll>>v;
   vector<ll>vv;
   for(i=1;i<=n;i++)
   {
       cin>>a[i];
       if(a[i]<i){
            v.pb({a[i],i});
            vv.pb(a[i]);
       }
   }
   sort(vv.begin(),vv.end());

   for(i=0;i<v.size();i++)
   {
       x=v[i].second;
       auto it =upper_bound(vv.begin(),vv.end(),x);
       sum+=vv.size()-distance(vv.begin(),it);
   }
    cout<<sum<<endl;

    }

   return 0;
}
