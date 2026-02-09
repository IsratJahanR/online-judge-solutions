#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,l,t,s1=0,s2=0,m=0;
      string s;
      vector<char> ch;
      cin>>s;
      //sort(s.begin(),s.end());
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
          {
            s1++;
          }
          else
          {
              m=max(m,s1);
              s1=0;
              ch.push_back(s[i]);
          }
      }
      m=max(m,s1);
      sort(ch.begin(),ch.end());
      for(int i=0;i<ch.size()-1;i++)
      {
          if(ch[i]!=ch[i+1])s2++;
         // cout<<ch[i]<<" ";
      }

     s2++;
     //cout<<s2<<endl;
      if(m>=3 && s2>=5)cout<<"GOOD\n\n";
      else cout<<"-1\n\n";
    //}

}

