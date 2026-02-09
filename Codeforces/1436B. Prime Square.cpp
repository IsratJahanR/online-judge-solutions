#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n<=1)return false;
    if(n<=3)return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)return false;
    }
    return true;
}
int NNN(int n)
{
    int L=1;
    bool found = false;
    while (!found) {
        L++;

        if (!prime(L) && prime(L+n-1))
            found = true;
    }

    return L;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;

       if(prime(n))
       {
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
               {
                   cout<<1<<" ";
               }
               cout<<endl;
           }
       }
       else
       {
           int P=NNN(n);
           for(int i=0;i<n;i++)
           {
               for(int j=0;j<n;j++)
               {
                   if(i==j)cout<<P<<" ";
                   else cout<<1<<" ";
               }
               cout<<endl;
           }
       }
   }
}
