
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

    int tc; cin>>tc;
    while(tc--)
    {
        ll m,n,x,r1=0,r2=0,y,p,k,a,b,ans;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')v.pb(i);
        }
        m=v.size();
        int i = v[0];
        a=v[0];
        b=v[m-1];
        int f=0,f1=0;
        while(i<=b)
        {
            if(i==b)f=1;
            if(s[i]=='*')
            {
              r1++; i+=k;
            }
            else i--;
        }
        if(f==0)r1++;
        i = b;
        while(i>=a)
        {

            if(i==a)f1=1;
            if(s[i]=='*')
            {
              r2++; i-=k;
            }
            else i++;
        }
        if(f1==0)r2++;
        cout<<min(r1,r2)<<endl;


    }
    return 0;
}


