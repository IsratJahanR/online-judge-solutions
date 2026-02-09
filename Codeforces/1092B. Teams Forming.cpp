#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if(n==2){cout<<abs(a[0]-a[1])<<endl; return 0;}
    sort(a,a+n);
    int s=0;
    for(int i=0;i<n;i+=2)
    {
      s+=a[i+1]-a[i];
    }
    cout<<s<<endl;
}
