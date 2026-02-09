#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s,p;
    cin>>n>>m;
    for(int i=n+1;;i++)
    {
        s=0;
        for(int j=2;j<i;j++)
        {
         if(i%j==0)s++;
        }
        if(s==0){p=i; break;}
    }
    cout<<p<<endl;
    if(p==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

