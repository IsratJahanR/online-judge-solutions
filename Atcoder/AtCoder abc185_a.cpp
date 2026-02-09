#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t; //cin>>t;
   t=1;
   while(t--)
   {
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int r = min(a,min(b,min(c,d)));
     cout<<r<<endl;
   }



}

