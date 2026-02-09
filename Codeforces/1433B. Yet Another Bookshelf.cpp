#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b=a[n],a1=0,a2=0,m=10000000,ans=0,a3=0;
        vector<int > x;
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                if(a1>0 && a2>0){ans+=a2; a1=0; a2=0;}
                a1++;
            }
            else if(a1>0)a2++;
        }
            cout<<ans<<endl;
    }
}
