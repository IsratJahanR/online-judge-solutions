#include<bits/stdc++.h>
using namespace std;
bool cmp(string s, string ss)
{
    return s.size()<ss.size();
}
int main()
{
    int n,l=1000;
    cin>>n;
    string s[n],ss="";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n-1;i++)
    {
        int l=s[i+1].size();
        int dd=s[i+1].find(s[i]);
        if(dd<0 || dd>=l){cout<<"NO"<<endl; return 0;}
    }
    cout<<"YES"<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<s[j]<<endl;
    }

}
