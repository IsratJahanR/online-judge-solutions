#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        long long a[n],b[n],aa[n],bb[n],i,s1,s=0;
        for(i=0;i<n;i++){cin>>a[i]; aa[i]=a[i]; }
        for(i=0;i<n;i++){cin>>b[i]; bb[i]=b[i]; }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
          s1=max(aa[i]-a[0],bb[i]-b[0]);
          s+=s1;
        }
        cout<<s<<endl;
    }
}
