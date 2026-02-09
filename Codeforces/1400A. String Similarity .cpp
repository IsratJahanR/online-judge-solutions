#include<bits/stdc++.h>
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
int main()
{
    MP
    int tc,n,i;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n*2-1;i+=2)cout<<s[i];
        cout<<endl;
    }
}
