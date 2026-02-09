#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    vector<int> a;
    int c=0,p;
    for(int i=0;i<n;i++)
    {
        if(x[i]==1)
        {
            c++;
            if(c>1) a.pb(x[i-1]);
        }
    }
    cout<<a.size()+1<<endl;
    for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
    cout<<x[n-1]<<endl;

}
