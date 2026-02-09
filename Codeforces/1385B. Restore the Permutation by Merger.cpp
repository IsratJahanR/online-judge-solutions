#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int a[104];
        for(int i=0;i<2*n;i++)cin>>a[i];
        cout<<a[0]<<" ";
        for(int i=1;i<2*n;i++)
        {
            int q=0;
            for(int j=i-1;j>=0;j--)
            {
                if(a[j]==a[i])break;
                else q++;
            }
            if(q==i)cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
