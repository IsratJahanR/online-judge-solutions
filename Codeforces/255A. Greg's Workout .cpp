#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],a1=0,a2=0,a3=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    int r=n%3;
    for(int i=1;i<=n-r;i+=3)
    {
        a1+=a[i];
        a2+=a[i+1];
        a3+=a[i+2];

    }
    if(r==2){a2+=a[n]; a1+=a[n-1]; }
    if(r==1){a1+=a[n];}
    //cout<<a1<<" "<<a2<<" "<<a3<<endl;
    if(a1>a2 && a1>a3)cout<<"chest"<<endl;
    else if(a2>a1 && a2>a3)cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
}
