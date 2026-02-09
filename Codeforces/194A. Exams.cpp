#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,q;
    cin>>n>>k;
    if(n==1 && k==2)cout<<1<<endl;
    else if(n==1 && k!=2)cout<<0<<endl;
    else
    {
      p=k%n;
      q=k/n;
      if(q>=3 )cout<<0<<endl;
      else  cout<<n-p<<endl;
    }
}
