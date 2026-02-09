///                      Author: Israt Jahan Reshma
///                            ID:18ICTCSE041
///                             Dept.of CSE
///                      Sheikh Hasina ICT Institute
///                                BSMRSTU

///......................****************************............................///

#include<bits/stdc++.h>

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


#define Fast            ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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

//const int N = 200005;

/*int n;
int a[N];

int d[N];

void dfs(int l,int r,int depth)
  {
    if (l > r) return;
    int idx = -1;
    for (int i = l; i <= r; ++i)
        {
           if (idx == -1 || a[i] > a[idx])idx = i;
        }

    d[idx] = depth;
    dfs(l, idx - 1, depth + 1);
    dfs(idx + 1, r, depth + 1);
  }*/

using namespace std;
int main()
{
    //Fast
    ll tc=1; cin>>tc;
    while(tc--)
    {
        ll n,i,an,j,sum=0,m,p,k,x;
        cin>>n;
        string s;
        cin>>s;
        bool f=0;
        vector<char> v;
        map <char,int> mp;
        if(n>1)
        {
           an=1;
           for(i=1;i<n;i++)
           {
              if(s[i]!=s[i-1])v.pb(s[i-1]);
           }
           v.pb(s[n-1]);
           for(i=0;i<v.size();i++)
           {
               if(mp[v[i]]>0){f=1; break;}
               else mp[v[i]]++;
           }
        }
        if(f==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }

    return 0;
}
