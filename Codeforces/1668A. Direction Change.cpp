#include <bits/stdc++.h>
#define ll long long
#include<stdio.h>
using namespace std;

int main()
{
    int t,kk=1;   cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if((n==1 || m==1)&& m*n>2)
        {
            cout<<-1<<endl;
            continue;
        }
        ll mn = min(m,n);
        ll mx = max(m,n);
        ll ans;
        ans = mn;
        ans=(mn-1)*2;
        ans+=((mx-mn)/2)*3+((mx-mn)/2);
        if((mx-mn)%2==1)ans++;

        cout<<ans<<endl;
    }

}


