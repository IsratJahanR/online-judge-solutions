#include<bits/stdc++.h>
#define ll long long
#define gcd(a,b) __gcd(a,b)
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[0])break;

        else sum++;
    /*if(f==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;*/

    }
    cout<<n-sum-1<<endl;
  }
}
