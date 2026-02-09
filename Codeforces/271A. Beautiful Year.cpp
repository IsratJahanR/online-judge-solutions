#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,y1,y2,y3,y4,p;
    cin>>p;
    while(p>0)
    {
        p++;
        y=p;
        y1=y/1000;
        y=y%1000;
        y2=y/100;
        y=y%100;
        y3=y/10;
        y4=y%10;
        if(y1!=y2 && y1!=y3 && y1!=y4 && y2!=y3 && y2!=y4 && y3!=y4)
            {  break; }

    }
    cout<<p<<endl;
}
