#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    string s;
    vector<char> ch;
    getline(cin,s);
    int l=s.length();
    for(int i=1;i<l-1;i+=3)
    {
       // cout<<s[i]<<" ";
      ch.push_back(s[i]);
    }
   // cout<<s<<endl<<l<<endl;
   // cout<<s[l-2];
   int c=0;
   int len= ch.size();
   if(len==0){ cout<<c<<endl; return 0; }
   c=1;
   if(l==1){cout<<c<<endl; return 0;}
   sort(ch.begin(),ch.end());
   for(int i=0;i<len-1;i++)
   {
       if(ch[i]!=ch[i+1])c++;
   }
   cout<<c<<endl;
   return 0;

}
*/
int main()
{
    string s;
    int c=0;
    getline(cin,s);
    sort(s.begin(),s.end());
   // cout<<s<<endl;
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i]>64 && s[i]<123){c++;
          if(s[i]==s[i+1])c--;}
    }
    cout<<c<<endl;
}
