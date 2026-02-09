#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int s,m,l,xl,xxl,n;
    cin>>s>>m>>l>>xl>>xxl;
   // for(int i=0;i<5;i++)cin>>m[i];
   // vector<string > s;
    cin>>n;
    string ss;
    vector<int > a;
    for(int i=0;i<n;i++)
    {
      cin>>ss;
      if(ss=="S")
      {
          if(s>0)a.pb(1),s--;
          else
          {
              if(m>0)a.pb(2),m--;
              else if(l>0)a.pb(3),l--;
              else if(xl>0)a.pb(4),xl--;
              else if(xxl>0)a.pb(5),xxl--;
          }
      }
      else if(ss=="M")
      {
          if(m>0)a.pb(2),m--;
          else
          {
              if(l>0)a.pb(3),l--;
              else if(s>0)a.pb(1),s--;
              else if(xl>0)a.pb(4),xl--;
              else if(xxl>0)a.pb(5),xxl--;

          }
      }else if(ss=="L")
      {
          if(l>0)a.pb(3),l--;
          else
          {
              if(xl>0)a.pb(4),xl--;
              else if(m>0)a.pb(2),m--;
              else if(xxl>0)a.pb(5),xxl--;
              else if(s>0)a.pb(1),s--;

          }
      }
      else if(ss=="XL")
      {
          if(xl>0)a.pb(4),xl--;
          else
          {
              if(xxl>0)a.pb(5),xxl--;
              else if(l>0)a.pb(3),l--;
              else if(m>0)a.pb(2),m--;
              else if(s>0)a.pb(1),s--;

          }
      }else if(ss=="XXL")
      {
          if(xxl>0)a.pb(5),xxl--;
          else
          {
              if(xl>0)a.pb(4),xl--;
              else if(l>0)a.pb(3),l--;
              else if(m>0)a.pb(2),m--;
              else if(s>0)a.pb(1),s--;

          }
      }
    }
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==1)cout<<"S"<<endl;
        if(a[i]==2)cout<<"M"<<endl;
        if(a[i]==3)cout<<"L"<<endl;
        if(a[i]==4)cout<<"XL"<<endl;
        if(a[i]==5)cout<<"XXL"<<endl;
    }
}
