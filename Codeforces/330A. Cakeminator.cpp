#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string s[a];
    int ss=0;
    for(int i=0;i<a;i++)
    {
        cin>>s[i];
        int c=0;
        for(int j=0;j<b;j++)
        {
         if(s[i][j]=='.')c++;
        }
        if(c==b)ss++;
    }
    int s1=0;
    for(int i=0;i<b;i++)
    {
        int p=0;
        for(int j=0;j<a;j++)
        {
            if(s[j][i]=='.')p++;
        }
        if(p==a)s1++;
    }
    int ans=ss*b +s1*a-ss*s1;
    cout<<ans<<endl;

}
