#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[10],r;
    for(int i=1;i<=9;i++)cin>>a[i];
    int g=0,h=0;
    for(int i=0;i<n;i++)
    {
        int p,q;
        q=s[i]-'0';
        if(a[q]>q)g++;
        if(g>0 && a[q]>=q)
        {
           s[i]=a[q]+'0';
           h++;
        }
        else if(h>0) break;


    }
    for(int i=0;i<n;i++)cout<<s[i];
}
