#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    int j,i,c=0;
    cin>>s>>s1;
    for( i=s.length()-1,j=0;i>=0,j<s1.length();i--,j++)
    {
        if(s[i]==s1[j])c++;
    }
    if(c==s1.length())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
