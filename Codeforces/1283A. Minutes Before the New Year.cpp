#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        h++;
        h=24-h;
        h=h*60;
        m=60-m;
        cout<<h+m<<endl;

    }
}
