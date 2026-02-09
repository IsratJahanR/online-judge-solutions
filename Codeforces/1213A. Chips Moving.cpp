
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)e++;
        else o++;
    }
    if(o<=e)cout<<o<<endl;
    else cout<<e<<endl;
}
