#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  t; cin>>t; while(t--){
    long long n,d,i,r,p,f=0;
    cin>>n>>d;
    if(d<=n)cout<<"YES"<<endl;
    else {
    for(i=1;i<=n && i<=d;i++)
    {
        r=d%(i+1);
        p=d/(i+1);
        if(r!=0)p++;
        if(i+p<=n){f=1; break;}
    }
    if(f==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    }
}
