#include<bits/stdc++.h>
using namespace std;
const double pi=acos(-1.0);
int main()
{
    int d,h,v,e;
    cin>>d>>h>>v>>e;
    double x,y,ans;
    x=d*d*pi*e;
    y=x/4.0;
    ans=(pi*d*d*h)/(4*v-pi*e*d*d);
    if(4*v>x)
    {
        cout<<"YES"<<endl;
        printf("%.12f",ans);
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
