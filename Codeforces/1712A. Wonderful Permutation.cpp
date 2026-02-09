
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
      int n,k,ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
            cin>>a[i];
            if(i<k && a[i]>k)ans++;
    }
    cout<<ans<<endl;
    }




}
