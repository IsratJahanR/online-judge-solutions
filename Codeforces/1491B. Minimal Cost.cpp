
///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
using namespace std;

///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
#define f               first
#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'

///.....................function..................>

#define fastio()        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<>())
#define reverse(a)      reverse(a.begin(),a.end())
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";



int main()
{

   	//fastio()
   	ll t; cin>>t;
    while(t--)
    {
        ll n,u,v,mx=0,mn,ans,i,d1=0,d2=0,d0=0;
        cin>>n>>u>>v;
        ll a[n];
        ans=u;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=1;i<n;i++)
        {
            if(abs(a[i]-a[i-1])==0)d0=1;
            else if(abs(a[i]-a[i-1])==1)d1=1;
            else d2=1;
        }
        if(d2==1)cout<<0<<endl;
        else if(d0==1 && d1==1)cout<<min(u,v)<<endl;
        else if(d0==1)cout<<min(u+v,v+v)<<endl;
        else cout<<min(u,v)<<endl;


    }
    return 0;
}

