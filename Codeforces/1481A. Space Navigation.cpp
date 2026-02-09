#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin>>tc; while(tc--)
    {
        int a,b;
        string s;
        cin>>a>>b;
        cin>>s;
        int r=0,l=0,d=0,u=0;
        for(int i=0;i<s.size(); i++)
        {
            if(s[i]=='L')l++;
            if(s[i]=='R')r++;
            if(s[i]=='D')d++;
            if(s[i]=='U')u++;

        }
        if(a>=0 && b>=0)
        {
            if(a<=r && b<=u)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(a<=0 && b>=0)
        {
            if(abs(a)<=l && b<=u)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(a>=0 && b<=0)
        {
            if(a<=r && abs(b)<=d)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if(abs(a)<=l && abs(b)<=d)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }


    }
}

