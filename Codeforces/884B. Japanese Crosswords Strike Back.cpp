#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int g; cin>>g; while(g--){
    long long n,x;
    cin>>n>>x;
    long long a[n],i;
    long long  ss,s=0,p=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    s=s+n-1;
    if(s==x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
//}
}
