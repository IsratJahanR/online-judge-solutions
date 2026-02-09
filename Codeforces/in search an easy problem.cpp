#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x[101],c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]==0)c++;
    }
    if(c==n)cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
}
