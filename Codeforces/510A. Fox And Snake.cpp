#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int j=1;j<=n;j++)
    {
            for(int i=1;i<=m;i++)
            {
                if((j%2!=0)||((i==1 && j%4==0) || (i==m && j%4==2)))cout<<"#";
                else cout<<".";
            }
            cout<<endl;

    }
}
