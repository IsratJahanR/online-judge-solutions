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
    ll x1=0,x2=0,y1=0,y2=0;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<0)x1=min(x,x1);
        else if(x>0)x2=max(x,x2);

        if(y<0)y1=min(y,y1);
        else if(y>0)y2=max(y,y2);

    }
    //cout<<x1<<x2<<y1<<y2<<endl;
     cout<<abs(x1)*2+abs(y1)*2+x2*2+y2*2<<endl;

    }

   return 0;
}
