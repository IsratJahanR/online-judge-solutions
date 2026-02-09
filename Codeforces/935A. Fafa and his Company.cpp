#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int sum=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)sum++;
    }
    cout<<sum+1<<endl;
}
