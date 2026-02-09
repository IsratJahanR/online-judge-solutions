#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<n;i++)cin>>a[i];
    if(m==1){cout<<"YES"<<endl; return 0; }
    for( i=1;i<n;)
    {
        if(a[i]+i==m){cout<<"YES"<<endl; return 0; }
        i+=a[i];
    }
    if(i==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
