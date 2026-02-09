#include<bits/stdc++.h>
#define ll long long
#define gcd(a,b)    __gcd(a,b)
using namespace std;

int main()
{
    ll m,n,c,r,t,ans=0,k,b,i=0,j,x,y;
    cin>>n;
    vector<int> s;
    while(n>0)
    {
        s.push_back(n%10);
        n=n/10;
        //cout<<n<<endl;
    }
    reverse(s.begin(),s.end());
    c=0;
    m=0;
    for(int i=0;i<3;i++)
    {
        if(s[i]==s[i+1])c++;
        else {m=max(m,c); c=0;}
    }
    m=max(m,c);
    //cout<<m<<endl;
    if(m>=2)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;



}



