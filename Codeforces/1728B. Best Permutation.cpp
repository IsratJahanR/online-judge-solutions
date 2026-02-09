
#include<bits/stdc++.h>
#include<stdio.h>
#include<unordered_set>

using namespace std;


//.....................Keywords..................>
typedef long long           ll;


int main()
{

    ll tc; tc=1;
    int Case=0;
    cin>>tc;

    while(tc--)
    {
        ll n,m,x,k,i,mx=0,mn=1000000,k1,ans,mxx=0,p,r;
        string s;
        if(n%3==2)for(i=1;i<=n;i++)cout<<i<<" ";
        else if(n%3==0)
        {
            for(i=1;i<=n;i++)
            {
                if(i==3)cout<<4<<" ";
                else if(i==4)cout<<3<<" ";
                else cout<<i<<" ";
            }

        }
        else if(n%3==1)
        {
            cout<<n-2<<" ";
           for(i=1;i<n-2;i++)cout<<i<<" ";
           cout<<n-1<<" "<<n;
        }

           cout<<endl;







    }

}
