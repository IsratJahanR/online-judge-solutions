   ///SUBMITED BY: ISRAT JAHAN RESHMA



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k,s=0,p,ans,r;
        cin>>n>>k;
        if(n<=2)cout<<1<<endl;
        else
        {
            n=n-2;
            ans=n/k;
            r=n%k;
            if(r!=0)ans++;
            cout<<ans+1<<endl;
        }
    }
}
