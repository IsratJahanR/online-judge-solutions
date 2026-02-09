#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=0,z=0;
    for(int i=0;i<N;i++)
    {
        if(s[i]=='n')n++;
        if(s[i]=='z')z++;
    }
    for(int i=0;i<n;i++)cout<<"1 ";
    for(int i=0;i<z;i++)cout<<"0 ";
    cout<<endl;
}
