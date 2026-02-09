#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,i=2,sum=1;
        cin>>x;
             for(i=2;i<x;i*=2){
                 sum=sum+i;
                if(x%sum==0){cout<<x/sum<<endl; break;}
                   }

    }
}
