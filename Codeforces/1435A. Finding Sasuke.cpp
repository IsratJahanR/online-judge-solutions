#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],sum=0,m=1000;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int p,q;
        for(int i=0;i<n;i+=2)
        {
          if(a[i]>0 && a[i+1]>0)p=a[i+1]-2*a[i+1], a[i+1]=p,swap(a[i],a[i+1]);
          else if(a[i]>0 && a[i+1]<0)a[i+1]=abs(a[i+1]),swap(a[i],a[i+1]);
          else if(a[i]<0 && a[i+1]>0)a[i]=abs(a[i]),swap(a[i],a[i+1]);
          else if(a[i]<0 && a[i+1]<0)
          {
             q=abs(a[i]);
             a[i]=q;
              swap(a[i],a[i+1]);
          }
        }for(int i=0;i<n-1;i++)
        {

          if(i%2==0)cout<<a[i]<<" ";
          else cout<<a[i]<<" ";
        }
         cout<<a[n-1]<<endl;
    }
}
