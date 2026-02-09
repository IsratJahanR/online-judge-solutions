
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,k,ans=0,i=1;
        cin>>n;
        int a[n];
        map<ll,ll>mp;
        set<ll>st;
        for(i=0;i<n;i++)
        {
           cin>>a[i];
           mp[a[i]]++;
           st.insert(a[i]);
        }
        ll mn = *min_element(a,a+n);
        ll mx = *max_element(a,a+n);
        if(mn==mx)
        {
            cout<<ans<<endl;
            continue;
        }
        ans = 0;
        for(i=n-1;i>=0;i--)
        {
          if(mp[a[i]]==1 && i==n-1)ans++;
          else if(i<n-1 && a[i]>a[i+1])break;
          else if(i<n-1 && a[i]<=a[i+1] && mp[a[i]]==1)ans++;
          else
          {
              ll x=mp[a[i]]-1;
              ll y=i-x;
              int f=0;
              for(int j=i-1;j>=y;j--)
              {
                if(a[i]!=a[j])
                {
                  f=1;
                  break;
                }
              }
              if(f==1)break;
              else ans++;

              i-=x;

          }

        }
        cout<<st.size()-ans<<endl;
    }

}

