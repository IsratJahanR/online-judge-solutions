#include<bits/stdc++.h>

#define ll long long
#define pb push_back
const int         MxN = (int) 1e6 + 6;


using namespace std;

int main()
{

    int tc=1,Case=1; cin>>tc;
    while(tc--)
    {
       ll n,i,j,k,p,x,y,H,M,mn=1000000,q,kk;
       cin>>n;
       i=9;
       vector<int>v;
       while(n)
       {
           if(n>i){
                v.pb(i);
                n-=i;
           }
           else {
                v.pb(n);
                n=0;
           }
           i--;


       }
       reverse(v.begin(),v.end());
       for(i=0;i<v.size();i++)cout<<v[i];
       cout<<endl;

    }

   return 0;
}
