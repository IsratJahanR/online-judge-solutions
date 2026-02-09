
#include<bits/stdc++.h>

#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int         MxN = (int) 1e6 + 6;


using namespace std;

int main()
{
    //fastio();

    int tc=1,Case=1; cin>>tc;
    while(tc--)
    {
    ll n,i,j,k,p,x,y,H,M,mn=1000000,q,kk,sum=0;
    cin>>n;
    vector<ll>a(n),b(n);
    ll mx=0;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]>mx)
      {
          mx=max(a[i],mx);
          x=i;
      }
    }
    int f=0;
    for(i=x+1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            f=1;
            break;
        }
    }
    for(i=x-1;i>=0;i--)
    {
        if(a[i]>a[i+1])
        {
            f=1;
            break;
        }
    }

    if(f==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



    }

   return 0;
}
