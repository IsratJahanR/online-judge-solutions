#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin>>tc; while(tc--)
    {
        ll a,b,w,h,n,i,ans=1;
        //cout<<"YES"<<endl;
          //  else cout<<"NO"<<endl;
          string s; cin>>s;
          for(int i=0;i<s.size();i++)
          {
              if(i%2==0)
              {
                 if(s[i]=='a')cout<<"b";
                 else cout<<"a";
              }
              else
              {
                 if(s[i]=='z')cout<<"y";
                 else cout<<"z";
              }
          }
          cout<<endl;
        }



}

