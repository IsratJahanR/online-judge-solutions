#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      int n,q=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      if(a[0]==5)
      {
          int t5=1,t10=0,t15=0;
          for(int i=1;i<n;i++)
          {
              if(a[i]==10)
              {
                 t10++;
                 if(t5>0)t5--;
                 else {cout<<"NO"<<endl; q=1; break;}
              }
              if(a[i]==15)
              {
                 t15++;
                 if(t10>0)
                    {
                      t10--;
                    }
                 else if(t5>=2)t5-=2;
                 else {cout<<"NO"<<endl; q=1; break;}
              }
              if(a[i]==5)t5++;

          }
         if(q==0) cout<<"YES"<<endl;

      }
      else cout<<"NO"<<endl;

  }
}


