///Submitted by :::::::ISRAT JAHAN RESHMA

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int a[n],b[n],c[n],ans[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=0;i<n;i++)cin>>c[i];
        ans[0]=a[0];
        for(int i=1;i<n-1;i++)
        {

                if(a[i]!=ans[i-1])ans[i]=a[i];
                else if(b[i]!=ans[i-1])ans[i]=b[i];
                else ans[i]=c[i];

        }
                if(a[n-1]!=ans[0] && a[n-1]!=ans[n-2])ans[n-1]=a[n-1];
                else if(b[n-1]!=ans[0] && b[n-1]!=ans[n-2])ans[n-1]=b[n-1];
                else ans[n-1]=c[n-1];

        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        cout<<endl;
}
}
