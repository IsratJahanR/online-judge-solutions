#include<bits/stdc++.h>
#define ll long long
#define gcd(a,b)    __gcd(a,b)
using namespace std;

int main()
{
    ll m,n,c,r,t,ans=0,k,b,i=0,j,x,y;
    string s;
    cin>>s;
    //sort(s.begin(),s.end());
    int c1=s[0]-'0';
    int c2=s[1]-'0';
    int c3=s[2]-'0';
    int c4=s[3]-'0';
         if(c1+c2+c3+c4==7)cout<<c1<<"+"<<c2<<"+"<<c3<<"+"<<c4<<"="<<c1+c2+c3+c4<<endl;
    else if(c1+c2+c3-c4==7)cout<<c1<<"+"<<c2<<"+"<<c3<<"-"<<c4<<"="<<c1+c2+c3-c4<<endl;
    else if(c1+c2-c3+c4==7)cout<<c1<<"+"<<c2<<"-"<<c3<<"+"<<c4<<"="<<c1+c2-c3+c4<<endl;
    else if(c1+c2-c3-c4==7)cout<<c1<<"+"<<c2<<"-"<<c3<<"-"<<c4<<"="<<c1+c2-c3-c4<<endl;
    else if(c1-c2+c3+c4==7)cout<<c1<<"-"<<c2<<"+"<<c3<<"+"<<c4<<"="<<c1-c2+c3+c4<<endl;
    else if(c1-c2+c3-c4==7)cout<<c1<<"-"<<c2<<"+"<<c3<<"-"<<c4<<"="<<c1-c2+c3-c4<<endl;
    else if(c1-c2-c3+c4==7)cout<<c1<<"-"<<c2<<"-"<<c3<<"+"<<c4<<"="<<c1-c2-c3+c4<<endl;
    else //if(c1-c2-c3-c4<=9 && c1-c2-c3-c4>=0)
        cout<<c1<<"-"<<c2<<"-"<<c3<<"-"<<c4<<"="<<c1-c2-c3-c4<<endl;



}



