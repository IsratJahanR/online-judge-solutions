#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    ll a[n],s0=0,sn1=0,s1=0,res=0,sum=0;
    for(i=0;i<n;i++)
    {
            cin>>a[i];
            if(a[i]==0)s0++;
            if(a[i]>0)s1++;
            if(a[i]<0)sn1++;
    }
        for(i=0;i<n;i++)
        {
            if(a[i]<-1)sum+=abs(a[i])-1;
            if(a[i]>1)sum+=a[i]-1;
            if(a[i]==0)sum++;
        }
       if(sn1%2!=0 && s0==0)sum+=2;
        cout<<sum<<endl;

}

