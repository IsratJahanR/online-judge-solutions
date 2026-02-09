///Israt Jahan Reshma:::::::::::::::::::::-------->

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(x==y && y==z)cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
        else if((x==y && x>z))cout<<"YES\n"<<1<<" "<<y<<" "<<z<<endl;
        else if((y==z && y>x))cout<<"YES\n"<<x<<" "<<1<<" "<<z<<endl;
        else if((z==x && z>y))cout<<"YES\n"<<x<<" "<<y<<" "<<1<<endl;
        else cout<<"NO"<<endl;
    }
}
