#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    m=n;
    while(m)
    {
    for(int i=0;i<n/m;i++)
        {
          int k=i*m;
          int f=1;
          for(int j=0;j<m-1;j++)
          {
              if(a[k+j]>a[k+j+1])f=0;
          }
          if(f==1){cout<<m<<endl; return 0; }
        }
    m=m/2;
    }

}
