#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n1,n2,k,m,i;
    cin>>n1>>n2;
    cin>>k>>m;
    long long a[n1],b[n2];
    for(i=0;i<n1;i++)cin>>a[i];
    for(i=0;i<n2;i++)cin>>b[i];
    if(a[k-1]<b[n2-m])cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
}
