#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n];
    vector<int > x,y;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int sum=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])x.pb(a[i]);
        else y.pb(a[i]);

    }
    x.pb(a[n-1]);
   if(y.size()>=2){ for(i=0;i<y.size()-1;i++)
    {
        if(y[i]==y[i+1]){cout<<"NO"<<endl; return 0;}
    }
   }
    cout<<"YES"<<endl;
    cout<<y.size()<<endl;
    for(i=0;i<y.size();i++)cout<<y[i]<<" ";
    cout<<endl;
    cout<<x.size()<<endl;
    for(i=x.size()-1;i>=0;i--)cout<<x[i]<<" ";
    cout<<endl;


}
