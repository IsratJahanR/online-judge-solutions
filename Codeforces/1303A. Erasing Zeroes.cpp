#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; while(t--){
    string s;
    cin >>s;
    int p=0,ss=0;
    int n=s.size();
    vector<int > k;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')k.push_back(i);
        else p++;

    }
    if(p==n)cout<<0<<endl;
    else{
    for(int i=0;i<k.size()-1;i++)
    {
       ss+=k[i+1]-k[i]-1;
    }
    cout<<ss<<endl;
    }
}
}
