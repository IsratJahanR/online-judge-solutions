#include<bits/stdc++.h>
#define ll long long
#define gcd(a,b) __gcd(a,b)
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
    ll n,k,i,j,h,f,d,ans;
    cin>>n>>k;
    if(n%2==0)
    {
       ans=k%n;
       if(ans==0)ans=n;
    }
    else
    {
      k+=(k-1)/(n/2);
      ans=k%n;
      if(ans==0)ans=n;
    }
    cout<<ans<<endl;

  }
}
