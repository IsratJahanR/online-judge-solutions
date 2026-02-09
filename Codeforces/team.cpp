#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,s=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if((x+y+z)>=2)s++;
    }
    cout<<s<<endl;
}
