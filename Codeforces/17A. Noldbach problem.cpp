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
  int prime[1006];
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
}



string s;
int solve(int n)
{
    seive();
    int sum=0;
    for(int i=0;i<pr.size();i++)
    {
        int temp = pr[i]+pr[i+1]+1;
        if(temp<=n && prime[temp])sum++;
        else if(temp>n) return sum;
    }
    return sum;


}
int main()
{
    //Fast
    ll tc=1; //cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int ans=solve(n);
        //cout<<ans<<endl;
        if(ans>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

