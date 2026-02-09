#include<bits/stdc++.h>
using namespace std;
int main()
/*{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1&&b==1&&c==1)cout<<a+b+c<<endl;
    else
    {
        if((c>a&&c>b)||(a==1&&b>=1&&c>1))cout<<(a+b)*c<<endl;
        if((a>b&&a>c)||(c==1&&b>=1&&a>1))cout<<a*(b+c)<<endl;
        if(a>1&&b>1&&c>1)cout<<a*b*c<<endl;

    }
}*/
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x[6];
    x[0]=(a+b)*c;
    x[1]=a*(b+c);
    x[2]=a+b*c;
    x[3]=a*b*c;
    x[4]=a+b+c;
    x[5]=a*b+c;
    sort(x,x+6,greater<int>());
    cout<<x[0];
    return 0;
}


