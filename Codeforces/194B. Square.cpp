#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,i,p=0;
        cin>>n;
        if(n%2==0)cout<<n*4+1<<endl;
        else if(n%4==3)cout<<n+1<<endl;
        else cout<<n*2+1<<endl;
          // else cout<<n+1<<endl;

    }
}
