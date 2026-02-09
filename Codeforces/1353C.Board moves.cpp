#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n,sum=0,i;
        cin>>n;
        for(i=n/2;i>=1;i--)sum+=i*i;
        sum=sum*8;
        cout<<sum<<endl;
    }
}

