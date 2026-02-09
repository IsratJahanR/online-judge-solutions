
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int res=0,r=0,q=0;
        while(n!=0)
        {
         r=n%10;
         n=n/10;
         q++;
        }
        for(int i=1;i<r;i++)
        {
            res+=10;
        }
        res+=q*(q+1)/2;
        cout<<res<<endl;
    }
}
