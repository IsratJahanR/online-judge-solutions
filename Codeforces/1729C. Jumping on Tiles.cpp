#include<bits/stdc++.h>




using namespace std;

#define N 1e7+2
#define ll long long


int main()
{
    //sieve();
    int tc=1,Case=1; cin>>tc;
    while(tc--)
     {

       long long  n,x=0,y=0,z,p=0,w,k,i,q;
       //cin>>n;
       string s;
       cin>>s;
       n=s.size();
       vector<int>v[27];
       for(int i=0;i<n;i++)
       {
           x=s[i]-'0'-48;
           //cout<<x<<endl;
           v[x].push_back(i+1);
       }
       /*for(int i=0;i<27;i++)
       {
           for(int j=0;j<v[i].size();j++)cout<<v[i][j]<<" ";
           cout<<endl;
       }*/
       int x1 = s[0]-'0'-48;
       int x2 = s[n-1]-'0'-48;
       //cout<<x1<<" "<<x2<<endl;
       vector<int>ans;
       if(x1<x2)
       {
         for(int i=x1;i<=x2;i++)
           {
               for(int j=0;j<v[i].size();j++)ans.push_back(v[i][j]);
           }
       }
       else
       {
          for(int i=x1;i>=x2;i--)
           {
               for(int j=0;j<v[i].size();j++)ans.push_back(v[i][j]);
           }
       }
       cout<<abs(x1-x2)<<" "<<ans.size()<<endl;
       for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
       cout<<endl;



    }


}
