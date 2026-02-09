///Submitted by::::---->ISRAT JAHAN RESHMA
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,co,c1,h,a=0,b=0,an1,an2;
        cin>>n>>co>>c1>>h;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')a++;
            else b++;
        }
        an2=a*co+b*c1;
        if(co==c1)
        {
            an1=a*co+b*c1;
        }
        else if(co+h<c1)
        {
            an1=a*co+b*(co+h);
        }
        else
        {
            an1=b*c1+a*(c1+h);
        }
        an1=min(an1,an2);
        cout<<an1<<endl;
    }
}
