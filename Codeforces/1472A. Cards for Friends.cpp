#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin>>tc; while(tc--)
    {
        ll a,b,w,h,n,i,ans=1;
        cin>>w>>h>>n;
        a=w*h;
        for(i=0;;i++)
        {
            if(a%2==0){a=a/2; ans = 2*ans; }
            else break;
        }
        //cout<<i<<endl;
         if(ans>=n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }



}

