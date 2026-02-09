#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i=1,r,q,s=-1;
    cin>>k;
    string ss="";
    for(i=1;i<=k;i++)
    {
        ss+=to_string(i);

    }
    cout<<ss[k-1]<<endl;
}
