#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    if(k%10==r)cout<<1<<endl;
    else
    {
        for(int i=1;;i++)
        {
            if(k*i%10==0||k*i%10==r){cout<<i<<endl; break;}
        }
    }
}
