#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t,x1=0,y1=0,z1=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        x1+=x;
        y1+=y;
        z1+=z;

    }
    if(x1==0&&y1==0&&z1==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
