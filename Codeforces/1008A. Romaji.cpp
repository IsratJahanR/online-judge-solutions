#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v;
    int n=s.size();
    if(n==1&&s[n-1]!='a'&&s[n-1]!='e'&&s[n-1]!='i'&&s[n-1]!='o'&&s[n-1]!='u'&& s[n-1]!='n')
    {cout<<"NO"<<endl; return 0;}
    for(int i=0;i<n;i++)
    {
        if(s[i]=='n')continue;
        if(i==n-1 &&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&& s[i]!='n')
        {cout<<"NO"<<endl; return 0;}
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
        if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
         continue;
         else {cout<<"NO"<<endl; return 0;}

        }
    }
    cout<<"YES"<<endl;
}
