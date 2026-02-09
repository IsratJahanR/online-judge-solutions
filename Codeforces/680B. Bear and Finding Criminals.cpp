#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,res=0;
    cin>>n>>t;
    int a[n+1];
    vector<int >b,c,d,e;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    res+=a[t];
    for(int i=t-1,j=t+1;i>0|| j<=n;--i,++j)
    {
        if(i<=0)res+=a[j];
        else if(j>n)res+=a[i];
        else if(a[i]+a[j]==2)res+=2;
    }
    cout<<res<<endl;

}
