
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin>>tc; while(tc--)
    {
        ll w,h,n,i,mx=0,A,B,x,y,z,p,q;

          cin>>A>>B>>n;
          ll a[n],b[n];
          for(i=0;i<n;i++){cin>>a[i]; mx=max(mx,a[i]); }
          for(i=0;i<n;i++)cin>>b[i];
          //sort(a,a+n greater<int>())
          int f=0;
          z=B;
          for(int i=0;i<n;i++)
          {
            p=b[i]/A;
            if(b[i]%A!=0)p++;
            B-=p*a[i];
          }
          //cout<<B<<endl;
          if(B+mx>0)cout<<"YES"<<endl;
          else cout<<"NO"<<endl;

        }



}

