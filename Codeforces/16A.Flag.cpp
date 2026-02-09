#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char ch[105][105];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)cin>>ch[i][j];
   }
   for(int i=0;i<n-1;i++)
   {
     for(int j=0;j<m;j++)
     {
         if(ch[i][j]==ch[i+1][j] ) {
                cout<<"NO"<<endl;
         return 0;
            }
     }
   }
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<m-1;j++)
     {
         if(ch[i][j]!=ch[i][j+1]  )
            {
                cout<<"NO"<<endl;
                return 0;
            }
     }
   }

    cout<<"YES"<<endl;

return 0;
}
