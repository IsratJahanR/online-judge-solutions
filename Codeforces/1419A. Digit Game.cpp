#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t,n;
  cin>>t;
  while(t--)
  {
      int l=0;
      cin>>n;
      string s;
      cin>>s;
      if(n%2==1)
      {
          for(int i=0;i<n;i+=2){
          if((s[i]-'0')%2==1){l=1;}
          }
           if(l==0)cout<<2<<endl;
          else cout<<1<<endl;

      }
      else {
            for(int i=1;i<n;i+=2){
          if((s[i]-'0')%2==0)l=1;

          }

          if(l==1)cout<<2<<endl;
          else cout<<1<<endl;
      }
  }
}
