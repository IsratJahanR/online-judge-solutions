#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a[30],b[30],x[60],sum=0,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,n+a);
    sort(b,n+b);
    if(k==0){
        for(int i=0;i<n;i++)sum=sum+a[i];
    }
    else {
    for(int i=0, j=0;i<k;i++,j++)
    {
        x[i]=a[i];
        x[i+k]=b[n-k+j];
    }
    sort(x,2*k+x);
    //for(int i=0;i<2*k;i++)cout<<x[i]<<" ";
    for(int i=k;i<n;i++)sum=sum+a[i];
    for(int i=n-k+1;i<=n;i++)sum=sum+x[i];
    }
    cout<<sum<<endl;
    sum=0;
    }
}
