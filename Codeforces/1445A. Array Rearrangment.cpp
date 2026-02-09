#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--){
    int n,x,p=0;
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    reverse(b,b+n);
    for(int i=0;i<n;i++){if(a[i]+b[i]>x){p=1; break;} }
    if(p==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    }
}
