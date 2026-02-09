#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> v;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<n;i++)
    {
        if(a[i-1]==1 && a[i+1]==1 && a[i]==0)v.pb(i);
    }
    int c=0;
    for(int i=0;i<v.size();i++)
    {
        c++;
        //cout<<v[i]<<" ";
        if(v[i]+2==v[i+1])
        {
            i++;
        }

    }
    cout<<c<<endl;
}
