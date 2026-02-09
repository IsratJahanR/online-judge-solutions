
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,x;
    cin>>k>>x;
    for(int i=x-k+1,j=1;i<x;i++,j++)
    {
        cout<<i<<" ";
    }
    cout<<x<<" ";
    for(int i=x+1,j=1;j<k;i++,j++)
    {
        cout<<i<<" ";
    }
}
