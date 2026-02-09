#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int p=0;
    int m=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        m=max(m,x);
        if(x==i && m==i)p++;
    }
    cout<<p<<endl;
}
