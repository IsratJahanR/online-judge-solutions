///Submitted by::::---->ISRAT JAHAN RESHMA

#include<bits/stdc++.h>
#define ll long long
#define M 1000001
using namespace std;
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n,k,sum=0;
        cin>>n>>k;
        ll i,p,q,G,v;
        vector< ll> a;
        a.push_back(0);
        G=n*k;
        for(i=1;i<=G;i++)
        {
            cin>>v;
            a.push_back(v);
        }
        p=(n+1)/2;
        q=n-p+1;
        int j=1;
        for(i=n*k-q+1;i>=1;i-=q)
        {
            sum+=a[i];
            if(j==k)break;
            j++;
        }
        cout<<sum<<endl;
    }

}
