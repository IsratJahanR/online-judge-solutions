#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    int t;cin>>t;
    while(t--){
    cin>>a>>b;
    if(a%b==0)
        cout<<0<<endl;
    else cout<<b-(a%b)<<endl;
    }
}
