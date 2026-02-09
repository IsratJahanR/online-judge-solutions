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
#define mll             map<ll,ll>

///.....................function..................>


#define Fast            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<int>())
#define reverse(a)      reverse(a.begin(),a.end())
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";


int main()
{
    //Fast
    ll tc=1; cin>>tc;
    //seive();
    while(tc--)
    {
        ll n,k,i,ans=0,s=0,s2=0,j,mx,mn,a1,a2,l,r,L,R;
        cin>>n>>l>>r;
        ll a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        a1=0;
        a2=n-1;
        for(i=1;i<=n;i++)
        {
            L=l-a[i];
            R=r-a[i];
            s=upper_bound(a+i+1,a+n+1,R)-lower_bound(a+i+1,a+n+1,L);
            ans+=s ;
        }
         cout<<ans<<endl;






    }
    return 0;
}

