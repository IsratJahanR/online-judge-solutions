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


void solve()
{
   lli n,m,mx2=0,ans=0,i,j,sum=0,mn=100000000,l,k,mx=0,q,x=0,y=0,res,p,r,z=0;
   cin>>n;
   vll v;
   map<ll,ll>mp;
   for(i=0;i<n;i++)
   {
       cin>>x;
       mp[x]++;
       if(x!=0)v.pb(x);
   }
   if(v.size()<=1 or mp[0]==n)
   {
       yes
       return;
   }
   if(mp[0]>=4)mp[0]=4;
   for(i=0;i<mp[0];i++)
   {
      v.pb(0);
   }

   for(i=v.size()-1;i>=0;--i)
   {
      for(j=i-1;j>=0;--j)
      {
          for(k=j-1;k>=0;--k)
          {
              if(!mp[v[i]+v[j]+v[k]])
              {
                  no
                  return;
              }
          }
      }
   }
   yes




}

int main()
{
    fastio();
    ll tc; tc=1;
    cin>>tc;

    while(tc--) solve();

}

