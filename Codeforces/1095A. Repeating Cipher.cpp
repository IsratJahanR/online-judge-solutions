#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    string s;
    cin>>s;
    int sum=0,j;
    for(int i=1,j=1;i<=t;i++,j++)
    {
        sum+=j;
        i=sum;
       // cout<<i<<endl;
        //if(i>t)break;
        cout<<s[i-1];
        //cout<<i<<endl;

    }
}
