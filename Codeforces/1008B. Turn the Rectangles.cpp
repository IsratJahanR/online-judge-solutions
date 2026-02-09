
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n],i,s=0;
    for(i=0;i<n;i++)cin>>a[i]>>b[i];
    if(n==1){cout<<"YES"<<endl; return 0; }
    int x=max(a[0],b[0]);
    for(i=1;i<n;i++)
    {
       if(a[i]>b[i])
       {
           if(x>=a[i])x=a[i];
           else if(x>=b[i])x=b[i];
           else {cout<<"NO"<<endl; return 0; }
       }
       else if(a[i]<b[i])
       {
           if(x>=b[i])x=b[i];
           else if(x>=a[i])x=a[i];
           else {cout<<"NO"<<endl; return 0; }
       }
       else
       {
           if(a[i]<=x) x=a[i];
           else {cout<<"NO"<<endl; return 0; }
       }
    }
     cout<<"YES"<<endl;
}
