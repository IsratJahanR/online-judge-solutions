#include <bits/stdc++.h>
#define ll long long
#include<stdio.h>
using namespace std;

int main()
{
        ll n,m,ans=0,i,j,k,l;
        cin>>n;

        l=n;
        for(i=0;i<=n*2;i++)
        {
            k=0;
            for(j=0;j<=n*2-l;j++)
            {
                if(j<l)cout<<"  ";
                else if(j<n*2-l)
                {
                    cout<<k<<" ";
                    if(j<n)k++;
                    else k--;
                }
                else cout<<k;

            }
            cout<<endl;
            if(i<n)l--;
            else l++;
         }

}


