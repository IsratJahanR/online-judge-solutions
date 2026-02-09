
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ans=1000000,a=0,b=0,c=0,ab=0,bc=0,ca=0,abc=0;
    int n,t;
    cin>>t;
    while(t--){
    string s;
    int n;
    cin>>n>>s;
    sort(s.begin(),s.end());
    if(s=="ABC" &&(abc==0 || abc>n))abc=n;
    else if(s=="A"&& (a==0 || a>n))a=n;
    else if(s=="B"&& (b==0 || b>n))b=n;
    else if(s=="C" && (c==0 || c>n))c=n;
    else if(s=="AB"&& (ab==0 || ab>n))ab=n;
    else if(s=="BC"&& (bc==0 || bc>n))bc=n;
    else if(s=="AC" &&(ca==0 || ca>n))ca=n;
    }
    int q=0;
    if(a>0&& b>0&& c>0)ans=min(ans,a+b+c),q++;
    if(a>0&& bc>0)ans=min(ans,a+bc),q++;
    if(b>0&& ca>0)ans=min(ans,b+ca),q++;
    if(c>0&& ab>0)ans=min(ans,c+ab),q++;
    if(ab>0&& bc>0)ans=min(ans,ab+bc),q++;
    if(ab>0&& ca>0)ans=min(ans,ab+ca),q++;
    if(ca>0&& bc>0)ans=min(ans,ca+bc),q++;
    if(abc>0)ans=min(ans,abc),q++;
    if(q==0)cout<<-1<<endl;
    else cout<<ans<<endl;

}
