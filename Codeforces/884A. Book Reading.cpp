#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    int ss,s=0,p=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
     p++;
     ss=86400-a[i];
     s+=ss;
     if(s>=t)break;
    }
    cout<<p<<endl;

}
