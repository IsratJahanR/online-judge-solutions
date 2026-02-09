#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t,n,i,j;
  cin>>t;
  while(t--)
  {
      cin>>n;
      ll a[n],s=0,p,q=0;
      for(i=0;i<n;i++)cin>>a[i];
      p=(n*(n-1)/2)-1;
      if(is_sorted(a,a+n))cout<<"YES"<<endl;
      //else if(p==0)cout<<"NO"<<endl;
      else {
      for(i=1;i<n;i++)
      {
          if(a[i]>=a[i-1])q=1;
      }
      if(q==0)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
      }

  }
}
