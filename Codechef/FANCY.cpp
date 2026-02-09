#include<bits/stdc++.h>
#define ll long long
#define gcd(a,b)    __gcd(a,b)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    fast();
    ll m,n,c,r,t,ans,k,a,b,i,j,x,y,d;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        string ss="";
        int g=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                ss+=s[i];
            }
            if(s[i]==' ' || i==s.size()-1)
            {
                if(ss=="not"){g=1; break;}
                ss="";
            }
            //cout<<i<<endl;
        }
        if(g==1)cout<<"Real Fancy"<<endl;
        else cout<<"regularly fancy"<<endl;
    }

}



