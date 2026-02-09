#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int t; cin>>t; while(t--){
    int i,a[5],s=0,q=1,sum=0,m=0;
    for(i=0;i<5;i++){cin>>a[i]; sum+=a[i];}
    sort(a,a+5,greater<>());
    for(i=0;i<4;i++)
    {
        if(a[i]==a[i+1]){ q++; s=q*a[i];}
        else {q=1; m=max(m,s); s=0;}
        if(q==3)break;
    }
    m=max(m,s);
    cout<<sum-m<<endl;
//}
}
