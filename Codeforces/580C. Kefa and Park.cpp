
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 100001;
int wt[N];
int m;
vector<int>adj[N];
vector<bool>vis(N+1);
int ans=0;
void dfs(int u,int p,int cnt)
{
    int c=0;

    if(cnt>m)
    {
        return ;
    }

    for(auto v:adj[u])
    {
        if(v!=p)
        {
           if(wt[v])dfs(v,u,cnt+1);
           else dfs(v,u,0);
           c++;
        }

    }
    if(c==0)
    {
        ans++;
    }

}
int main()
{
    int n;
    cin>>n>>m;

    for(int i=1;i<=n;i++)cin>>wt[i];
    for(int i=1;i<n;i++)
    {
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }

    dfs(1,-1,wt[1]);
    cout<<ans<<endl;


}

