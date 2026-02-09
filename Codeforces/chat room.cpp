#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello";
    string s1;
    cin>>s1;
    int i,j=0,count=0;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]==s[j])
        {
            count++;
            j++;
        }


    }
    if(count==s.length())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
