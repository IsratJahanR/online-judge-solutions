#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin>>n;
  int x[n],a[n];
  for(int i=0;i<n;i++)
  {
      cin>>x[i];
      a[i+1]=x[i];
  }
  sort(x,x+n);
  for(int i=0;i<n;i++)
  {
      for(int j=1;j<=n;j++)
      {
          if(a[j]==x[i])
          {
              cout<<j<<" ";
              break;
          }
      }
  }
}
