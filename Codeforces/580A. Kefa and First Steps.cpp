#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=1,c=1;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])c++;
        else {
            if(c>temp)temp=c;
            c=1;
        }
    }
    if(c>temp)temp=c;
    cout<<temp<<endl;

}
