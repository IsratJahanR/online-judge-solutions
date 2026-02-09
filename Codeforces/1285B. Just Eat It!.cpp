#include<bits/stdc++.h>
using namespace std;
int main()
{
    int g; cin>>g; while(g--){
    long long n,x;
    cin>>n;
    long long a[n],i,j;
    long long s1=0,p=0,s2=0;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        s1+=a[i];
        s2+=a[j];
        if(s1<=0 || s2<=0){p=1; break;}
    }
    if(p==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}
