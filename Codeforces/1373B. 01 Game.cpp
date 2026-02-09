#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    int l=s.size();
    while(t--)
    {
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<s.length();i++)
        {
         if(s[i]=='0')z++;
         else o++;
        }
        int x=min(o,z);
        if((z==o && z%2==0) || x%2==0 || z==l || o==l) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
}
