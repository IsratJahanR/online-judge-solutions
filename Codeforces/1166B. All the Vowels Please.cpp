#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,f=0;
    cin>>k;
    string s="aeiou";
    if(k<25){cout<<"-1"<<endl; return 0;}
    for(int i=5;i<=k;i++)
    {
        if(k%i==0 && k/i>=5)f=i;
    }
    if(f==0){cout<<"-1"<<endl; return 0; }
    int g=k/f;
    vector<char> ch;
    for(int i=0,j=0;i<f;i++,j++)
    {
       if(j==5)j=0;
       ch.push_back(s[j]);
    }
    for(int i=0;i<g;i++)
    {
        int k=0;
        for(int j=0;j<f;j++)
        {
            //if(k+i==f)k=0;
            cout<<ch[(k+i)%5];
            k++;
        }
        //cout<<endl;
    }
}
