#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,sum=0;
    cin>>n>>h;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%h==0)sum=sum+x/h;
        else sum=sum+x/h+1;

    }
    cout<<sum<<endl;
}
