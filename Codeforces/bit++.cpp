#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,X=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s=="X++")X++;
        if(s=="++X")++X;
        if(s=="X--")X--;
        if(s=="--X")--X;
    }
       cout<<X<<endl;
}
