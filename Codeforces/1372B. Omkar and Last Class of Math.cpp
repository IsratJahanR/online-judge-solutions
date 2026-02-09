#include<bits/stdc++.h>
#define lcm(a,b)  a*b/__gcd(a,b)
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long a,b,n,i,q,r,p;

        cin>>n;
        if(n%2==0){cout<<n/2<<" "<<n/2<<endl; }

        else {
                p=0;
        for(i=3;i*i<=n;i++)
        {
        if(n%i==0){cout<<n/i<<" "<<n-(n/i)<<endl; p++; break; }
        }
    if(p==0)cout<<"1"<<" "<<n-1<<endl;
        }

    }
}
