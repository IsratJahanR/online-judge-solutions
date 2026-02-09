#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,x,y,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>c)
        {
            x=-1;
            y=b;
        }
        if (a==c){x=-1; y=b;}
        if(c>a)
        {
            x=1;
            if(a>(c/b))y=b;
            else y=-1;

        }
        if(a==b && b==c){x=-1; y=a;}
        cout<<x<<" "<<y<<endl;
    }
}
