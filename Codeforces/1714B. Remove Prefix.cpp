#include<bits/stdc++.h>

#define ll long long
#define pb push_back
const int         MxN = (int) 1e6 + 6;


using namespace std;

int main()
{

    int tc=1,Case=1; cin>>tc;
    while(tc--)
    {
       ll n,i,j,k,q,x,y,H,M;
       cin>>n;
       ll a[n];
       for(i=0;i<n;i++)cin>>a[i];
       map<ll,ll>mp;
       for(i=n-1;i>=0;i--)
       {
         mp[a[i]]++;
         if(mp[a[i]]>1)
         {
             break;
         }
       }
       cout<<i+1<<endl;

    }

   return 0;
}
