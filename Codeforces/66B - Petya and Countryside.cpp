#include<bits/stdc++.h>
#define lcm(a,b) (a*b)/__gcd(a,b)
using namespace std;
int main()
{
    long long t,n,i,sum,j,s1=0,s2=0,m=0;
   // cin>>t;
    //while(t--)
   // {
       cin>>n;
       int a[n];
       for(i=0;i<n;i++)cin>>a[i];
       for(i=0;i<n;i++)
       {
        if(i<n-1){for(j=i+1;j<n;j++)
        {
            if(a[j]<=a[j-1])s1++;
            else break;
        }
        }
        if(i>0){for(j=i-1;j>=0;j--)
        {
            if(a[j]<=a[j+1])s2++;
            else break;
        }
        }
        m=max(m,s1+s2);
        s1=0; s2=0;
       }
       cout<<m+1<<endl;
    //}


}

