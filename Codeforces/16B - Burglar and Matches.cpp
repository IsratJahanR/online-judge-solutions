#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    //int t; cin>>t; while(t--){
    ll n,m;
    cin>>n>>m;
    ll a[m],b[m],x[m],i,sum=0;
    for(i=0;i<m;i++)
    {
        cin>>a[i]>>b[i];
        x[i]=b[i];
    }
    sort(b,b+m,greater<>());
    for(i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
          if(b[i]==x[j] && a[j]>0)
          {
              if(a[j]>=n){sum+=n*b[i]; cout<<sum<<endl; return 0;}
              else{ sum+=a[j]*b[i]; n=n-a[j]; a[j]=0;}
              break;
          }
        }
    }
    cout<<sum<<endl;
//}
}
