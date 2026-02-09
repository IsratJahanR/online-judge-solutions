#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
ll power(ll a, ll n)
{
    ll res=1;
    while(n>0)
    {
        if(n%2==1)res*=a;
         a=a*a; n=n/2;
       // res*=a;
    }
    return res;
}
int main()
{
  ll t,p=1,q,r;
  cin>>t;
  vector<ll >a;
  for(int i=1;i<=9;i++)
  {
      a.pb(i);
      p=i;
      q=i;
      for(int j=1;j<=9;j++)
      {   //cout<<p<<endl;

          p+=(power(10,j))*i;
          r=p;
          a.pb(r);
          //q++;
      }
      p=0;

  }
  while(t--)
  {
      ll n,result=0;
      cin>>n;
      sort(a.begin(),a.end());
      for(int i=0;i<a.size();i++)
      {
          //cout<<a[i]<<endl;
          if(n>=a[i])result++;

      }
      cout<<result<<endl;


  }
}
