#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int sum=0,ss=0;
vector <int >v;
for(int i=0;i<n;i++)
{
    if(s[i]=='B')ss++;
    else {
        if(ss>0)v.push_back(ss);
        ss=0;
    }
}
if(ss>0)v.push_back(ss);
cout<<v.size()<<endl;
for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
cout<<endl;

}
