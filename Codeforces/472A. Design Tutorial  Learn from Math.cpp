#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n%2==0) cout<<"8 "<<n-8<<endl;
    else cout<<"9 "<<n-9<<endl;
   /* ll n,c;
    cin>>n;
    vector<int> x;
    for(int i=4;i<n;i++)
    {
        c=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0){c++; break;}
        }
        if(c>0)x.pb(i);
    }
    //for(int i=0;i<x.size();i++)cout<<x[i]<<" ";
    for(int i=0;i<x.size();i++)
    {
        for(int j=i+1;j<x.size();j++)
        {
            if(x[i]+x[j]==n){cout<<x[i]<<" "<<x[j]<<endl; return 0; }
        }
    }
*/
}
