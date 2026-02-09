#include<bits/stdc++.h>
using namespace std;
int main()
{
   // int w; cin>>w; while(w--){
    int n;
    vector<int > e,o;
    cin>>n;
    int a[n],ans=0,m=-1,p=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m=max(m,a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)p++;
        else
        {
            ans=max(p,ans);
            p=0;
        }
    }
    ans=max(p,ans);
    cout<<ans<<endl;
//}
}
