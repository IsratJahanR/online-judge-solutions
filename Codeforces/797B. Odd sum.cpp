#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n,i,ev=0,od=0,odd=0,b,c,r;
  cin>>n;
  ll a[n],tm=0,xx=0;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
      if(a[i]%2==0 && a[i]>0)ev+=a[i];
      if(a[i]%2!=0 && a[i]>0)od+=a[i];
      //if(a[i]%2!=0 && a[i]<0)odd+=a[i];

  }
  sort(a,a+n);
  for(i=0;i<n;i++)
  {
      if(a[i]<0 && a[i]%2!=0)tm=a[i];
      if(a[i]>0 && a[i]%2!=0){xx=a[i]; break;}
  }
  //cout<<tm<<endl<<xx<<endl;
  //int q=tm+xx;
  if(od%2!=0)cout<<ev+od<<endl;
  else
  {
      b=ev+od+tm;
      c=ev+od-xx;
      //cout<<b<<endl<<c<<endl;
      //int q=abs(b)%2;
      //if( q==1 && b>c)cout<<b<<endl;
      if(b>c)
      {
          if(b%2!=0)cout<<b<<endl;
          else cout<<c<<endl;
      }
      else
      {
          if(c%2!=0)cout<<c<<endl;
          else cout<<b<<endl;
      }

  }
}
