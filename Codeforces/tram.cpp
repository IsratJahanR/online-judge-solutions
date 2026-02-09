#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[1000],n,sum=0,x[1000],temp;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
      sum+=b[i]-a[i];
      x[i]=sum;
    }
    //for(int i=0;i<n;i++)cout<<x[i]<<" ";
    sort(x,x+n);
    cout<<x[n-1]<<endl;

}
