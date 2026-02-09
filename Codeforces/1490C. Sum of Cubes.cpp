
#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
map <ll,int > b;
int main()
{

    for(ll i=1;i<=10000;i++)b[i*i*i]=1;
    int t; cin>>t; while(t--)
    {
        ll n,mx,mn,d,sum=0,r,c1=0,c2=0,c0=0,x,a;
        cin>>x;
        int f=0;
        for(ll i=1; i<=10000;i++)
        {
          d=x-i*i*i;
          if(d < 0) break;
          //cout<<d<<" ";
          if(b[d]){f++; break;}

        }
        if(f>0) cout<<"Yes\n";
        else cout<<"No\n";

    }
}

