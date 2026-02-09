#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,s1,s2,s3;
    cin>>str;
    //long long a,b,s;
    int j=0;
    for(int i=0;i<str.length();i++)
    {
       if(str[i]=='+')break;
       s1[i]=str[i];
       j++;

    }
    int k=0;
    for(int i=j;i<str.length();i++)
    {
        if(str[i]=='=')break;
        s1[i]=str[i];
        k++;

    }
    for(int i=k;i<str.length();i++)s3[i]==str[i];
    for(int i=0;i<s1.size();i++)cout<<s1[i];
    for(int i=0;i<s2.size();i++)cout<<s2[i];
    for(int i=0;i<s3.size();i++)cout<<s3[i];

    //long long a=s[0]-'0';
    //long long b=s[2]-'0';
    //long long s=s[4]-'0';
    //int d=s-(a+b);
    //int d1=d/2;
    //if((d%2!=0)cout<<"Impossible"<<endl;
    //else{
    //if(a<=b)cout<<a+d1<<"+"<<b<<"="<<s-d1<<endl;
    //else if(a>b)cout<<a<<"+"<<b+d1<<"="<<s-d1<<endl;

}
