#include<bits/stdc++.h>
using namespace std;
vector<int>adj[2005];
vector<bool>vis(2005,false);

 int n,mx=0,p=0;
 void dfs(int vertex)
 {
     if(vertex==0)return;
     p++;
     for(auto v : adj[vertex])
     {
         dfs(v);
     }
     mx=max(p,mx);
     p=0;
 }

int main()
{

   cin>>n;
   int x;
   for(int i=1;i<=n;i++)
   {
       cin>>x;
       if(x==-1)x=0;
       adj[i].push_back(x);
   }
   for(int i=1;i<=n;i++){
        dfs(i);
   }
   cout<<mx<<endl;


}
