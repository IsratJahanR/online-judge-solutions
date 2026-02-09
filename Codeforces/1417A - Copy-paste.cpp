#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k,s=0,p,q;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        q=a[0];
        for(int i=1;i<n;i++)
        {
          while(a[i]<=k)
          {
              s++;
              a[i]+=q;
          }
          if(s>0)s--;
        }
        cout<<s<<endl;


    }
}

