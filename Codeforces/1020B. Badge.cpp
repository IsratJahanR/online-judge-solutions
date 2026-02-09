#include<bits/stdc++.h>
using namespace std;
vector<int>adj[1003];
vector<bool>vis(1003,false);

 int n,mx=0,p;
 void dfs(int vertex)
 {
     if(vis[vertex])
     {
         p=vertex;
         return;
     }
     vis[vertex]=true;

     for(auto v : adj[vertex]) dfs(v);

 }

int main()
{

   cin>>n;
   int x;
   for(int i=1;i<=n;i++)
   {
       cin>>x;
       adj[i].push_back(x);
   }
   for(int i=1;i<=n;i++){
        dfs(i);
        cout<<p<<" ";
        for(int j=1;j<=n;j++)vis[j]=false;
   }
   cout<<endl;


}

