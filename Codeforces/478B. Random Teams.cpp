
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


ll next_sqr(int n)
{
    int x =sqrt(n);
    if(x*x==n)return n;
    else return (x+1)*(x+1);
}
int main()
{

    int t=1,Case=1; //cin>>t;
    while(t--)
    {
       ll n,ans=0,i=0,prd=1,x,m,q=0,k,mx=0,p,mn,r=0;
        cin>>n>>m;
        p=n-(m-1);
        //cout<<mx<<endl;
        mx = p*(p-1)/2;
        p = n/m;
        mn = p*(p-1)/2;
        r=n%m;
        mn*=(m-r);
        p++;
        mn+=r*(p*(p-1)/2);

        cout<<mn<<" "<<mx<<endl;
    }

}


