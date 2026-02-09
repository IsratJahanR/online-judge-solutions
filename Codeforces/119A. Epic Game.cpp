#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,g,p;
    cin>>a>>b>>n;
    //g=n;
    for(int i=1;n>0;i++)
    {
        if(i%2!=0)
        {
            g=__gcd(a,n);

        }
        else
        {
            g=__gcd(b,n);
        }
        n=n-g;
       // if(n<=0){p=i-1; break; }
        p=i;

    }
    if(p%2==0)cout<<1<<endl;
    else cout<<0<<endl;
}
