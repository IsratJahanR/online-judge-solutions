#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)cout<<2<<endl;
        else if(n%2==1)cout<<1<<endl;
        else cout<<0<<endl;
    }
}
