#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    //string ss="abcdefghijklmnopqrstuvwxyz";
    //if(s.size()<ss.size()){cout<<"NO"<<endl; return 0;}
    int p=65;
    for(int i=0;i<26;i++)
    {

        for(int j=0;j<s.size();j++)
        {
            if(s[j]==p || s[j]==p+32){c++; break;}
        }
         p++;
    }
   // cout<<c<<endl;
    if(c==26)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
