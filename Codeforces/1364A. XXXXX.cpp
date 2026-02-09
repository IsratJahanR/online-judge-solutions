#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        long long a[n], sum=0,i,j;
        for(i=0;i<n;i++){cin>>a[i]; sum+=a[i]; }
        if(sum%x!=0){cout<<n<<endl; continue;}
        for(i=0;i<n;i++)
        {
          if(a[i]%x!=0)break;
        }
        //cout<<i<<endl;
        reverse(a,a+n);
        for(j=0;j<n;j++)
        {
          if(a[j]%x!=0)break;
        }
        //cout<<j<<endl;
        int p=n-min(i+1,j+1);
        if(i+1==n || j+1==n)cout<<"-1"<<endl;
        else cout<<p<<endl;

    }
 return 0;
}
