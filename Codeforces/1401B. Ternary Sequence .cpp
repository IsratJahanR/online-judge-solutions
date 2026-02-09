#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,B,c,x,y,z,tc,qa;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>B>>c;
        cin>>x>>y>>z;
        long long p=min(c,y);
        if(c-p+a<z)qa=2*(z-c+p-a);
        else qa=0;
        cout<<2*p-qa<<endl;
    }
}
