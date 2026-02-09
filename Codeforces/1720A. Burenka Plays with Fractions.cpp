


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{

    int t=1,Case=1; cin>>t;
    while(t--)
    {
       ll n,ans=0,i=0,prd=1,x,m,q=0,k,mx=0;
        ll a,b,c,d;

        cin>>a>>b>>c>>d;
        m=a*d;
        n=b*c;
        if(n>m)swap(m,n);
        if(m==n)cout<<0<<endl;
        else if(n==0 || m%n==0)cout<<1<<endl;
        else cout<<2<<endl;


    }

}

