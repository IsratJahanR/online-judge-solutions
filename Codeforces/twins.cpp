#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], n,sum2=0,c=0,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)sum+=a[i];
    sum=sum/2;
for(int j=n-1;j>=0;j--){
        sum2+=a[j];
        c++;
        if(sum<sum2)break;
    }
    cout<<c<<endl;



}
