#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch=' ';
    string s;
    int uper=0,lower=0,i;
    cin>>s;
    int len=s.length();
    for(i=0;i<len;i++)
    {
        if(isupper(s[i]))uper++;
        else lower++;
    }
    //cout<<c<<endl;
    if(lower>=uper)
      {
       for(i=0;i<len;i++)
          {
           //if(s[i]>=65&&s[i]<=90)s[i]=tolower(s[i]);
           //cout<<s[i];
           ch=tolower(s[i]);
           cout<<ch;
          }
      }
    else
      {
        for(i=0;i<len;i++){

           ch=toupper(s[i]);
           cout<<ch;
           //if(s[i]>=97&&s[i]<=122)s[i]=toupper(s[i]);
           //cout<<s[i];
           }
      }
    cout<<endl;
}
