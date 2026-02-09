///                            Israt Jahan Reshma
///                              ID: 18ICTCSE041
///                                  BSMRSTU

///...........................****************************............................///


#include<bits/stdc++.h>
#include<stdio.h>
#include<unordered_set>

using namespace std;


//.....................Keywords..................>
typedef long long           ll;
typedef long long int       lli;
typedef unsigned long long  ull;
typedef long double         ld;
typedef vector <int>        vi;
typedef vector <ll>         vll;
typedef pair <int, int>     pii;
typedef pair <ll, ll>       pll;



const int         N   = (int) 2e5 + 5;
const int         MxN = (int) 1e6 + 6;
const int         MOD = (int) 1e9 + 7;
const int         INF = (int) 1e9 + 9;
const double      EPS = (double) 1e-9;
const long double PI  = 3.14159265358979;
const lli         M =998244353;



#define pb              push_back
#define F               first
#define S               second
#define mp              make_pair
#define I               insert
#define pob             pop_back
#define inf             1e9+9
#define setpoint(x)     setprecision(x)<<fixed

#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
#define Ssort(a)         sort(a.begin(),a.end())
#define rsort(v)        sort(v.rbegin(),v.rend())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<int>())
#define reverse(a)      reverse(a.begin(),a.end())
#define sum_arr(a,n,s)  accumulate(a,a+n,s)
#define bin_one(n)      __builtin_popcount(n)
#define str(a)          a.begin(),a.end()
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";
#define pll             pair <ll, ll>
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";




int main()
{
    fastio();

    ll tc; tc=1;
    int Case=0;
    cin>>tc;

    while(tc--)
    {
        ll n,m,x,k,i,mx=0,mn=1000000,k1,ans,mxx=0;
        cin>>n;
        ll a[n],b[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            if(a[i]>=mx)
            {
                mx=a[i];
                k=i;
            }
            if(a[i]<mn)
            {
                mn=a[i];
                k1=i;
            }
            if(i>0)mxx=max(mxx,a[i-1]-a[i]);

        }
        mxx=max(mxx,a[n-1]-a[0]);
        sort(b,b+n);
        if(a[0]==b[0] || a[n-1]==b[n-1] || a[(k+1)%n]==b[0])
        {
            cout<<b[n-1]-b[0]<<endl;
        }
        else
        {
            ll a1 = max(a[n-1],a[(k1-1+n)%n])-b[0];
            ll a2 = b[n-1]-min(a[0],a[(k+1)%n]);
            ans = max(a1,max(a2,mxx));
            cout<<ans<<endl;
        }
    }

}
