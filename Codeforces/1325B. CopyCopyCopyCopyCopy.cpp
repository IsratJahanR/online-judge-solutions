#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
    long long n,i,s=1;  cin>>n;
    long long a[n];
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
       if(a[i]!=a[i-1])s++;
    }
    cout<<s<<endl;
}
}
