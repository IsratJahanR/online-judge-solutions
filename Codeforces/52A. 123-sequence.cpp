#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n],i,m=0,s=0;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])s++;
        else {m=max(m,s); s=0;}
    }
    m=max(m,s);
   // cout<<m<<endl;
    m++;
    cout<<n-m<<endl;

}
