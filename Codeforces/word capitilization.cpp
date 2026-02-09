#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch=' ';
    string s;
    cin>>s;
    if(s[0]>=97&&s[0]<=122){ch=s[0]-32;
    cout<<ch;
    s.erase(s.begin()+0);
    cout<<s<<endl;}
    else
        cout<<s<<endl;
}
