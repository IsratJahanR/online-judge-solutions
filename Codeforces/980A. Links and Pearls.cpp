#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l1=0,l2=0;
    string s;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='o')l1++;
        else l2++;
    }
    if(l1==0 || l2%l1==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
