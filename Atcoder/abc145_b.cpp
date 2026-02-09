#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,sum,n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1)cout<<"No"<<endl;
    else
        {
         sort(s.begin(),s.end());
         int q=0;
         for(int i=0;i<n-1;i++)
         {
          if(s[i]==s[i+1])q++;
          else
          {
              if(q%2==0){cout<<"No"<<endl; return 0;}
              q=0;
          }
         }
         cout<<"Yes"<<endl;
        }
}
