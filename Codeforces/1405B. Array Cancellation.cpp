 ///Submitted by: Israt Jahan Reshma
 /// From " BSMRSTU(SHIICT)"

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,tc,i;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        long long p[n],tem=0;
        for(i=0;i<n;i++)cin>>p[i];
        for(i=0;i<n;i++)
        {
            if(p[i]>0)tem+=p[i];
            if(p[i]<0 && tem>0){tem=tem+p[i];}
            if(tem<0)tem=0;
        }
        cout<<tem<<endl;

    }
}

