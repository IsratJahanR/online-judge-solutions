#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a,b,c,d,x,y;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        /*a=min(a,c);
        c=max(a,c);
        b=min(b,d);
        d=max(b,d);
        x=c+(c-a);
        y=d+(d-b); */
        if(a>c)x=c-(a-c);
        else x=c+(c-a);
        if(b>d)y=d-(b-d);
        else y=d+(d-b);
        cout<<x<<" "<<y<<endl;
    }
}
