#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    cin>>s;
    int c=0;
    for(int i=0;i<5;i++)
    {
        cin>>ss;
        if(s[0]==ss[0] || s[1]==ss[1])c++;
    }//cout<<c<<endl;
    if(c>0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
