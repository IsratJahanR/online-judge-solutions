
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{

    int t=1; cin>>t;
    int pos=0,neg=0;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n<0)neg++;
        else pos++;

    }
    if(pos<=1 || neg<=1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}

