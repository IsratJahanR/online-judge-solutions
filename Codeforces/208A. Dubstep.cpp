#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<char> ch;
    vector<char >ss;
    for(int i=0;i<n;i++)
    {
        if(i<=n-3 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){ch.pb('*'); i+=2;}
        else ch.pb(s[i]);
    }

    int j=0;
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
            if(j>0)ss.pb('*');
            ss.pb(ch[i]);
            j=0 ;
        }
        else if(i>0) j++;

    }
    for(int i=0;i<ss.size();i++)
    {
       if(ss[i]>='A'&& ss[j]<='Z') cout<<ss[i];
       else if(i>0) cout<<" ";
    }
}
