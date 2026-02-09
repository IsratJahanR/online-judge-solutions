#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,s=0;
    cin>>n;
    long long a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]>b[i])s=1;
    }
    if(s==1)cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
}






