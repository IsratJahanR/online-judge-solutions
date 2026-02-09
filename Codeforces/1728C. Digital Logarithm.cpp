

#include<bits/stdc++.h>
#include<stdio.h>
#include<unordered_set>

using namespace std;
bool vis[10000]={false};

typedef long long           ll;

int tt=0,kk=0;

ll Pow(ll base,ll pow)
{
    ll ans = 1;
    for(ll i=1;i<=pow;i++)
    {
       ans*=base;
    }
    return ans ;

}
void sep(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        vis[mid]=true;
        cout<<a[mid]<<" ";
        kk++;
        if(kk>=Pow(2,tt))
        {
            tt++;
            kk=0;
            cout<<endl;
        }
        sep(a,l,mid-1);
        sep(a,mid+1,r);
    }



}
int main()
{
    int tc; cin>>tc;
    while(tc--)
     {


       ll n,x=0,y=0,z,p=0,w,b,k,i,ans=0;
       cin>>n;
       priority_queue<ll>q1,q2;
       for(i=0;i<n;i++)
       {
           cin>>x;
           q1.push(x);
       }
       for(i=0;i<n;i++)
       {
           cin>>x;
           q2.push(x);
       }
       while(!q1.empty() && !q2.empty())
       {
           x=q1.top();
           y=q2.top();
           p=0;
           //cout<<x<<" "<<y<<endl;
           if(x==y)
           {
               q1.pop();
               q2.pop();
           }
           else if(x>y)
           {
               q1.pop();
               while(x)
               {
                   p++;
                   x/=10;
               }
               q1.push(p);
               ans++;
           }else
           {
               q2.pop();
               while(y)
               {
                   p++;
                   y/=10;
               }
               q2.push(p);
               ans++;
           }
       }
       cout<<ans<<endl;

    }


}
