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
       x=n/3;
       if(n%3==2 || (n%3==1 && n>3))x++;
       else if(n%3==1)x+=2;

       cout<<x<<endl;

    }

   return 0;
}
