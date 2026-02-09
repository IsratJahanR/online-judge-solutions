#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n,m,i;
  cin>>n>>m;
  ll a[n],s=0,p;
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  sort(a,a+n,greater<int>());
  for(i=0;i<n;i++)
  {
    s+=a[i];
    if(s>=m){p=i; break;}
  }
  cout<<p+1<<endl;
}
