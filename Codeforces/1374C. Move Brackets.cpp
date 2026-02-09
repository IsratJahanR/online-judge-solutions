#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int s1=0,s2=0,t1=0,t2=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')s1++;
            else s2++;
            if(s2<s1)
            {
                p++;
                s1=0;
                s2=0;
            }
        }

        cout<<p<<endl;
    }
}
