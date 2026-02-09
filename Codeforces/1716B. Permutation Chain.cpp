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
       ll n,i,j,k,p,x,y,H,M,mn=1000000,q,kk;
       cin>>n;
       ll a[n];
       for(i=0;i<n;i++)a[i]=i+1;
       cout<<n<<endl;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cout<<a[j]<<" ";
           }
           cout<<endl;
           swap(a[i],a[i+1]);
       }
    }

   return 0;
}
