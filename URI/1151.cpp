#include<iostream>
using namespace std;
int main()
{
   int a[45],n,i;
    cin>>n;
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<n;i++)
    {
        if(i==(n-1))
            cout<<a[i]<<endl;
        else
       cout<<a[i]<<" ";
    }
    return 0;
}

