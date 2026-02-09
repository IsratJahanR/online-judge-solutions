#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==1){cout<<1<<endl; return 0; }
    sort(a,a+n);
    int s=0,m=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i-1]){s++; m=max(m,s); }
        else { s=0; }

    }
    cout<<m+1<<endl;

}
