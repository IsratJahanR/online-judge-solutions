#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    ll a[n],j;
    vector<int > x,y;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            x.pb(a[i]);
        }
    }
    x.pb(a[n-1]);
    for(i=0;i<x.size();i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            if(x[i]==a[j])sum++;
            if(sum==2){y.pb(x[i]); break; }
        }

    }
   /* for(i=0;i<x.size();i++)cout<<x[i]<<" ";
    cout<<endl;
    for(i=0;i<x.size();i++)cout<<y[i]<<" ";
    cout<<endl;*/
    if(y.size()==0)
    {
        cout<<x.size()<<endl;
      for(i=x.size()-1;i>=0;i--)cout<<x[i]<<" ";
    cout<<endl;
    }
    else
    {
        if(x[x.size()-1]==y[y.size()-1])y.pop_back();
        cout<<x.size()+y.size()<<endl;
        for(i=0;i<x.size();i++)cout<<x[i]<<" ";
        for(i=y.size()-1;i>=0;i--)cout<<y[i]<<" ";
    }

}
