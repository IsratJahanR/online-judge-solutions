#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,p,f,h,c,s,t;
    cin>>t;
    while(t--){
    cin>>b>>p>>f;
    cin>>h>>c;
    if((p+f)*2<=b)cout<<p*h+c*f<<endl;
    else
    {
        b=b/2;
        s=0;
        if(c>h)
        {
            //cout<<min(b,f)<<endl;
           s= min(b,f)*c;
           //cout<<s<<endl;
           if(b-f>0)s+=min((b-f),p)*h;
           cout<<s<<endl;
        }
        else
        {
           s= min(b,p)*h;
           if(b-p>0)s+=min((b-p),f)*c;
           cout<<s<<endl;
        }
    }
    }
}
