#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],c=1;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
       // for(int i=0;i<n;i++)cout<<a[i]<<" ";
        for(int i=0;i<n;i++)
        {
            if(a[i]<=i+1)c=i+2;

        }
        cout<<c<<endl;
    }
}
