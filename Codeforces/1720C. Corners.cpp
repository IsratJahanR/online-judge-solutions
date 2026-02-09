
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{

    int t=1,Case=1; cin>>t;
    while(t--)
    {
       ll n,ans=0,i=0,prd=1,x,m,q=0,k,mx=0,j;
        cin>>n>>m;
        string s[n];
        int f=0;
        for(i=0;i<n;i++)
        {
            cin>>s[i];
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='1')ans++;
                q=0;
                if(i>0 && j>0 && f==0)
                {
                    if(s[i-1][j-1]=='0')q++;
                    if(s[i-1][j]=='0')q++;
                    if(s[i][j-1]=='0')q++;
                    if(s[i][j]=='0')q++;
                }
                if(q>1)f=1;
            }
        }
        if(f)cout<<ans<<endl;
        else if(ans==m*n) cout<<ans-2<<endl;
        else cout<<ans-1<<endl;


    }

}

