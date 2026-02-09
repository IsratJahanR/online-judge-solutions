

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


ll next_sqr(int n)
{
    int x =sqrt(n);
    if(x*x==n)return n;
    else return (x+1)*(x+1);
}
int main()
{

    int t=1,Case=1; //cin>>t;
    while(t--)
    {
       ll n,ans=0,i=0,prd=1,x,m,q=0,k,mx=0,p=0,mn=1000000009,r=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        int f=0;
        r=0;
        for(i=0;i<n;i++)
        {
           if(f==0 && a[i]==mn)f=1,p=i,q=i;
           if(f==1 && a[i]==mn)
           {
               r++;
               mx=max(mx,i-q-1);
               q=i;
           }

        }
        //cout<<mx<<endl;
        mx= max(mx,n-(q-p+1));
        if(r==n)mx=0;
        //cout<<mx<<endl;
        ans = mn*n + mx;
        cout<<ans<<endl;
    }

}

