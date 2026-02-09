#include<bits/stdc++.h>
#define lld long long int
using namespace std;
int main()
{
  int t; cin>>t; while(t--)
  {
      lld n;
      cin>>n;
      lld ans=0;
      while(n!=1)
      {
          if(n%2==0)n=n/2;
          else if(n%3==0)n=2*n/3;
          else if(n%5==0)n=4*n/5;
          else {ans=-1; break;}
          ans++;
      }
      cout<<ans<<endl;
  }
}
