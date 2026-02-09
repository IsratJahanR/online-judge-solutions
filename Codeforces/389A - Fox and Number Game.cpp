#include<bits/stdc++.h>
#define ll long long
#define gcd(a,b) __gcd(a,b)
using namespace std;
int main()
{
    int t=1; //cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int p=a[0];
    for(int i=0;i<n;i++)
    {
        p=gcd(p,a[i]);
    }
    p*=n;
    cout<<p<<endl;
}
}
