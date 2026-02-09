#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],a[n];
    for(int i=0;i<n;i++)cin>>x[i];
    int max=0;
    int min=100000;
    int p,q;
    for(int i=n-1;i>=0;i--)
    {
       if(x[i]<min)
       {
           min=x[i];
           p=i;
       }
    }
    //cout<<p<<endl;
    for(int i=0;i<n;i++)
    {
        if(x[i]>max)
        {
            max=x[i];
            q=i;
        }
    }
    //cout<<q<<endl;
    if(q>p)p++;
    int result=n-p+q-1;
    cout<<result<<endl;
}
