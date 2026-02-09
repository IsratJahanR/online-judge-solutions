#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,an=0,x,y;
    cin>>n;
    int a[n];
    vector<int >t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)x=a[i],y=a[i];
        if(i>0 && a[i]>x)ans++,x=a[i];
        if(i>0 && a[i]<y)an++, y=a[i];
    }

    cout<<ans+an<<endl;

}
