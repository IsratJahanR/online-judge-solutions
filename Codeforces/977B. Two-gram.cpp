#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    string a,b;
    map<string,int>m;
    int max=0;
    for(int i=0;i<s.size();i++)
    {
        a=s[i];
        a+=s[i+1];
        m[a]++;
        if(m[a]>max)
        {
            max=m[a];
            b=a;
        }
    }
    cout<<b;


}

