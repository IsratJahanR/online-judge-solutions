
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,k,m=2020;
    cin>>a>>b;
    if(b-a>=2019){cout<<0<<endl; return 0;}
    for(i=a;i<=b;i++)
    {
        for(j=i+1;j<=b;j++)
        {
            k=(i*j)%2019;
            m=min(m,k);
        }
    }
    cout<<m<<endl;
}
