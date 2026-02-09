#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
   int t; cin>>t;
  // t=1;
   while(t--)
   {
      lli a,b,c,p,ans,a1,b1,c1;
      cin>>p>>a>>b>>c;
      a1=p/a;
      b1=p/b;
      c1=p/c;
      if(p%a!=0)a1++;
      if(p%b!=0)b1++;
      if(p%c!=0)c1++;

      a1=a*a1-p;
      b1=b*b1-p;
      c1=c*c1-p;
      ans = min(a1,min(b1,c1));
      cout<<ans<<endl;
   }



}
