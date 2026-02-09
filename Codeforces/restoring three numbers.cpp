#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d>a&&d>b&&d>c)
    cout<<d-c<<" "<<d-b<<" "<<d-a<<endl;
    else if(a>b&&a>c&&a>d)
    cout<<a-d<<" "<<a-c<<" "<<a-b<<endl;
    else if(b>a&&b>c&&b>d)
    cout<<b-d<<" "<<b-c<<" "<<b-a<<endl;
    else
        cout<<c-d<<" "<<c-b<<" "<<c-a<<endl;
}
