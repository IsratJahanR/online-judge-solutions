#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=1,ans=1;
    cin>>n;
    for(int i=1;i<n;i++)
    {
      ans=ans+i;
      ans=ans%n;
      if(ans==0)ans=n;
      cout<<ans<<" ";
    }
}
