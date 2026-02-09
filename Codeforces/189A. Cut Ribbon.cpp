#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e;
    cin>>n>>a>>b>>c;
    int res=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
          d=a*i+b*j;
          if(d>n)break;
          e=n-d;
          if(e%c==0)res=max(res,i+j+(e/c));

        }
    }
    cout<<res<<endl;

}
