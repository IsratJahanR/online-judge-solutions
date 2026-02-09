#include<bits/stdc++.h>
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    MP
    long long int n,k,i,p=0,j=0;
    cin>>n>>k;
    vector <long long > v;
   // long long a[k];
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=n/i)v.push_back(n/i);

        }
    }
   // cout<<v.size()<<endl;
    sort(v.begin(),v.end());
    if(v.size()>=k)cout<<v[k-1]<<endl;
    else
    cout<<"-1"<<endl;
    return 0;

}
