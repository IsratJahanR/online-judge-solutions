#include <bits/stdc++.h>
#define ll long long
#include<stdio.h>
using namespace std;

int main()
{
    int t;   cin>>t;
    while(t--)
    {




    ll n;
    cin>>n;
    if(n%4==0)
    {
      for(int i=0;i<4;i++) cout<<n/4<<" ";
      cout<<endl;
    }
    else if(n%4==1)cout<<n/4<<" "<<(n/4)*2<<" "<<n/4<<" "<<1<<endl;
    else if(n%4==2)cout<<(n/2)-2<<" "<<(n/2)<<" "<<1<<" "<<1<<endl;
    else cout<<2<<" "<<n-5<<" "<<2<<" "<<1<<endl;
    }

}

