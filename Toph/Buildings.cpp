#include<bits/stdc++.h>

#define ll long long
#define pb push_back
const int         MxN = (int) 1e6 + 6;


using namespace std;


int main()
{
    auto x=1;
    cout<<x<<endl;
    int tc=1,Case=1; //cin>>tc;
    while(tc--)
    {
       ll n,i,j,k,m,p,x,y;
       cin>>n>>k;

       ll a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       if(n==1)
       {
           cout<<a[0]+k<<endl;
           continue;
       }
       sort(a,a+n);
       p=a[0];
       for(i=1;i<n;i++)
       {
           x=a[i]-p;
           if(i*x<=k)
           {
               p=a[i];
               k-=i*x;
           }
           else
           {
               p=p+k/i;
               break;
           }

       }
       if(k>0)
       {
           p+=k/n;
       }
       cout<<p<<endl;
    }

   return 0;
}

