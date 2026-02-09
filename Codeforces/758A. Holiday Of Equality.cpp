#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1)cout<<"0"<<endl;
    else
    {
        sort(a,a+n);
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[n-1])sum+=a[n-1]-a[i];
        }
        cout<<sum<<endl;
    }
}
