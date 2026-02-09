#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,i,sum=0; cin>>n;
        long long a[999999];
        for(i=1;i<=n;i++){cin>>a[i];
        //for(i=1;i<=n;i++){
          if(a[i]!=i && a[i-1]==i-1)sum++;
        }
       if(sum==0)cout<<"0"<<endl;
       else if(sum==1)cout<<"1"<<endl;
       else cout<<"2"<<endl;
    }
}
