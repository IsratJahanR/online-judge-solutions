#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;
    //int l=s.size();
    //if(l==1)cout<<s<<endl;
    int a1=0,a0=0;
    for(int i=0;i<l;i++)
    {
      if(s[i]=='1')a1++;
      else a0++;
    }
    //for(int i=l-1;i>=0;i--)
    if(a1>0)cout<<"1";
    else {cout<<"0"<<endl; return 0;}
    for(int i=0;i<a0;i++)cout<<"0";
}
