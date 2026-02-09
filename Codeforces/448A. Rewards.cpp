#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,n,s1,s2,p1,p2,ans;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    cin>>n;
    s1=a+b+c;
    s2=x+y+z;
    p1=s1%5;
    p2=s2%10;
    //cout<<p1<<" "<<p2<<endl;
    if(p1!=0)s1=(s1/5)+1;
    else s1=s1/5;
    if(p2!=0)s2=(s2/10)+1;
    else s2=s2/10;
    //cout<<s1<<" "<<s2<<endl;
    ans=s1+s2;
   // cout<<ans<<endl;
    if(ans<=n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
