            ///Israt jahan Reshma.........>

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll x,j;
        cin>>x;
        for(j=0;;j++)
        {
            if(x==1){cout<<j<<endl; break;}
            if(x%6==2){cout<<"-1"<<endl; break; }
            if(x%6==0)x=x/6;
            else x=x*2;
        }

    }
}
