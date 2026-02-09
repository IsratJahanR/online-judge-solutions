
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t; cin>>t;

   while(t--)
   {
     string s;
     cin>>s;
     int n=s.size();
     if(s[0]==s[n-1])
     {
         cout<<"No"<<endl;
         continue;
     }
     int a=0;
     int b=0;
     for(int i=0;i<n;i++)
     {
       if(s[0]==s[i])a++;
       else a--;
       if(a<0)break;
     }
     for(int i=0;i<n;i++)
     {
       if(s[n-1]==s[i])b--;
       else b++;
       if(b<0)break;
     }
     if(a==0 || b==0)cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
   }



}
