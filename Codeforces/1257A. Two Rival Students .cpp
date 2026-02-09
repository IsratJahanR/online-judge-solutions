#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,b,t,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        m=abs(a-b)+x;
        n=n-1;
        cout<<min(m,n)<<endl;

    }

}
