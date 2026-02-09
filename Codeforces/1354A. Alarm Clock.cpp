#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long a,b,c,d,x,j=0;
    cin>>a>>b>>c>>d;
    if(b>=a)cout<<b<<endl;
    else
    {
        if(d>=c)cout<<"-1"<<endl;
        else
        {
            x=c-d;
            if((a-b)%x==0)j=(a-b)/x;
            else j=((a-b)/x)+1;
            cout<<b+(j*c)<<endl;

        }
    }
    }
}
