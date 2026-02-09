#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,g,n,s;
    cin>>b>>g>>n;
    s=min(b,n);
    s=s+min(g,n);
    if(n<b && n<g)cout<<n+1<<endl;
    else cout<<s-n+1<<endl;

}
