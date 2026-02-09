#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll c,d,e,f=0,l,g,m,n,k,i,j,t,p,q;
    cin>>n;
    int s=0,a[n],b[n];
    vector<int>v;
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        s+=a[i];
    }
    if(n==2){cout<<0<<endl;return 0;}
    sort(b,b+n);
    m=b[n-1];
    p=b[n-2];
    for(i=0;i<n;i++){
        if(a[i]==m)f=p;
        else f=m;
        if(s-a[i]==2*f)v.push_back(i+1);
    }
    l=v.size();
    cout<<l<<endl;
    for(i=0;i<l;i++){
        cout<<v[i]<<' ';
    }
    return 0;
}
