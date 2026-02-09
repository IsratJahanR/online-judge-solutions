#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,p,q;
    string a,b;
    cin>>a>>b;
    for(int i=0;i<n;i++)
    {
      p=a[i]-'0';
      q=b[i]-'0';
      if(abs(p-q)>5)s+=abs(p-q)-5;
      else s+=abs(p-q);
    }
    cout<<s<<endl;
}
