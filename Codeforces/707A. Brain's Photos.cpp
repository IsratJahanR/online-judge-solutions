#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int s=0;
    char ch;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>ch;
            if(ch=='C'||ch=='M'|| ch=='Y')s++;
        }
    }
    if(s>0)cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}
