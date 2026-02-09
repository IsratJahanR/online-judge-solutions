#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n],i,sum=0,r,q;
        for(i=0;i<n;i++){
                cin>>a[i];
                sum+=a[i];
        }
        r=sum%n;
        if(r!=0)q=sum+n-r;
        else q=sum;
        q=q/n;
        cout<<q<<endl;
    }
}
