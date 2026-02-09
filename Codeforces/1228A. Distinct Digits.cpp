#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
  ll l,r,i;
  cin>>l>>r;
  for(i=l;i<=r;i++)
  {
      vector <int> v;
      int s=0,p=i;
      while(p!=0)
      {
        v.pb(p%10);
        p=p/10;
      }
      sort(v.begin(),v.end());
      for(int j=1;j<v.size();j++)
      {
         if(v[j]==v[j-1]){s++; }
      }
      //cout<<s<<endl;
      if(s==0){cout<<i<<endl; return 0; }
      //{
         // for(int j=v.size()-1;j>=0;j--)cout<<v[j];
         // return 0;
     // }
  }
  cout<<-1<<endl;

}
