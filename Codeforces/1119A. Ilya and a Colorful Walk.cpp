#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],m=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=0;
    int j=n-1,x,y;
    for(int i=0;i<n;i++)
    {
          if(a[i]==a[n-1])x=0;
          else x=j-i;
          if(a[0]==a[i])y=0;
          else y=i;
          p=max(x,y);
          m=max(m,p);

    }
    cout<<m<<endl;
}
