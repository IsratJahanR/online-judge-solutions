#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
    long long x,y,a,b,p,q;
    cin>>x>>y>>a>>b;
    p=y-x;
    q=a+b;
    if(p%q==0)cout<<p/q<<endl;
    else cout<<"-1"<<endl;
    }

}
