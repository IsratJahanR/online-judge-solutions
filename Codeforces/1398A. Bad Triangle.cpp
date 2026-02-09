#include<bits/stdc++.h>
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
using namespace std;
int main()
{
    MP
    long long tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        if(a[0]+a[1]<=a[n-1])cout<<1<<" "<<2<<" "<<n<<endl;
        else cout<<-1<<endl;
    }
}
