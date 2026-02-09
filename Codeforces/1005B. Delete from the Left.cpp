#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s,ss; cin>>s>>ss;
    ll l1,l2;
    l1=s.length();
    l2=ss.length();
    //cout<<l1<<" "<<l2<<endl;
    reverse(s.begin(),s.end());
    reverse(ss.begin(),ss.end());
    if(l2>l1)swap(l1,l2);
    ll c=0;
    for(int i=0;i<l1;i++)
    {
        if(s[i]==ss[i])c+=2;
        else break;

    }
    cout<<l1+l2-c<<endl;

}
