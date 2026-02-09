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
  /*int prime[1006];
  vector <int> pr;
  void seive() {
    prime[0]=0;
    prime[1]=0;
    for(int i=2;i<1006;i++)prime[i]=1;

    for(int i=2;i*i<=1006;i++) {
        if (prime[i]==1) {
            for (int j=i*i;j<=1006;j+=i) {
                prime[j]=0;
            }
        }
    }

    for (int i=1;i<=1006;i++) {
        if (prime[i]) pr.pb(i);
    }
}*/




int main()
{
    //Fast
    ll tc=1; cin>>tc;
    while(tc--)
    {
        ll n,k,i,ans=0,s1=0,s2=0,j;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        vector<ll>v;
        for(i=0;i<n;i++)
        {
          if(a[i]%2==0)v.pb(a[i]);
        }
        for(i=0;i<n;i++)
        {
          if(a[i]%2==1)v.pb(a[i]);
        }

        /*for(i=0;i<n;i++)
        {
          cout<<v[i]<<" ";
        }*/
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
               if(gcd(v[i],v[j]*2)>1)s1++;
              // if(gcd(a[i]*2,a[j])>1)s2++;
            }
        }
        cout<<s1<<endl;

    }
    return 0;
}




