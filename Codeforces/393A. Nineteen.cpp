
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int n=0,e=0,ii=0,t=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='n')n++;
        if(s[i]=='e')e++;
        if(s[i]=='i')ii++;
        if(s[i]=='t')t++;
    }
    //n/=3;
    e/=3;
    int x=n;
    x=x/3;
    if(n>1 && n%2==1)n=n/2;
    else n=(n/2)-1;
    int p=min(ii,e);
    p= min(p,t);
    n=max(x,n);
    p= min(p,n);
    cout<<p<<endl;
}
