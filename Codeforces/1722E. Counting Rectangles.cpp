#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back
#define solve(a) sort(a.begin(), a.end()); (a).erase(unique((a).begin(),(a).end()),(a).end())
const int mx = 1001;
ll dp[mx][mx];
int main()
{
    int IJR=1,tc=0;  cin>>IJR;
    while(IJR--)
    {
        memset(dp,0,sizeof(dp));
        ll n,k,ans=0,c=0,c1=0,i,x=3,j,a,b,d,y,mnh=10000000,mxh=0;
        cin>>n>>k;
        ll h,w;
        for(i=0;i<n;i++)
        {
            cin>>h>>w;
            dp[h][w]+=h*w;

        }
        for(i=1;i<mx;i++)
        {
            for(j=1;j<mx;j++)dp[i][j]+=dp[i][j-1];
        }
        for(i=1;i<mx;i++)
        {
            for(j=1;j<mx;j++) dp[j][i]+=dp[j-1][i];
        }
        for(j=0;j<k;j++)
        {

           cin>>a>>b>>c>>d;
           ans=dp[c-1][d-1]+dp[a][b]-dp[c-1][b]-dp[a][d-1];
           cout<<ans<<endl;
        }
    }

    return 0;
}

