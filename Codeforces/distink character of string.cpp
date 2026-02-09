#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int c=0;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    cout<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])c++;
    }
    cout<<c<<endl;
}
