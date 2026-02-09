#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s1[n],s2[m];
    for(int i=0;i<n;i++)
    {
        cin>>s1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>s2[i];
    }
    int q;
    cin>>q;
    long long a;
    for(int i=0;i<q;i++)
    {
        cin>>a;
        a--;
        cout<<s1[a%n]+s2[a%m]<<endl;

    }
}
