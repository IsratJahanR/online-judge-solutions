#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   if(n<=1){cout<<"YES"<<endl; return 0; }
   sort(a,a+n);
   int p=0,q=0;
   for(int i=1;i<n;i++)
   {
     if(a[i]==a[i-1])p++;
     else p=0;
     q=max(p,q);
   }
   n=n+1;
   n=n/2;
  // cout<<q<<endl;
  if(q+1<=n)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
