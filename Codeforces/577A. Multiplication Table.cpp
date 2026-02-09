#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,sum=0,i,j,k;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        if(m%i==0 && m/i<=n)sum++;
    }
    //if(sum%2==1)sum++;
    cout<<sum<<endl;
}
