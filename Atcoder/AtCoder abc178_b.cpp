#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t; //cin>>t;
   t=1;
   while(t--)
   {
     ll a,b,c,d;
     cin>>a>>b>>c>>d;
     ll r = max(a*c,max(a*d,max(b*c,b*d)));
     cout<<r<<endl;
   }



}

