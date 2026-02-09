#include<bits/stdc++.h>
#include<cstring>
#define SIZE 100
using namespace std;
string s,ss,vis ;
//map<char,ll>mp;
int main()
{
    int i,len,c;
    getline(cin,s);
    len=s.size();
    for(i=0;i<len;i++)
    {
        if(s[i]>='A'&&s[i<='Z'])
                                {
                                    if(vis[s[i]]==0){
                                      vis[s[i]]=1;
                                      ss=ss+s[i];
                                    }
                                }
    }
    c=ss.size();
    cout<<c<<endl;
    if(c%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

}
