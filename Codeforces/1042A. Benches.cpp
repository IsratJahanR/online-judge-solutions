#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n],s=0,mm=0,p,r;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      s+=a[i];
      mm=max(mm,a[i]);
    }
    p=m+s;
    r=p%n;
    p=p/n;
    if(r!=0)p++;
    cout<<max(p,mm)<<" "<<m+mm<<endl;
}
