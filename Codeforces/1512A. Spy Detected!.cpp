#include<bits/stdc++.h>

///.....................Keywords..................>
#define pb              push_back
#define ll              long long
#define lli             long long int
//#define f               first
//#define s               second
#define mp              make_pair
#define I               insert
#define endl            '\n'

///.....................function..................>


#define Fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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


using namespace std;
int main()
{
    ll tc; cin>>tc;
    while(tc--)
    {
        ll n,i,x,s1=0,s2=0,i1,i2,p;
        cin>>n;
        for(i=1;i<=n;i++)
        {
           cin>>x;
           if(i==1)p=x;
           else
           {
               if(x==p)i1=1,s1++;
               else i2=i,s2++;
           }
        }
        if(s1<s2)cout<<i1<<endl;
        else cout<<i2<<endl;
    }


    return 0;
}
