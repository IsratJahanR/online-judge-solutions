#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a%2==1 && b%2==0)
        {
            cout<<(b-a+1)/2<<endl;
        }
        else if(a%2==1 && b%2==1)
        {
            cout<<((b-a)/2)-b<<endl;
        }
        else if(a%2==0 && b%2==0)
        {
            cout<<a+(b-a)/2<<endl;
        }
        else cout<<(-1)*(b-a+1)/2<<endl;
    }

}
