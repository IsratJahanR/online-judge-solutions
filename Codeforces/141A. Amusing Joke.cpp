#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s,ss,sss;
    cin>>s>>ss>>sss;
    s=s+ss;
    sort(s.begin(),s.end());
    sort(sss.begin(),sss.end());
    if(s==sss)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
