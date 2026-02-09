#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,m=2000,ans;
    cin>>n>>T;
    int a[n],b[n];
    pair<int ,int > ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        ar[i].first=b[i];
        ar[i].second=a[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        if(ar[i].first<=T)
        {
            m=min(m,ar[i].second);
        }
    }
    if(ar[0].first>T)cout<<"TLE"<<endl;
    else cout<<m<<endl;

}
