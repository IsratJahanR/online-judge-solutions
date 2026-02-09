
#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#define ll long
using namespace std;
int main()
{
    int t; cin>>t; while(t--)
    {
        int n;
        cin>>n;
        string ss;
        cin>>ss;
        vector<char> s;
        int x=0,y=0;
        for(int i=0;i<n-1;i++)
        {
            if(ss[i]!=ss[i+1])s.push_back(ss[i]);
        }
        s.push_back(ss[n-1]);
        //for(int i=0;i<s.size();i++)cout<<s[i];
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L')
            {
                l++;
                if(r==0)x--;
                else r=0;
                u=0,d=0;
            }
            if(s[i]=='R')
            {
                r++;
                if(l==0)x++;
                else l=0;
                u=0,d=0;
            }
            if(s[i]=='U')
            {
                u++;
                if(d==0)y++;
                else d=0;
                l=0,r=0;
            }
            if(s[i]=='D')
            {
                d++;
                if(u==0)y--;
                else u=0;
                l=0,r=0;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}
