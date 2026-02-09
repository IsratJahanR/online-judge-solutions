#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        p=a[i];
        q=a[p];
        r=a[q];
        if(i==r ){cout<<"YES"<<endl; return 0;}
    }
    cout<<"NO"<<endl;
}
