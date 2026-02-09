#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,c1=0,c2=0,c3=0,c4=0;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++)
    {
        if(x[i]==4)c4++;
        if(x[i]==3)c3++;
        if(x[i]==2)c2++;
        if(x[i]==1)c1++;
    }
    if(c3>=c1)sum=c4+c3+c2/2+(c2%2);
    else
    {
        c1=(c1-c3)+c2*2;
        if(c1%4==0)sum=c4+c3+(c1/4);
        else sum=c4+c3+(c1/4)+1;

    }
cout<<sum<<endl;
}
