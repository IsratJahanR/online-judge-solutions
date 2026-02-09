#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,n,m,mn,mnn,p; cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        m=max(a,max(b,c));
        //mnn=min(a,min(b,c));
        mn=m-a+m-b+m-c;
        if(n>=mn && (n-mn)%3==0 )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
