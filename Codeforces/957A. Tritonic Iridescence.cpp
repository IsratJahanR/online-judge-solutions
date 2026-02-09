#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t; //cin>>t;
   t=1;
   while(t--)
   {
     int n; cin>>n;
     string s;
     cin>>s;

     for(int i=0;i<n;i++)
     {
         if(i>0 && s[i]==s[i-1] && s[i]!='?')
         {
             cout<<"No"<<endl;
             return 0;
         }
     }
     for(int i=0;i<n;i++)
     {
         if(i>0 && s[i]==s[i-1] && s[i]=='?')
         {
             cout<<"Yes"<<endl;
             return 0;
         }
     }
     int sum =0;
     for(int i=0;i<n;i++)
     {
         if(s[i]=='?')sum++;
     }
     if(sum==0){cout<<"No"<<endl; return 0; }
     if(s[0]=='?' || s[n-1]=='?')
     {
         cout<<"Yes"<<endl;
         return 0;
     }
     int p=0;
     for(int i=0;i<n;i++)
     {
         if(i>0 && i<n-1 && s[i]=='?')
         {
             if(s[i-1]==s[i+1])p=1;
         }
     }
     if(p==0)cout<<"No"<<endl;
     else cout<<"Yes"<<endl;
   }



}

