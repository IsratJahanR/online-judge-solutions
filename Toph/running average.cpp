#include<iostream>
using namespace std;
int main()
{
    int n,x,i;
    float sum=0.0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        sum=sum+x;
        cout<<sum/i<<" ";
    }
}
