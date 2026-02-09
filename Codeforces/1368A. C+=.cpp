                     ///Solve of C+=


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,a,b,n,sum,p,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        for( i=1;;i++)
        {
            sum=a+b;
            p=max(a,b);
            a=sum;
            b=p;
            if(sum>n){cout<<i<<endl; break; }

        }
    }

}
