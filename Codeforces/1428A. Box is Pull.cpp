///1228 A.Box is Pull.cpp
///Solution::::-------->

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b==d)cout<<0<<endl;
        else if(a==c && b!=d)cout<<abs(b-d)<<endl;
        else if(b==d && a!=c)cout<<abs(a-c)<<endl;
        else cout<<(abs(a-c)+abs(b-d))+2<<endl;
    }
}
