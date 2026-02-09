#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--)
    {
        int n,mx,mn,d,sum=0,r; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
            mx=max(a[i],a[i-1]);
            mn=min(a[i],a[i-1]);
            d=mx/mn;
            r=mx%mn;
            if(d>2 || (d==2 && r>0))
            {

               while(mn<mx)
               {
                   sum++;
                   mn*=2;

               }

               sum--;
            }
        }
        cout<<sum<<endl;
    }
}
