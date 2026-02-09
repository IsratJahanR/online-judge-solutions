#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0;
    char c=' ';
    char h=' ';
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(i==0){c=s[0]; h=s[1];}
        for(int j=0;j<n;j++)
        {
            if(j==i || j==n-i-1)
            {
             if(s[j]!=c)p++;
            }
            else {
                if(s[j]!=h)p++;
             }
        }


    }

    //cout<<p<<endl;
    if(p==0 && c!=h)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
