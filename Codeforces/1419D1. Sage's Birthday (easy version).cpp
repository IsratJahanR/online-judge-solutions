#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    ll a[n];
    vector<int> x,y;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(i<n/2)x.pb(a[i]);
        else y.pb(a[i]);

    }
    if(n%2==0)cout<<(n/2)-1<<endl;
    else cout<<n/2<<endl;
    for(i=0;i<n/2;i++)
    {
       cout<<y[i]<<" "<<x[i]<<" ";
    }
    if(n%2==1)cout<<y[y.size()-1];
    cout<<endl;


}
