#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,p;
    cin>>n>>k;
    int x=240-k;
    if(x<5){cout<<"0"<<endl; return 0;}
    for(int i=1;i<=n;i++)
    {   sum=sum+i*5;
        if(sum<=x)p=i;
        else break;
    }
    cout<<p<<endl;

}
