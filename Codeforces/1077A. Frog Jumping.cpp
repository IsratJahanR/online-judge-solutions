#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,a,b,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        if(k%2==0)ans=(a-b)*k/2;
        else ans=((a-b)*(k/2)) +a;
        cout<<ans<<endl;
    }
}
