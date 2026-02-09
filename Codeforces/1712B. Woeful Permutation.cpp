
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
      int n,k,ans=0,i=1;
    cin>>n;
    int a[n];
    int f=0;
    if(n%2==1){cout<<1<<" "; i=2; f=1;}
    for(;i<=n;i++)
    {
            if(i%2==f)cout<<i-1<<" ";
            else cout<<i+1<<" ";
    }
    cout<<endl;
    }




}
