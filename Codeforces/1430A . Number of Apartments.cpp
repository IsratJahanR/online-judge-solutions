#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
    int n,d,e,r1,r2,r3,t;
    cin>>n;
    int r=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
          d=3*i+5*j;
          if(d>n)break;
          e=n-d;
          if(e%7==0){r1=i; r2=j; r3=e/7; r=1;break; }

        }
        if(r==1)break;
    }
    if(r==1)cout<<r1<<" "<<r2<<" "<<r3<<endl;
    else cout<<"-1"<<endl;

}
}

