
#include<bits/stdc++.h>
using namespace std;
#define ll long long




int main()
{

        ll n,x,i,ans=0;
        cin>>n;
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
          cin>>x;
          mp[x]++;
        }
        for(i=1;i<=10;i++)ans+=(ll)(mp[i]*mp[-i]);

        ans+=mp[0]*(mp[0]-1)/2;





        cout<<ans<<endl;

       return 0;

}
