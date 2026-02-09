#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        j=i*i;
        k=i*i*i;
        cout<<i<<" "<<j<<" "<<k<<endl;
        cout<<i<<" "<<j+1<<" "<<k+1<<endl;
    }
    return 0;
}

