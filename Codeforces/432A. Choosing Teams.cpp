#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a+m<=5)sum++;
    }
    sum/=3;
    cout<<sum<<endl;
}
