#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n==m)cout<<n+1<<endl;
    else if(n<m) cout<<n<<endl;
    else
    {
        int c=0;
        for(int i=1;i<=(n+c);i++)
        {
            if(i%m==0)c++;
        }
        cout<<n+c<<endl;
    }
}
