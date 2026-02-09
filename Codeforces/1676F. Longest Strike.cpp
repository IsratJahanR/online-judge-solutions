///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                                BSMRSTU

///......................****************************............................///


#include<bits/stdc++.h>
#include<set>
#include<iostream>
#include<vector>
using namespace std;


//.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
#define F               first
#define S               second
#define mp              make_pair
#define I               insert
#define endl            '\n'
#define pob             pop_back
#define inf             1e9+9
#define setpoint(x)     setprecision(x)<<fixed

const int         N   = (int) 2e5 + 5;
const int         MxN = (int) 1e6 + 6;
const int         MOD = (int) 1e9 + 7;
const int         INF = (int) 1e9 + 9;
const double      EPS = (double) 1e-9;
const long double PI  = 3.14159265358979;
const lli M =998244353;

///.....................function..................>

#define fastio()        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(a,b)       for(ll i=a;i<b;i++)
#define loopr(a,b)      for(ll i=a-1;i>=b;i--)
//#define sort(a)         sort(a.begin(),a.end())
//sort(a,a+3,greater<ll>());
#define rsort(v)        sort(v.rbegin(),v.rend())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a*(b/gcd(a,b)))
#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";
#define rev_sort(a)     sort(a.begin(),a.end(),greater<int>())
#define reverse(a)      reverse(a.begin(),a.end())
#define str(a)          a.begin(),a.end()
#define mem(a,b)        memset(a, b, sizeof(a) )
#define max_ele(a,n)    *max_element(a,a+n)
#define min_ele(a,n)    *min_element(a,a+n)
#define print(a,n)      for(ll i=0;i<n;i++)cout<<a<<" ";
#define pll             pair <ll, ll>


void solve()
{
   int n,m,mx1=0,mx2=0,ans=0,i,j,sum=0,mn=1000000,l,k,mx=0,q,x,y;
   cin>>n>>q;
   int a[n];
   map<int,int>mp;
   map<int,int>::iterator it;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       mp[a[i]]++;
   }

   int an1,an2,s1=1;

   vector<int>v;

   for(it=mp.begin();it!=mp.end();++it)
   {
       x=it->first;
       y=it->second;

       if(y>=q) v.push_back(x);

   }

   for(i=1;i<v.size();i++)
   {
       if(v[i]==v[i-1]+1)s1++;
       else
       {

           if(s1>mx)
           {
               mx=s1;
               an1=v[i-s1];
               an2=v[i-1];
           }
           s1=1;
       }
   }

   if(s1>mx && v.size()>0)
    {
        //cout<<i-s1<<endl;
    an1=v[i-s1];
    an2=v[i-1];
    }

   if(v.size()==0)cout<<-1<<endl;
   else cout<<an1<<" "<<an2<<endl;

}
int main(){

   	//fastio()
   	ll tc; tc=1;
    cin>>tc;
    while(tc--)
    {
        //lli n,m,j,mx1=0,mx=0,mn=inf,i,res,temp=0,tmp1,tmp2,k,s2=0,ans=0,m1,m2,ff,p,g,q;
        ll x,y,b;
        string s;
        solve();

    }
}

