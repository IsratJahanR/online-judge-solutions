#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m],x,ss=0;

        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        //sort(a,a+n);
        //sort(b,b+m);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==b[j]){x=a[i]; ss=1; break; }
            }
        }
        if(ss==1)cout<<"YES\n"<<1<<" "<<x<<endl;
        else cout<<"NO"<<endl;
    }
}
