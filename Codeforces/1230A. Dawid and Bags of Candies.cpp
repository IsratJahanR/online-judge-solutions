#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,s;
    int a[4];
    for(int i=0;i<4;i++)cin>>a[i];
    sort(a,a+4);
    //s=a+b+c+d;
    if(a[0]+a[3]==a[1]+a[2] ||a[0]+a[1]+a[2]==a[3])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
