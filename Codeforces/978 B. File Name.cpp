#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ss=0,sum=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            ss++;
            if(ss>2)sum++;
        }
        else ss=0;
    }
    cout<<sum<<endl;
}
