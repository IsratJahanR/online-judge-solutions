
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t; cin>>t;
  // t=1;
   while(t--)
   {
      ll n,i,mx,x=0,y;
      cin>>n;
      ll a[n],b[n];
      for(i=0;i<n;i++)cin>>a[i];
      mx = *max_element(a,a+n);
      while(mx>0)
      {
          for(i=0;i<n;i++)
          {
            if(mx==a[i])
            {
                x++;
                b[i]=x;
            }
          }
          mx--;
      }
      for(i=0;i<n;i++)cout<<b[i]<<" ";
      cout<<endl;

   }



}
