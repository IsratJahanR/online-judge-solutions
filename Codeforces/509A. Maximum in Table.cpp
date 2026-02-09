#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    int x[n][n];
    if(n==1){cout<<1<<endl;}
    else {
    for(int i=1;i<=n;i++)
    {
        x[1][i]=1;
        x[i][1]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=n;j++){x[i][j]=x[i-1][j]+x[i][j-1]; p=x[i][j];
    }
    }
    cout<<p<<endl;
    }
    return 0;
}
