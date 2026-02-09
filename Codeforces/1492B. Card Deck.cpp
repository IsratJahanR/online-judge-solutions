#include<bits/stdc++.h>
#define ll long long
#define lli long long int
using namespace std;
int main()
{
   int t; cin>>t;
  // t=1;
   while(t--)
   {
      ll n,m=0,k,j,x;
      cin>>n;
      ll a[n],b[n];
      vector<int> v;
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
          if(a[i]>m)
          {
              m=a[i];
              v.push_back(i);
          }
      }
      k=n;
      j=0;
      while(v.size()>0)
      {
          x=v.size()-1;
          for(int i=v[x];i<k;i++)b[j]=a[i], j++;
          k=v[x];
          v.pop_back();
      }
      for(int i=0;i<n;i++)cout<<b[i]<<" ";
      cout<<endl;
   }



}
