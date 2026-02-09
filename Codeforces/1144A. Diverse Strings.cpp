#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d=0;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1]+1){cout<<"No"<<endl; d++; break;}
        }
        if(d==0)cout<<"Yes"<<endl;
    }
}
