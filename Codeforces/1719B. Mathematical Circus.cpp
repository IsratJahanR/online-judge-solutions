
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define N 60



int main()
{

    int t=1,Case=1; cin>>t;
    while(t--)
    {
       ll n,k=0,ans=0,i=1,prd=1,x,m;

        cin>>n>>k;
        x=k%4;
        if(x==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        if(x%2==1)
        {
            for(i=1;i<=n;i+=2)cout<<i<<" "<<i+1<<endl;
        }
        else
        {
            ll m1=4,m2=2;
            for(i=1;i<=n;i++){
                    if(i%4==0)cout<<i-1<<" "<<i<<endl;
                    else if(i%2==0)
                    {
                        cout<<i<<" "<<i-1<<endl;
                    }
            }
        }

    }

}

