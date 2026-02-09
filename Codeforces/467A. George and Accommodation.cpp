#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a<b-1)s++;
    }
    cout<<s<<endl;
}
