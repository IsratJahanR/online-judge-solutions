#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,s=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        //sum++;
        sum+=i;
        s+=sum;
        if(s>n)break;
    }
    cout<<i-1<<endl;
}
