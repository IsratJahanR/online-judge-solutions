#include<bits/stdc++.h>




using namespace std;

#define N 1e7+2
#define ll long long


int main()
{
    //sieve();
    int tc=1,Case=1; cin>>tc;
    while(tc--)
     {

       long long  n,x=0,y=0,z,p=0,w,k,i,q;
       cin>>n;
       ll a[n],b[n],c[n];
       ll cnt=0;
       for(i=0;i<n;i++)cin>>a[i];
       for(i=0;i<n;i++)
       {
           cin>>b[i];
           c[i]=b[i]-a[i];
           if(c[i]>=0)cnt++;
       }
       sort(c,c+n);


       //for(i=0;i<n;i++)cout<<c[i]<<" ";
       k=n-1;
       ll ans =0;
       for(i=0;i<n;i++)
       {
         if(c[i]+c[k]>=0 && c[i]<0)
         {
           ans++;
           k--;
           cnt--;
         }
         if(c[i]>=0)break;
       }
       ans +=(cnt/2);
       cout<<ans<<endl;




    }


}
