#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,t,i,sum,s2,f;
    cin>>t;
    while(t--)
    {
        sum=0,f=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
          cin>>a[i];
           //sum+=a;

        }
        if(n==1){cout<<"YES"<<endl; continue;}
        //sum=a[0];
        //a[0]=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>i){sum+=a[i]-i; a[i]=i;}
            else if(a[i]<i)
            {
                if(a[i]+sum>=i)sum-=i-a[i];
                else {f=1; break; }
            }



        }

        /*s2=(n*(n+1)/2)-n;

        if(sum>=s2)*/
        if(f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
