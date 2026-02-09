

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int         N   = (int) 2e5 + 5;
bool vis[N];
vector<int>adj[N];

ll a[N];
int ind[N];
vector<int>v;
int kk =1;

bool bfs(int u)
{
   vis[u]=1;
   queue<int>q;
   q.push(u);
   while(q.size())
   {
        int f=q.front();
        q.pop();
        int p=0;
        for(auto i: adj[f])
        {
            if(!vis[i])p++;
            vis[i]=1;
        }
        int i;
        for(i=kk;i<kk+p;i++)
        {
            //cout<<i<<" ";
            if(!vis[a[i]]){
                    return false;
            }
            else q.push(a[i]);
        }
        //cout<<i<<endl;
        kk=i;
   }
   return true;

}
int main()
{

    int t=1,Case=1; //cin>>t;
    while(t--)
    {
       ll n,ans=0,i=0,prd=1,x,y,m,q=0,k,mx=0,p=0,mn=1000000009,r=0;
        cin>>n;
        //ll a[n];
        for(i=0;i<n-1;i++)
        {
            cin>>x>>y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        for(i=0;i<n;i++)cin>>a[i];
        if(a[0]!=1)cout<<"No"<<endl;
        else if(bfs(a[0]))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

}

