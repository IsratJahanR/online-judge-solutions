#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n],i,s=0,t;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        t=a[i]-a[i-1]-1;
        if(a[i]==a[i-1])t==0;
        s+=t;
    }
    cout<<s<<endl;
}
