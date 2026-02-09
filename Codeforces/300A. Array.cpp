#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int > b,c,d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)b.push_back(a[i]);
        else if(a[i]>0)c.push_back(a[i]);
        else if(a[i]==0)d.push_back(a[i]);
    }
    cout<<"1 "<<b[0]<<endl;
    if(c.size()!=0)
    {
        cout<<"1 "<<c[0]<<endl;
        cout<<n-2<<" ";
        for(int i=1;i<b.size();i++)cout<<b[i]<<" ";
        for(int i=1;i<c.size();i++)cout<<c[i]<<" ";
        for(int i=0;i<d.size();i++)cout<<d[i]<<" ";
    }
    else
    {
        cout<<"2 "<<b[1]<<" "<<b[2]<<endl;
        cout<<n-3<<" ";
        for(int i=3;i<b.size();i++)cout<<b[i]<<" ";
        for(int i=0;i<d.size();i++)cout<<d[i]<<" ";

    }
}
