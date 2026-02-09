
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

    int t=1,Case=1; cin>>t;
    while(t--)
    {
       ll n,ans=0,i=0,prd=1,x,m,q=0,k,mx=0,p;
        cin>>n;
        x=next_sqr(n-1);
        k=x-n-1;
        //cout<<x<<" "<<k<<endl;
        p=n-1;
        vector<int>v;
        for(i=n-1;i>=0;i--)
        {
           if(k+i!=x || k>p)
           {
             x=next_sqr(i);
             k=x-i;
             p=i;
           }
           v.pb(k);
           k++;
        }
        for(i=v.size()-1;i>=0;i--)cout<<v[i]<<" ";
        cout<<endl;



    }

}


