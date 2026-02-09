#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {   long long  a,b,c,d;
        cin>>a>>b>>c;
        d=max(a,max(b,c));
        cout<<d<<endl;
    }
}
