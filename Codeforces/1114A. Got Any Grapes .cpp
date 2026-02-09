#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,p,q,r,x,y,z;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    p=a-x+b;
    q=a+b+c-x-y;
    if(x<=a && p>=y && q>=z)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
