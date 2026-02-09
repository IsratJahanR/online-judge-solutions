#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        string s;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>s;
            if(i<n)
            {
                if(s[m-1]=='R')sum++;
            }
            else if(i==n)
            {
                for(int j=0;j<m-1;j++)
                {
                    if(s[j]=='D')sum++;
                }
            }

        }
        cout<<sum<<endl;
    }
}
