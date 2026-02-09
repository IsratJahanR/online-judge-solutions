#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1 || m==1)cout<<"YES"<<endl;
        else if(m==2 && n==2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
