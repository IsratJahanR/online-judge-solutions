
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
   	ll t,tt=1; //cin>>tt;
    while(tt--)
    {
        ll n,u,v,j,mx=0,mn,ans,i,ii,nn,sum=0,m,x,y,d,k,q;
        cin>>n>>q;
        string s;
        cin>>s;

        ll a[n+1],l,r;
        a[0]=0;
        for(i=1;i<=n;i++)
        {
           int cn= s[i-1]-96;
           a[i]=a[i-1]+cn;
        }
       for(i=0;i<q;i++)
       {

           cin>>l>>r;
           cout<<a[r]-a[l-1]<<endl;
       }



    }
    return 0;
}

