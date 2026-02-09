#include<bits/stdc++.h>
#include<algorithm>
//#define is(a,a.size()) is_sorted(a,a+a.size())
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n],co=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){cin>>b[i]; co+=b[i];}
        if(is_sorted(a,a+n)){cout<<"Yes"<<endl; continue; }
        if(co>0 && co<n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
}
