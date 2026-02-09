#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,p,ss; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    m=a[n-1];
    vector< int > vec;
    for(int i=n-1;i>=0;i--)
    {
        if(m%a[i]!=0 || a[i]==a[i-1]){cout<<m<<" "<<a[i]<<endl; return 0;}
    }

}
