#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#define ll long long int
using namespace std;
int main()
{
    ll a,b,n,i,j;
    cin>>a>>b>>n;
    if(b-a+1>2*n)
    {
        j=0;
        for(i=a;i<=b;i++)
        {

            if(j==n)i=abs(b-n)+1;
            cout<<i<<endl;
            j++;
        }
    }
    else
    {
        for(i=a;i<=b;i++)
        {
         cout<<i<<endl;
        }

    }

}
