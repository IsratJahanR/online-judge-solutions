#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k2,k3,k5,k6,p,sum=0,q;
    cin>>k2>>k3>>k5>>k6;
    p=min(k2,k5);
    p=min(p,k6);
    //cout<<p<<endl;
    for(int i=0;i<p;i++)sum+=256;
    //cout<<sum<<endl;
    k2=k2-p;
    //if(k2<=0){cout<<sum<<endl; return 0;}
    q=min(k2,k3);
    for(int i=0;i<q;i++)sum+=32;
    cout<<sum<<endl;
    return 0;

}
